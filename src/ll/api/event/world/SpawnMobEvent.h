#pragma once

#include "ll/api/event/Cancellable.h"
#include "ll/api/event/world/WorldEvent.h"

#include "mc/math/Vec3.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/item/registry/ItemStack.h"

namespace ll::event::inline world {

class SpawnMobEvent : public WorldEvent {
protected:
    ActorDefinitionIdentifier const& mIdentifier;
    optional_ref<Actor>              mSpawner;
    Vec3 const&                      mPos;
    bool&                            mNaturalSpawn;
    bool&                            mSurface;
    bool&                            mFromSpawner;

    constexpr explicit SpawnMobEvent(
        BlockSource&                     blockSource,
        ActorDefinitionIdentifier const& identifier,
        optional_ref<Actor>              spawner,
        Vec3 const&                      pos,
        bool&                            naturalSpawn,
        bool&                            surface,
        bool&                            fromSpawner
    )
    : WorldEvent(blockSource),
      mIdentifier(identifier),
      mSpawner(spawner),
      mPos(pos),
      mNaturalSpawn(naturalSpawn),
      mSurface(surface),
      mFromSpawner(fromSpawner) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI ActorDefinitionIdentifier const& identifier() const;
    LLNDAPI optional_ref<Actor> spawner() const;
    LLNDAPI Vec3 const&         pos() const;
    LLNDAPI bool const&         naturalSpawn() const;
    LLNDAPI bool const&         surface() const;
    LLNDAPI bool const&         fromSpawner() const;
};
class SpawningMobEvent final : public Cancellable<SpawnMobEvent> {
public:
    constexpr explicit SpawningMobEvent(
        BlockSource&                     blockSource,
        ActorDefinitionIdentifier const& identifier,
        optional_ref<Actor>              spawner,
        Vec3 const&                      pos,
        bool&                            naturalSpawn,
        bool&                            surface,
        bool&                            fromSpawner
    )
    : Cancellable(blockSource, identifier, spawner, pos, naturalSpawn, surface, fromSpawner) {}

public:
    LLAPI void deserialize(CompoundTag const&) override;

    LLNDAPI bool& naturalSpawn() const;
    LLNDAPI bool& surface() const;
    LLNDAPI bool& fromSpawner() const;
};
class SpawnedMobEvent final : public SpawnMobEvent {
    optional_ref<Mob> mMob;

public:
    constexpr explicit SpawnedMobEvent(
        optional_ref<Mob>                mob,
        BlockSource&                     blockSource,
        ActorDefinitionIdentifier const& identifier,
        optional_ref<Actor>              spawner,
        Vec3 const&                      pos,
        bool&                            naturalSpawn,
        bool&                            surface,
        bool&                            fromSpawner
    )
    : SpawnMobEvent(blockSource, identifier, spawner, pos, naturalSpawn, surface, fromSpawner),
      mMob(mob) {}

public:
    LLAPI void serialize(CompoundTag&) const override;

    LLNDAPI optional_ref<Mob> mob() const;
};
} // namespace ll::event::inline world
