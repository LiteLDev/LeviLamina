#include "liteloader/api/event/EventManager.h"
#include "liteloader/api/event/entity/ProjectileHitBlockEvent.h"
#include "liteloader/api/memory/Hook.h"

#include "mc/Block.hpp"
#include "mc/BlockPos.hpp"
#include "mc/BlockSource.hpp"
#include "mc/Level.hpp"

#include "liteloader/api/event/impl/EventImpl.inl"
#include "liteloader/api/event/impl/EventManagerImpl.inl"
#include "liteloader/api/event/impl/ListenerImpl.inl"

namespace ll::event::entity {

ProjectileHitBlockEvent::ProjectileHitBlockEvent(BlockInstance const& blockInstance, Actor* source)
: blockInstance(blockInstance), source(source) {}

LL_GETTER_IMPL(ProjectileHitBlockEvent, BlockInstance, blockInstance, getBlockInstance)
LL_GETTER_IMPL(ProjectileHitBlockEvent, Actor*, source, getSource)

LL_AUTO_TYPED_INSTANCE_HOOK(
    ProjectileHitBlockEventHook,
    Block,
    HookPriority::Normal,
    "?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z",
    void,
    BlockSource* blockSource,
    BlockPos*    blockPos,
    Actor*       actor
) {
    using EventManager = EventManager<ProjectileHitBlockEvent>;

    // Exclude default position BlockPos::Zero
    if ((blockPos->x | blockPos->y | blockPos->z) == 0) // actor->getPos().distanceTo(bp->center())>5)
        return origin(blockSource, blockPos, actor);

    if (this->getTypeName() != "minecraft:air") {
        auto                    blockInstance = Level::getBlockInstance(blockPos, blockSource);
        ProjectileHitBlockEvent event(blockInstance, actor);
        EventManager::fireEvent(event);
    }
    return origin(blockSource, blockPos, actor);
}

} // namespace ll::event::entity

LL_EVENT_IMPL(entity::ProjectileHitBlockEvent)
