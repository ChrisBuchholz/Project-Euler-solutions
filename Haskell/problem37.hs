{-
 - The number 3797 has an interesting property. Being prime itself, it is
 - possible to continuously remove digits from left to right, and remain prime
 - at each stage: 3797, 797, 97, and 7. Similarly we can work from right to
 - left: 3797, 379, 37, and 3.
 -
 - Find the sum of the only eleven primes that are both truncatable from left
 - to right and right to left.
 -
 - NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.
 -}

import Data.Char

prime n
    | n < 2                                                                = False
    | n == 2                                                               = True
    | null [x | x <- [2..(floor . sqrt $ fromIntegral n)], n `mod` x == 0] = True
    | otherwise                                                            = False

truncateListRight xs = take (length xs) $ iterate init xs

truncateListLeft xs = take (length xs) $ iterate (drop 1) xs

truncateSteps n = truncateListLeft nn ++ truncateListRight nn
    where nn = map digitToInt $ show n

truncatablePrime n = and $ map (\ns -> prime $ foldl (\x y -> 10 * x + y) 0 ns) $ truncateSteps n

main = print $ sum $ take 11 $ [n | n <- [9,11..], truncatablePrime n]
