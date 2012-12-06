fibonacci :: [Integer]
fibonacci = 0 : 1 : zipWith (+) fibonacci (tail fibonacci)

main :: IO ()
main = print $ head [i | i <- [1..], (==1000) . length . show $ fibonacci !! i]
