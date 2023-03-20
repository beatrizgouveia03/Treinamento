#include <bits/stdc++.h>
#include <iostream>

int sequencia(int a, int q){
		if(a == 1){
			return q;
		}

		return sequencia(a/2, q++);
	}

int teste(int n) {
	int div = 3*n+1, quant = 1;

	return sequencia(div, quant);
}

int main {
	int a;

	std::cin >> a;

	std::cout << teste(a) << std::endl;
}
