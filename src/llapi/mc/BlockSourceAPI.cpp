#include "llapi/mc/BlockSource.hpp"

#include "llapi/Global.h"
#include "llapi/mc/BlockInstance.hpp"

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}
std::vector<Actor*> BlockSource::queryEntities(ActorType actorType, const AABB& range, bool ignoreType) {
    return fetchEntities2(actorType, range, ignoreType);
}