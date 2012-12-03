{-
 - n! means n  (n  1)  ...  3  2  1
 -
 - For example, 10! = 10  9  ...  3  2  1 = 3628800,
 - and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
 -
 - Find the sum of the digits in the number 100!
 -}

import Data.Char

sumOfFactorialNums :: (Enum a, Num a, Show a) => a -> Int
sumOfFactorialNums n = sum $ map digitToInt $ show $ product [1..n]

main = print $ sumOfFactorialNums 100
