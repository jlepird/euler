#include <iostream>
#include <cmath>


bool isprime(long int i){
	for (long int j = 2; j <= sqrt(i)+1; j++){
		if (i%j==0){

			return false;
		}
	}
	return true;

}

int main(){
	const long int number = 600851475143;
	for (long int i = sqrt(number)+1; i >= 1; i--){
		if (number%i== 0 && isprime(i)){
			std::cout << i << " is the largest prime factor of " << number << std::endl;
			break;
		}
	}
	return 0;
}
