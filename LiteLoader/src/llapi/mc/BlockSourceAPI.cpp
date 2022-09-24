#include "llapi/Global.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/BlockSource.hpp"

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}
