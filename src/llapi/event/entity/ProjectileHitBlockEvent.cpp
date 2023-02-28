#include <llapi/event/EventManager.h>
#include <llapi/event/entity/ProjectileHitBlockEvent.h>
#include <llapi/memory/Hook.h>

#include <llapi/mc/Block.hpp>
#include <llapi/mc/BlockPos.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/Level.hpp>

#include <llapi/event/impl/EventImpl.inl>
#include <llapi/event/impl/EventManagerImpl.inl>
#include <llapi/event/impl/ListenerImpl.inl>

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
