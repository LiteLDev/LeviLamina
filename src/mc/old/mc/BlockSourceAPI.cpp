#include "mc/BlockSource.hpp"

#include "liteloader/api/Global.h"
#include "mc/BlockInstance.hpp"

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}
std::vector<Actor*> BlockSource::queryEntities(ActorType actorType, const AABB& range, bool ignoreType) {
    return fetchEntities2(actorType, range, ignoreType);
}
