#include <iostream>
using namespace std;
const int Max = 20;
class Photo
{
    int id;
    string title;
    string remarks;
    string type;
    string privacy;
    Album* album;
    Tag* tags[Max];
    Member* member;
    Location* location;
        
};
class Album
{
    private:
    int id;
    string title;
    string remarks;
    Photo * photos[Max];
    public:
    Album createAlbum();
};

class Tag
{
    private:
    int id;
    string name;
    string remarks;
    Photo * photos[Max];

};

class Member
{
 int id;
 string name;
 string address;
 string contract;
 Photo* photos[Max];


};

class Location
{
    int id;
    string name;
    string remarks;
    Photo* photos[Max];
};

