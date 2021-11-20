#include <MC/BlockActor.hpp>
#include <MC/Block.hpp>

LIAPI int BlockActor::getType(Block* bl) {
    return dAccess<unsigned int>(bl, 188); //IDA Block::getBlockEntityType
}

LIAPI BlockPos BlockActor::getPos() {
    return dAccess<BlockPos>(this, 44); //(Linux)BlockActor::getPosition
}

