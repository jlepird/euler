## Problem 1

function Multiples3or5(N)
 sum = 0.0 
 for n=1:N-1
 	if (n % 3 == 0) | (n % 5 == 0)
 		sum += n
 	end
 end
 sum
end
