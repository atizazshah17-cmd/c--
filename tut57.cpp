#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
     virtual void display() {}
};

class CHWVideo : public CWH
{
    float videoLength;

public:
    CHWVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is : " << videoLength << " minutes " << endl;
    }
};

class CHWText : public CWH
{
    int words;

public:
    CHWText(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing text  tutorialwith title : " << title << endl;
        cout << "Ratings of this text tutorial is : " << rating << " out of 5 stars" << endl;
        cout << "Number of words in this text tutorial is : " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    // -----> VIDEO <------
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CHWVideo djVideo(title, rating, vlen);
    // djVideo.display();
    //  -----> TEXT <------
    title = "Python tutorial";
    words = 4500;
    rating = 4.95;
    CHWText pyText(title, rating, words);
    // pyText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &pyText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}