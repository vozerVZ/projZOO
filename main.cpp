#include "Pet.h"
#include "Shop.h"
using namespace std;

int main(){
    Cat* cat = new Cat(3, "Name", "Breed");
    Dog* dog = new Dog(10, "dd", "q");
    Other* other = new Other(10, "ot", "f");
    Shop shop("re:store");
    shop.put(cat);
    shop<<dog;
    shop.put(other);
    shop();
    Pet* get_pet = shop.get();
    shop();
    delete cat;
    delete dog;
    delete other;
    return 0;   
}
