#include "Res.h"
map<string, pair<int, IMAGE*>> Res::img;

Res::~Res()
{

}
Res* Res::GetInstance()
{
    static Res* res = new Res;
    return res;
}
int Res::getwidth(string name)
{
    //图片的宽度/帧数
    return GetInstance()->img[name].second->getwidth()/ GetInstance()->img[name].first;
}
int Res::getheight(string name)
{
    return  GetInstance()->img[name].second->getheight();
}
void Res::drawIMG(int x, int y, string name)
{
    putimage(x, y, GetInstance()->img[name].second);
}
void Res::drawIMG(int x, int y, string name, int frame, Dir dir)
{
    switch (dir) 
    {
    case Dir::Left:
        putimage(x, y, IMGW, IMGH, GetInstance()->img[name].second + 0, frame * IMGW, 0, SRCAND);
        putimage(x, y, IMGW, IMGH, GetInstance()->img[name].second + 1, frame * IMGW, 0, SRCPAINT);
        break;
    case Dir::Right:
        putimage(x, y, IMGW, IMGH, GetInstance()->img[name].second + 2, frame * IMGW, 0, SRCAND);
        putimage(x, y, IMGW, IMGH, GetInstance()->img[name].second + 3, frame * IMGW, 0, SRCPAINT);
        break;
    }
}

Res::Res()
{
    //背景
    img["BK"].first = 1;
    img["BK"].second = new IMAGE;
    loadimage(img["BK"].second, "./Res/Background/background.bmp");

    //stand
    img["stand"].first = 4;
    img["stand"].second = new IMAGE[4];
    loadimage(img["stand"].second + 0, "./Res/Stand/lefty.bmp");
    loadimage(img["stand"].second + 1, "./Res/Stand/left.bmp");
    loadimage(img["stand"].second + 2, "./Res/Stand/righty.bmp");
    loadimage(img["stand"].second + 3, "./Res/Stand/right.bmp");

    //move
    img["move"].first = 8;
    img["move"].second = new IMAGE[4];
    loadimage(img["move"].second + 0, "./Res/Move/lefty.bmp");
    loadimage(img["move"].second + 1, "./Res/Move/left.bmp");
    loadimage(img["move"].second + 2, "./Res/Move/righty.bmp");
    loadimage(img["move"].second + 3, "./Res/Move/right.bmp");

    //cut
    img["cut"].first = 7;
    img["cut"].second = new IMAGE[4];
    loadimage(img["cut"].second + 0, "./Res/Cut/lefty.bmp");
    loadimage(img["cut"].second + 1, "./Res/Cut/left.bmp");
    loadimage(img["cut"].second + 2, "./Res/Cut/righty.bmp");
    loadimage(img["cut"].second + 3, "./Res/Cut/right.bmp");

    //jumpcut
    img["jumpcut"].first = 6;
    img["jumpcut"].second = new IMAGE[4];
    loadimage(img["jumpcut"].second + 0, "./Res/JumpCut/lefty.bmp");
    loadimage(img["jumpcut"].second + 1, "./Res/JumpCut/left.bmp");
    loadimage(img["jumpcut"].second + 2, "./Res/JumpCut/righty.bmp");
    loadimage(img["jumpcut"].second + 3, "./Res/JumpCut/right.bmp");

    //jump
    img["jump"].first = 6;
    img["jump"].second = new IMAGE[4];
    loadimage(img["jump"].second + 0, "./Res/Jump/lefty.bmp");
    loadimage(img["jump"].second + 1, "./Res/Jump/left.bmp");
    loadimage(img["jump"].second + 2, "./Res/Jump/righty.bmp");
    loadimage(img["jump"].second + 3, "./Res/Jump/right.bmp");


    //monster
    img["monster"].first = 8;
    img["monster"].second = new IMAGE[4];
    loadimage(img["monster"].second + 0, "./Res/Monster/lefty.bmp");
    loadimage(img["monster"].second + 1, "./Res/Monster/left.bmp");
    loadimage(img["monster"].second + 2, "./Res/Monster/righty.bmp");
    loadimage(img["monster"].second + 3, "./Res/Monster/right.bmp");

}
