#include "Pet.h"
#include "Shop.h"
using namespace std;

int main(){
    Pet dog(2, "dog_name", "dog", "dog_breed");
    Pet cat(3, "cat_name", "cat", "cat_breed");
    Pet rat(1, "rat_name", "rat", "rat_breed");
    Shop shop("re:store");
    shop.put(&dog);
    shop.put(&cat);
    Pet smth = shop.get();
    Pet smth_1 = shop.get_by_num(1);
    smth_1.getInfo();
    shop.put(&rat);
    shop.getInfo();
    // cout<< "Dog block" << endl;
    // dog.play();
    // dog.say();
    // dog.getInfo();
    // cout<< "Cat block" << endl;
    // cat.play();
    // cat.say();
    // cat.getInfo();
    // cout<< "Rat block" << endl;
    // rat.play();
    // rat.say();
    // rat.getInfo();
  
    return 0;    
}
