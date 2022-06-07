#include <iostream>

using namespace std;


void loop(){
  int a;
  int b;
  int c;
  std::cout << "Scivi primo numero: ";
  std::cin >> a;
  if (a == 0){
      cout << "Arresto del programma...";
      exit(-1);

  }


  std::cout << "Scivi secondo numero: ";
  std::cin >> b;
  std::cout << "Scivi terzo numero: ";
  std::cin >> c;
  std::cout << "Risultato: ";



  if ( a>=b && b >= c){
    std::cout << c << " "<< b << " "<< a << std::endl;
    }
  else if ( a>=b && b <= c){
        if (a <= c){
            std::cout << b << " "<< a  << " "<< c << std::endl;
        }
        else {std::cout << b << " "<< c << " "<< a << std::endl;};
  }
  else if ( b>=c && c >= a) {
    std::cout << a << " "<< c << " "<< b<< std::endl;

  }
  else if ( b>=c && c <= a) {
    std::cout << c << " "<< a << " "<< b<< std::endl;

  }
  else if ( c>=b && b >= a) {
    std::cout << a << " "<<  b << " "<< c << std::endl;

  }
  else if ( c>=b && b <= a) {
    std::cout << b << " "<< a << " "<< c << std::endl;

  }



}


int main()
{
    while (true){
        loop();

    }



}
