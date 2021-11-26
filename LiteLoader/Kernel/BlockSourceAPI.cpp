#include "Global.h"
#include <MC/BlockSource.hpp>
#include <BlockInstanceAPI.h>

BlockInstance& BlockSource::getBlockInstance(BlockPos a1) {
    std::cout << a1.toString() << std::endl;
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}