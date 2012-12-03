import Data.Char

sumOffactorialNums :: (Enum a, Num a, Show a) => a -> Int
sumOffactorialNums n = sum $ map digitToInt $ show $ product [1..n]

main = print $ sumOffactorialNums 100
