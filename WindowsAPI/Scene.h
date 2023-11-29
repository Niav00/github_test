#pragma once
#include "Scene.h"

class Actor;

class Scene
{
public:
	Scene();
	virtual ~Scene();

	virtual void Init() abstract;
	virtual void Update() abstract;
	virtual void Render(HDC hdc)abstract;

public:
	Actor* _actor;

};


