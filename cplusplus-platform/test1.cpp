#include <iostream>
using namespace std;
class Weapon {
   public:
   Weapon() { cout << "装载武器特性。\n"; }

   void features() { cout << "装载武器特性。\n"; }
};
class Bomb : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "装载刀的特性。\n";
   }
};
class Gun : public Weapon {
   public:
   void features() {
      this->Weapon::features();
      cout << "加载枪的特性。\n";
   }
};
class Loader {
   public:
   void loadFeatures(Weapon *weapon) {
      weapon->features();
   }
};
int main() {
   Loader *l = new Loader;
   Weapon *w;
   Bomb b;
   Gun g;
   w = &b;
   l->loadFeatures(w);
   w = &g;
   l->loadFeatures(w);
   return 0;
}