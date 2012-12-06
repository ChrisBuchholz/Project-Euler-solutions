{-
 - The number, 197, is called a circular prime because all rotations of the
 - digits: 197, 971, and 719, are themselves prime.
 -
 - There are thirteen such primes below 100:
 - 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.
 -
 - How many circular primes are there below one million?
 -}

import Data.Char

rotate :: [a] -> [a]
rotate (x:xs) = xs ++ [x]

rotations :: [a] -> [[a]]
rotations xs = take (length xs) $ iterate rotate xs

prime :: Integral a => a -> Bool
prime n
	| n < 2                                                                       = False
	| n == 2                                                                      = True
	| length [x | x <- [2..(floor . sqrt $ fromIntegral n)], n `mod` x == 0] == 0 = True
	| otherwise                                                                   = False

circularPrime :: Show a => a -> Bool
circularPrime n = and $ map prime $ map (\ns -> foldl (\x y -> 10 * x + y) 0 ns) $ rotations $ map digitToInt $ show n

main :: IO ()
main = print $ (length [n | n <- [1,3..10^6], notElem 5 $ map digitToInt $ show n, circularPrime n]) + 2
