#include <iostream>

class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        if( num1 == "0" || num2 == "0" ){
            return "0";
        }
        int n1 = num1.size();
        int n2 = num2.size();
        std::string sonuc( ( n1 + n2 ), '0');
        for ( int i = n1 - 1 ; i >= 0; i-- ) {
            for ( int j = n2 - 1 ; j >= 0; j-- ) {
                int gecici = ( sonuc[i+j+1] - '0' ) + ( ( num1[i] - '0' ) * ( num2[j] - '0' ) );
                sonuc[i+j+1] = ( gecici % 10 ) + '0';
                sonuc[i+j] += ( gecici / 10 );
            }
        }
        if( sonuc[0] == '0' ){
            return sonuc.substr(1);
        }
        return sonuc;
    }
    
};
int main ( void ) {
    Solution sol;
    std::string cevap = sol.multiply("398", "1997");
    std::cout << cevap << '\n';
}