#include "Sprite.h"
#include "pch.h"
#include "Texture.h"

Sprite::Sprite(Texture* texture, int32 x, int32 y, int32 cx, int32 cy)
	: _texture(texture), _x(x), _y(y), _cx(cx), _cy(cy)
{
}

Sprite::~Sprite()
{
}

HDC Sprite::GetDC()
{
	return _texture->GetDC();
}

//uint32 or int32 Check with Sprite.cpp
int32 Sprite::GetTransparent()
{
	return _texture->GetTransparent();
}
