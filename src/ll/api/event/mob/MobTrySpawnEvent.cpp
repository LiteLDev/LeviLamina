#include "ll/api/event/mob/MobTrySpawnEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/BlockSource.h"

namespace ll::event::inline mob {

std::string MobTrySpawnEvent::typeName() const { return mTypeName; }
Vec3        MobTrySpawnEvent::pos() const { return mPos; }
int         MobTrySpawnEvent::dimensionId() const { return mDimensionId; }

LL_TYPED_INSTANCE_HOOK(
    MobTrySpawnEventHook,
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
    auto ev = MobTrySpawnEvent(*this, a4->getTypeName(), a5, a2->getDimensionId());
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return nullptr;
    }
    return origin(a2, a3, a4, a5, a6, a7, a8);
    ;
}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class MobTrySpawnEventEmitter : public Emitter<MobTrySpawnEvent, emitterFactory> {
    memory::HookRegistrar<MobTrySpawnEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) {
    return std::make_unique<MobTrySpawnEventEmitter>();
}

} // namespace ll::event::inline mob
