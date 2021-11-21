#include <MC/BlockActor.hpp>
#include <MC/Block.hpp>

int BlockActor::getType(Block* bl) {
    return dAccess<unsigned int>(bl, 188); //IDA Block::getBlockEntityType
}

