#include "Pet.h"
#include "Shop.h"
using namespace std;

int main(){
    Cat cat(3, "Name", "Breed");
    Dog dog(10, "dd", "q");
    Other other(10, "ot", "f");
    Shop shop("re:store");
    Shop shop1("my:store");
    shop.put(&cat);
    shop.put(&dog);
    shop1.put(&dog);
    shop1.put(&cat);
    shop1.put(&other);
    if(shop==shop1){
        cout << "Shops ravni" << endl;
    }
    else{
        cout << "Shops ne ravni" << endl;
    }
    return 0;   
}
