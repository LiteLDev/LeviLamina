#include "ll/api/event/world/SpawnMobEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/world/level/Spawner.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline world {
void SpawnMobEvent::serialize(CompoundTag& nbt) const {
    WorldEvent::serialize(nbt);
    nbt["identifier"] = (uintptr_t)&identifier();
    if (spawner()) {
        nbt["spawner"] = (uintptr_t)(spawner().as_ptr());
    }
    nbt["pos"]          = ListTag{pos().x, pos().y, pos().z};
    nbt["naturalSpawn"] = naturalSpawn();
    nbt["surface"]      = surface();
    nbt["fromSpawner"]  = fromSpawner();
}
void SpawningMobEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    naturalSpawn() = nbt["naturalSpawn"];
    surface()      = nbt["surface"];
    fromSpawner()  = nbt["fromSpawner"];
}
void SpawnedMobEvent::serialize(CompoundTag& nbt) const {
    SpawnMobEvent::serialize(nbt);
    if (mob()) {
        nbt["mob"] = (uintptr_t)(mob().as_ptr());
    }
}

ActorDefinitionIdentifier const& SpawnMobEvent::identifier() const { return mIdentifier; }
optional_ref<Actor>              SpawnMobEvent::spawner() const { return mSpawner; }
Vec3 const&                      SpawnMobEvent::pos() const { return mPos; }
bool const&                      SpawnMobEvent::naturalSpawn() const { return mNaturalSpawn; }
bool const&                      SpawnMobEvent::surface() const { return mSurface; }
bool const&                      SpawnMobEvent::fromSpawner() const { return mFromSpawner; }

bool& SpawningMobEvent::naturalSpawn() const { return mNaturalSpawn; }
bool& SpawningMobEvent::surface() const { return mSurface; }
bool& SpawningMobEvent::fromSpawner() const { return mFromSpawner; }

optional_ref<Mob> SpawnedMobEvent::mob() const { return mMob; }

LL_TYPE_INSTANCE_HOOK(
    SpawningMobEventHook,
    HookPriority::Normal,
    Spawner,
    &Spawner::spawnMob,
    Mob*,
    BlockSource&                     blockSource,
    ActorDefinitionIdentifier const& id,
    Actor*                           spawner,
    Vec3 const&                      pos,
    bool                             naturalSpawn,
    bool                             surface,
    bool                             fromSpawner
) {
    auto event = SpawningMobEvent{blockSource, id, spawner, pos, naturalSpawn, surface, fromSpawner};
    EventBus::getInstance().publish(event);
    if (event.isCancelled()) {
        return nullptr;
    }
    return origin(blockSource, id, spawner, pos, naturalSpawn, surface, fromSpawner);
}

LL_TYPE_INSTANCE_HOOK(
    SpawnedMobEventHook,
    HookPriority::Low,
    Spawner,
    &Spawner::spawnMob,
    Mob*,
    BlockSource&                     blockSource,
    ActorDefinitionIdentifier const& id,
    Actor*                           spawner,
    Vec3 const&                      pos,
    bool                             naturalSpawn,
    bool                             surface,
    bool                             fromSpawner
) {
    auto res   = origin(blockSource, id, spawner, pos, naturalSpawn, surface, fromSpawner);
    auto event = SpawnedMobEvent{res, blockSource, id, spawner, pos, naturalSpawn, surface, fromSpawner};
    EventBus::getInstance().publish(event);
    return res;
}


static std::unique_ptr<EmitterBase> spawningEmitterFactory(ListenerBase&);
class SpawningMobEventEmitter : public Emitter<spawningEmitterFactory, SpawningMobEvent> {
    memory::HookRegistrar<SpawningMobEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawningEmitterFactory(ListenerBase&) {
    return std::make_unique<SpawningMobEventEmitter>();
}

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&);
class SpawnedMobEventEmitter : public Emitter<spawnedEmitterFactory, SpawnedMobEvent> {
    memory::HookRegistrar<SpawnedMobEventHook> hook;
};

static std::unique_ptr<EmitterBase> spawnedEmitterFactory(ListenerBase&) {
    return std::make_unique<SpawnedMobEventEmitter>();
}

} // namespace ll::event::inline world
