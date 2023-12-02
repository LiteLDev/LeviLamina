#include "mc/world/level/BlockSource.h"
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
                auto* actor = weakEntityRef.tryUnwrap<Actor>();
                if (actor != nullptr
                    && (actorType == ActorType::TypeMask || actor->isInstanceOf(actorType) != ignoreType)
                    && range.intersects(actor->getAABB())) {
                    entities.emplace_back(actor);
                }
            }
        }
    return entities;
}

optional_ref<Container> BlockSource::tryGetContainer(class BlockPos const& pos) const {
    // This function didn't use 'this' pointer
    return DropperBlockActor::getContainerAt(*const_cast<BlockSource*>(this), pos.center());
}

optional_ref<Actor>
BlockSource::cloneActor(Actor const& origin, Vec3 const& pos, std::optional<DimensionType> dimId) const {

    auto nbt = origin.saveToNBT();

    if (!nbt) {
        return nullptr;
    }

    if (auto* nbtPos = nbt->getList("Pos"); nbtPos) {
        ll::meta::unroll<3>([&](size_t i) { nbtPos[i].as<FloatTag>() = pos[i]; });
    }

    auto& level = getLevel();

    Dimension* dim = &getDimension();

    if (dimId.has_value()) {
        dim = level.getDimension(dimId.value()).get();
    }

    if (!dim) {
        return nullptr;
    }

    auto actorOwnerPtr = level.getActorFactory().createSpawnedActor(origin.getActorIdentifier(), nullptr, pos);

    if (!actorOwnerPtr) {
        return nullptr;
    }

    auto* actor = actorOwnerPtr.tryUnwrap<Actor>();

    if (!actor) {
        return nullptr;
    }

    actor->_setLevelPtr(&level);

    actor->setDimension(dim->getWeakRef());

    UpdateBoundingBoxSystem::updateBoundingBoxFromDefinition(*actor);

    level.addEntity(*const_cast<BlockSource*>(this), std::move(actorOwnerPtr));

    actor->loadFromNBT(*nbt);

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
    auto& material = block.getMaterial();

    bool shouldDrop = material.isAlwaysDestroyable() || tool->canDestroySpecial(block);

    bool res = getLevel().destroyBlock(*this, pos, shouldDrop);

    if (!tool) {
        return res;
    }
    if (res) {
        tool->mineBlock(block, pos.x, pos.y, pos.z, toolOwner.as_ptr());
    }
    return res;
}