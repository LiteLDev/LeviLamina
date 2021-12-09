#include <Global.h>
#include <MC/BlockInstance.hpp>
#include <MC/BlockSource.hpp>

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}
