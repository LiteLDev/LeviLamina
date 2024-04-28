#include "mc/world/level/BlockSource.h"
#include "mc/dataloadhelper/NewUniqueIdsDataLoadHelper.h"
#include "mc/entity/systems/UpdateBoundingBoxSystem.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorFactory.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/registry/ItemStack.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/actor/DropperBlockActor.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/material/Material.h"
#include "mc/world/phys/AABB.h"

std::vector<class Actor*>
BlockSource::getEntities(class AABB const& range, float extendDistance, ActorType actorType, bool ignoreType) const {
    std::vector<Actor*> entities;

    ChunkPos minChunk{range.min.x - extendDistance, range.min.z - extendDistance};
    ChunkPos maxChunk{range.max.x + extendDistance, range.max.z + extendDistance};

    for (int x = minChunk.x; x <= maxChunk.x; x++)
        for (int z = minChunk.z; z <= maxChunk.z; z++) {
            auto* chunk = getChunk(x, z);
            if (chunk == nullptr) {
                continue;
            }
            for (auto& weakEntityRef : chunk->getChunkEntities()) {
                auto actor = weakEntityRef.tryUnwrap();
                if (actor && (actorType == ActorType::TypeMask || actor->isType(actorType) != ignoreType)
                    && range.intersects(actor->getAABB())) {
                    entities.emplace_back(actor);
                }
            }
        }
    return entities;
}

optional_ref<Container> BlockSource::tryGetContainer(class BlockPos const& pos) {
    // This function didn't use 'this' pointer
    return DropperBlockActor::getContainerAt(*this, pos.center());
}

optional_ref<Actor> BlockSource::spawnActor(CompoundTag const& nbt) {
    auto&                      level = getLevel();
    NewUniqueIdsDataLoadHelper dataLoadHelper{level};
    auto actorOwnerPtr = level.getActorFactory().loadActor(const_cast<CompoundTag*>(&nbt), dataLoadHelper);
    if (!actorOwnerPtr) {
        return nullptr;
    }
    auto actor = actorOwnerPtr.tryUnwrap();
    if (!actor) {
        return nullptr;
    }
    actor->_setLevelPtr(&level);
    actor->setDimension(getDimension().getWeakRef());
    level.addEntity(*this, std::move(actorOwnerPtr));
    actor->refresh();
    return actor;
}

bool BlockSource::destroyBlock(BlockPos const& pos, optional_ref<ItemStack> tool, optional_ref<Mob> toolOwner) {
    if (tool && toolOwner && toolOwner->isCreative()) {
        auto* item = tool->getItem();
        if (item && !item->canDestroyInCreative()) {
            return false;
        }
    }
    auto& block = getBlock(pos);
    if (block.isUnbreakable()) {
        return false;
    }
    auto& material   = block.getMaterial();
    bool  shouldDrop = material.isAlwaysDestroyable() || tool->canDestroySpecial(block);
    bool  res        = getLevel().destroyBlock(*this, pos, shouldDrop);
    if (!tool) {
        return res;
    }
    if (res && tool->mItem) {
        tool->mItem->mineBlock(tool, block, pos.x, pos.y, pos.z, toolOwner.as_ptr());
    }
    return res;
}
