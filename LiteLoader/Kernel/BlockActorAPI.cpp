#include "BlockActorAPI.h"
#include "MCApi/Block.hpp"

LIAPI int BlockActorObj::getType(Block* bl) {
    return dAccess<unsigned int>(bl, 188); //IDA Block::getBlockEntityType
}

LIAPI int BlockActorObj::getType() {
    return BlockActor::getType();
}

LIAPI BlockPos BlockActorObj::getPos() {
    return dAccess<BlockPos>(this, 44); //(Linux)BlockActor::getPosition
}

