#include "BlockActor.h"
#include "MCApi/Block.hpp"

LIAPI int BlockActorObj::getBlockEntityType(Block* bl) {
    return dAccess<unsigned int>(bl, 188); //IDA Block::getBlockEntityType
}

LIAPI unsigned int BlockActorObj::getBlockEntityType() {
    return this->getType();
}

LIAPI BlockPos BlockActorObj::getBlockEntityPos() {
    return dAccess<BlockPos>(this, 44); //(Linux)BlockActor::getPosition
}

