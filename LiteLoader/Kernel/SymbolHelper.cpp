#include "Global.h"
#include "SymbolHelper.h"
#include "mcapi/Actor.hpp"
#include "mcapi/BlockSource.hpp"
#include "mcapi/Level.hpp"

namespace LL {
BlockSource* getBlockSourceByActor(Actor* actor) {
    return const_cast<BlockSource*>(&actor->getRegionConst());
}

int getDimensionIdByBlockSource(BlockSource* bs) {
    return bs->getDimensionId();
}

BlockSource* getBlockSourceByDim(int dimid) {
    LocateService<Level>()->getDimension(dimid);
    auto dim = LocateService<Level>()->getDimension(dimid);
    return dAccess<BlockSource*>(dim, 96);
}

Block* getBlockByPos(BlockPos* bp, BlockSource* bs) {
    return getBlockByPos(bp->x, bp->y, bp->z, bs);
}

Block* getBlockByPos(int x, int y, int z, BlockSource* bs) {
    return const_cast<Block*>(&bs->getBlock(x, y, z));
}

Block* getBlockByPos(BlockPos* bp, int dimid) {
    auto bs = getBlockSourceByDim(dimid);
    return getBlockByPos(bp->x, bp->y, bp->z, bs);
}

Block* getBlockByPos(IntVec4* pos) {
    auto bs = getBlockSourceByDim(pos->dim);
    return getBlockByPos(pos->x, pos->y, pos->z, bs);
}

Actor* getFishingHookOwner(FishingHook* fh) {
    return SymCall("?getOwner@FishingHook@@QEAAPEAVActor@@XZ",
                   Actor*, FishingHook*)(fh);
}

Actor* getDamageSourceEntity(ActorDamageSource* ads) {
    char v83;
    ActorUniqueID v6 = *(ActorUniqueID*)(*(__int64(__fastcall**)(void*, char*))(*(uintptr_t*)ads + 64))(ads, &v83);
    return LocateService<Level>()->fetchEntity(v6, 0);
}

} // namespace LL