#pragma once
#include "Global.h"
#include "MCApi/Block.hpp"

class Tag;
class BlockObj : public Block
{
public:
	LIAPI static BlockObj* create(string str, unsigned short tileData);
	LIAPI static BlockObj* create(Tag* nbt);

	LIAPI string getName();
	LIAPI int getId();
	LIAPI unsigned short getTileData();
};