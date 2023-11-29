#pragma once
#include "ResourceBase.h"
class Texture :
    public ResourceBase
{
public:
    Texture();
    virtual ~Texture();

public:
    Texture* LoadBmp(HWND hwnd, const wstring& path);

    HDC GetDC();
    void SetSize(Vec2Int size) { _size = size; }
    void SetTransparent(uint32 transparent) { _transparent = transparent; }
    Vec2Int GetSize() { return _size; }
    uint32 GetTransparent() { return _transparent; }
    //uint32 or int32 Check with Sprite.cpp

private:
    HDC _hdc = {};
    HBITMAP _bitmap = {};
    Vec2Int _size = {};
    uint32 _transparent = RGB(225, 0, 255);
};

