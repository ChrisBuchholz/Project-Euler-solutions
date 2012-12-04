{-
 - The Fibonacci sequence is defined by the recurrence relation:
 -
 - Fn = Fn1 + Fn2, where F1 = 1 and F2 = 1.
 - Hence the first 12 terms will be:
 -
 - F1 = 1
 - F2 = 1
 - F3 = 2
 - F4 = 3
 - F5 = 5
 - F6 = 8
 - F7 = 13
 - F8 = 21
 - F9 = 34
 - F10 = 55
 - F11 = 89
 - F12 = 144
 -
 - The 12th term, F12, is the first term to contain three digits.
 -
 - What is the first term in the Fibonacci sequence to contain 1000 digits?
 -}

fibonacci :: [Integer]
fibonacci = 0 : 1 : zipWith (+) fibonacci (tail fibonacci)

main :: IO ()
main = print $ head [i | i <- [1..], (==1000) . length . show $ fibonacci !! i]


{-
 - f = 0 : 1 : zipWith (+) f (tail f)
 -
 - take 1 f
 - take 2 f
 - f = 0 : 1 : <thunk>
 - 
 - take 3 f
 - f = 0 : 1 : 1 : <thunk>
 -
 - take 4 f
 - f = 0 : 1 : 1 : 2 : <thunk> 
 -
 - take 5 f
 - f = 0 : 1 : 1 : 2 : 3 : <thunk>
 -
 - take 6 f
 - f = 0 : 1 : 1 : 2 : 3 : 5 : <thunk> 
 -}
