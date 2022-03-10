#include "Pet.h"
#include "Shop.h"
using namespace std;

int main(){
    Dog cat(3, "Name", "Breed");
    Shop shop("re:store");
    shop.put(&cat);

    shop.getInfo();
    cat.play();
    cat.say();
    cat.getInfo();
    cat.getAge();
    return 0;    
}
