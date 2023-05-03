#pragma once
#include "staticarray.h"
#define NAMELENGTH 30

typedef char Name[NAMELENGTH];

class SocialNetwork 
{ 
public:
    struct Human 
    { 
        Human();
        Human(const Name _name, int _id);
        Human& operator=(const Human& other);
        Human(const Human& other);

        bool operator==(const Human& other);

        Name name; 

        friend class SocialNetwork;

    private:
        int id; 

    };
    SocialNetwork();
   
    void addnew(const Name name);
   
    void delMan(const Name name);
   
    void addFriendship(const Name name_1, const Name name_2);
   
    void showThreeHandshakes();

private: 
    bool are_friends(const Human& m1, const Human& m2);
   
    bool man_exists_with_id(int man_id);
   
    Human findManByName(const Name name);
private: 
    int matrix[SIZE][SIZE];
    StaticArray<Human> people; 
    StaticArray<bool> busyids; 
};
