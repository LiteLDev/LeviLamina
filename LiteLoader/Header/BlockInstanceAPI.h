#pragma once
#include "Global.h"
class BlockSource;
class Block;
class ItemStack;

class BlockInstance {

    Block* block;
    BlockPos pos;
    int dim;

public:

    LIAPI bool breakNaturally();
    LIAPI bool breakNaturally(ItemStack*);
    LIAPI ItemStack& getBlockDrops();
    
    BlockInstance(Block* a1, BlockPos a2, int a3) {
        block = a1;
        pos = a2;
        dim = a3;
    }
};