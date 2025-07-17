#include "mc/world/level/BlockSource.h"
#include "mc/dataloadhelper/NewUniqueIdsDataLoadHelper.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/entity/systems/UpdateBoundingBoxSystem.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorFactory.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/item/Item.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/actor/DropperBlockActor.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/material/Material.h"
#include "mc/world/phys/AABB.h"

std::vector<Actor*>
BlockSource::getEntities(AABB const& range, float extendDistance, ActorType actorType, bool ignoreType) const {
    std::vector<Actor*> entities;
    AABB                extendedRange{range.min - extendDistance, range.max + extendDistance};
    ChunkPos            minChunk{floor(extendedRange.min.x / 16), floor(extendedRange.min.z / 16)};
    ChunkPos            maxChunk{ceil(extendedRange.max.x / 16), ceil(extendedRange.max.z / 16)};

    for (int x = minChunk.x; x <= maxChunk.x; x++)
        for (int z = minChunk.z; z <= maxChunk.z; z++) {
            auto* chunk = getChunk(x, z);
            if (chunk == nullptr) {
                continue;
            }
            for (auto& weakEntityRef : chunk->mEntities.get()) {
                auto actor = weakEntityRef.tryUnwrap();
                if (actor && (actorType == ActorType::TypeMask || actor->isType(actorType) != ignoreType)
                    && extendedRange.intersects(actor->getAABB())) {
                    entities.emplace_back(actor);
                }
            }
        }
    return entities;
}

optional_ref<Container> BlockSource::tryGetContainer(class BlockPos const& pos) {
    return DropperBlockActor::getContainerAt(*this, pos.center());
}

optional_ref<Actor> BlockSource::spawnActor(CompoundTag const& nbt) {
    auto&                      level = getLevel();
    NewUniqueIdsDataLoadHelper dataLoadHelper;
    dataLoadHelper.mLevel = &level;
    auto actorOwnerPtr =
        level.getActorFactory()
            .loadActor(const_cast<CompoundTag*>(&nbt), dataLoadHelper, getDimension().mHeightRange, nullptr);
    if (!actorOwnerPtr) {
        return nullptr;
    }
    auto actor = actorOwnerPtr.tryUnwrap();
    if (!actor) {
        return nullptr;
    }
    actor->mLevel = &level;
    actor->setDimension(getDimension().weak_from_this());
    level.addEntity(*this, std::move(actorOwnerPtr));
    actor->refresh();
    return actor;
}
