import Data.Char

rotate :: [a] -> [a]
rotate (x:xs) = xs ++ [x]

rotations :: [a] -> [[a]]
rotations x = take (length x) $ iterate rotate x

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
