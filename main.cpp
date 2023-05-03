#include <iostream>
#include "socialnetwork.h"

int main(char* ar[], int count)
{
    SocialNetwork sn;

    sn.addnew("Oleg");
    sn.addnew("Kostya");
    sn.addnew("Misha");
    sn.addnew("Vika");
    sn.addnew("Lesha");

    sn.delMan("Vika");
    sn.addnew("Anya");

    sn.addFriendship("Oleg", "Kostya");
    sn.addFriendship("Kostya", "Misha");
    sn.addFriendship("Misha", "Anya");
    sn.addFriendship("Anya", "Lesha");

    sn.showThreeHandshakes();

    return 0;
}