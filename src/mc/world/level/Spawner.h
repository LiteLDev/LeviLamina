#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBlockRequirements.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class BlockPos;
class BlockSource;
class ChunkPos;
class Experiments;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class Level;
class LevelChunk;
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class Random;
class ResourcePackManager;
class SpawnConditions;
class SpawnGroupRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct SpawnSettings;
namespace br::spawn { class EntityTypeCache; }
// clang-format on

class Spawner {
public:
    // Spawner inner types define
    using MobSpawnedCallback = ::std::function<void(::Mob&)>;

    using SpawnMobClusterCallback = ::std::function<void(::BlockPos const&, ::SpawnConditions&)>;

    using SpawnStructureMobCallback =
        ::std::function<void(::BlockPos const&, ::LevelChunk::SpawningArea const&, ::SpawnConditions const&)>;

    using GetSpawningAreasCallback =
        ::std::function<::gsl::span<::LevelChunk::SpawningArea const>(::LevelChunk const&)>;

    using AncientCityPredicate = ::std::function<bool(::BlockSource const&, ::BlockPos)>;

    using SpawnTickCallback = ::std::function<void(::BlockPos, ::SpawnConditions)>;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Spawner();

    // vIndex: 1
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) = 0;

    // vIndex: 2
    virtual ::SpawnSettings const& getSpawnSettings() const = 0;

    // vIndex: 3
    virtual void setSpawnSettings(::SpawnSettings const&) = 0;

    // vIndex: 4
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const = 0;

    // vIndex: 5
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const = 0;

    // vIndex: 6
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const = 0;

    // vIndex: 7
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const = 0;

    // vIndex: 8
    virtual ::Mob*
    spawnMob(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, bool, bool, bool) = 0;

    // vIndex: 9
    virtual ::ItemActor* spawnItem(::BlockSource&, ::ItemStack const&, ::Actor*, ::Vec3 const&, int) = 0;

    // vIndex: 10
    virtual ::Actor*
    spawnProjectile(::BlockSource&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec3 const&) = 0;

    // vIndex: 11
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) = 0;

    // vIndex: 12
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) = 0;

    // vIndex: 13
    virtual void tickMobCount() = 0;

    // vIndex: 14
    virtual void incrementSpawnableTickedMob() = 0;

    // vIndex: 15
    virtual uint getSpawnableTickedMobCountPrevious() const = 0;

    // vIndex: 16
    virtual ::std::unordered_set<::ActorUniqueID>
    spawnMobGroup(::BlockSource&, ::std::string const&, ::Vec3 const&, bool, bool, ::std::function<void(::Mob&)>&&) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool findNextSpawnBlockUnder(
        ::BlockSource const&            region,
        ::BlockPos&                     pos,
        ::std::optional<::MaterialType> materialToSpawnIn,
        ::SpawnBlockRequirements        spawnBlockRequirements
    );

    MCAPI static ::std::unique_ptr<::Spawner> from(::Level& level, ::Experiments const&);

    MCAPI static bool isSpawnPositionOk(
        ::MobSpawnRules const& rules,
        ::BlockSource&         region,
        ::BlockPos const&      pos,
        bool                   validateDistToPlayer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
