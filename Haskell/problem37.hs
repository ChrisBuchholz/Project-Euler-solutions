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
