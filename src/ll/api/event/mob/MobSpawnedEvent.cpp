#include "ll/api/event/mob/MobSpawnedEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/level/BlockSource.h"

namespace ll::event::inline mob {

Vec3 MobSpawnedEvent::pos() const { return mPos; }
int  MobSpawnedEvent::dimensionId() const { return mDimensionId; }

LL_TYPED_INSTANCE_HOOK(
    MobSpawnedEventHook,
    HookPriority::Normal,
    Mob,
    "?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z",
    Mob*,
    BlockSource*               a2,
    ActorDefinitionIdentifier* a3,
    Actor*                     a4,
    Vec3&                      a5,
    bool                       a6,
    bool                       a7,
    bool                       a8
) {
    auto res = origin(a2, a3, a4, a5, a6, a7, a8);
    auto ev  = MobSpawnedEvent(*this, a5, a2->getDimensionId());
    EventBus::getInstance().publish(ev);
    return res;
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class MobSpawnedEventEmitter : public Emitter<MobSpawnedEvent, emitterFactory> {
    memory::HookRegistrar<MobSpawnedEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<MobSpawnedEventEmitter>(); }

} // namespace ll::event::inline mob
