// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  int smallpizzas = 0;
  int mediumpizzas = 0;
  int largepizzas = 0;
  int familypizzas = 0;
  int totalpizzas = 0;
  double smPizza = 0.0;
  double medPizza = 0.0;
  double lgPizza = 0.0;
  double famPizza = 0.0;
  cout<<"Small pizzas sold: ";
  cin>>smallpizzas;
  cout<<"Medium pizzas sold: ";
  cin>>mediumpizzas;
  cout<<"Large pizzas sold: ";
  cin>>largepizzas;
  cout<<"Family pizzas sold: ";
  cin>>familypizzas;
  totalpizzas = smallpizzas + mediumpizzas + largepizzas + familypizzas ;
  smPizza = smallpizzas / static_cast<double>(totalpizzas) * 100;
  medPizza = mediumpizzas / static_cast<double>(totalpizzas) * 100;
  lgPizza = largepizzas / static_cast<double>(totalpizzas) * 100;
  famPizza = familypizzas / static_cast<double>(totalpizzas) * 100;
  cout<<"Total pizzas sold: "<<totalpizzas<<endl;
  cout<<"Small pizzas sold: "<<smPizza<<"%"<<endl;
  cout<<"Medium pizzas sold: "<<medPizza<<"%"<<endl;
  cout<<"Large pizzas sold: "<<lgPizza<<"%"<<endl;
  cout<<"Family pizzas sold: "<<famPizza<<"%"<<endl;
  

  return 0;
} // end of main function