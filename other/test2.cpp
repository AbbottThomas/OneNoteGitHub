#include <iostream>
using namespace std;

class Weapon {
   public:
   virtual void features() { cout << "装载武器特性。\n"; }
    Weapon() { cout<<"Weapon初始化\n";}
};

class Bomb : public Weapon {
   public:
   Bomb(){cout<<"Bomb init\n";}
   void features() {
    //   this->Weapon::features();    可以调用基类的虚函数
      cout << "装载刀的特性。\n";
   }
};

class Gun : public Weapon {
   public:
   Gun(){cout<<"Gun init\n";}
   void features() {
      this->Weapon::features();
      cout << "加载枪的特性。\n";
   }
};

class Loader {
   public:
   Loader(){cout<< "Loader init\n";}
   void loadFeatures(Weapon *weapon) {
      weapon->features();
   }
};

int main() {
   Loader *l = new Loader;
   Weapon *w;
   Weapon ww;
   Bomb b;
   Gun g;

   w = &b;
   l->loadFeatures(w);

   w = &g;
   l->loadFeatures(w);

   l->loadFeatures(&ww);   //虚函数可以调用

   return 0;
}