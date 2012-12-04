{-
 - 145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.
 -
 - Find the sum of all numbers which are equal to the sum of the factorial of their digits.
 -
 - Note: as 1! = 1 and 2! = 2 are not sums they are not included.
 -
 - ----------------------------------------------------------------------------
 -
 - wikipedia will let us know that there is only two other factorions in
 - base 10, other than 1 and 2. These are 145 and 40585. Since this is a finite
 - list it is okay to use those two numbers as lower and upper bound.
 -}

import Data.Char

factorialProduct :: (Enum a, Num a) => a -> a
factorialProduct n = product [1..n]

isFactorion :: Int -> Bool
isFactorion n
    | sum (map factorialProduct $ map digitToInt $ show n) == n = True
    | otherwise                                                 = False

main :: IO ()
main = print $ sum [n | n <- [145..40585], isFactorion n]
