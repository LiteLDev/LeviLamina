#include <MC/BlockSource.hpp>
#include <MC/BlockInstance.hpp>

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}
