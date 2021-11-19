#pragma once
#include "Global.h"
#include <MCApi/BlockActor.hpp>


struct BlockActorObj : public BlockActor {
    LIAPI static int getType(Block* bl);
    LIAPI int getType();
    LIAPI BlockPos getPos();
};