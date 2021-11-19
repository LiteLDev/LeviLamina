#pragma once
#include "Global.h"
#include "MCApi/BlockLegacy.hpp"

class Block;
class BlockLegacyObj : public BlockLegacy
{
public:
	LIAPI Block* toBlock(unsigned short tileData);
};