#pragma once
#include "Global.h"
#include <MCApi/BlockActor.hpp>


struct BlockActorObj : public BlockActor {
    LIAPI int getBlockEntityType(Block* bl);
    LIAPI unsigned int getBlockEntityType();
    LIAPI BlockPos getBlockEntityPos();
};