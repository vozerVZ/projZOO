#include "Pet.h"
#include "Shop.h"
using namespace std;

int main(){
    Cat cat(3, "Name", "Breed");
    Dog dog(10, "dd", "q");
    Other other(10, "ot", "f");
    Shop shop("re:store");
    shop.put(&cat);
    shop.put(&dog);
    shop.put(&other);
    shop.getInfo();
    Pet* get_pet = shop.get();
    shop.getInfo();
    return 0;   
}
