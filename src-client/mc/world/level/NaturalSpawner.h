#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Spawner.h"
#include "mc/world/level/chunk/SpawnPlacements.h"

// auto generated forward declare list
// clang-format off
class ActorSpawnRuleGroup;
class Biome;
class BlockPos;
class BlockSource;
class ChunkPos;
class IRandom;
class Level;
class LevelChunkVolumeData;
class Mob;
class Random;
class SpawnGroupRegistry;
class Vec3;
struct ActorUniqueID;
struct IMinecraftEventing;
struct IWorldRegistriesProvider;
struct ResourcePackManager;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { struct State; }
// clang-format on

class NaturalSpawner : public ::Spawner {
public:
    // NaturalSpawner inner types define
    using SpawnPredicate = ::std::function<bool(::ActorType, ::BlockPos, ::LevelChunkVolumeData const&)>;

    using AfterSpawnCallback = ::std::function<void(::Mob&, ::LevelChunkVolumeData const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                mSpawnSettings;
    ::ll::TypedStorage<8, 272, ::br::spawn::SpawnPlacements>                  mSpawnPlacements;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::spawn::EntityTypeCache>> mEntityTypeCache;
    // NOLINTEND

public:
    // prevent constructor by default
    NaturalSpawner& operator=(NaturalSpawner const&);
    NaturalSpawner(NaturalSpawner const&);
    NaturalSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NaturalSpawner() /*override*/ = default;

    // vIndex: 18
    virtual ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const /*override*/;

    // vIndex: 19
    virtual void spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const /*override*/;

    // vIndex: 20
    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const /*override*/;

    // vIndex: 17
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;

    // vIndex: 1
    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) /*override*/;

    // vIndex: 2
    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;

    // vIndex: 3
    virtual void setSpawnSettings(::SpawnSettings const&) /*override*/;

    // vIndex: 4
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;

    // vIndex: 5
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;

    // vIndex: 6
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;

    // vIndex: 7
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;

    // vIndex: 11
    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) /*override*/;

    // vIndex: 12
    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) /*override*/;

    // vIndex: 13
    virtual void tickMobCount() /*override*/;

    // vIndex: 14
    virtual void incrementSpawnableTickedMob() /*override*/;

    // vIndex: 15
    virtual uint getSpawnableTickedMobCountPrevious() const /*override*/;

    // vIndex: 16
    virtual ::std::unordered_set<::ActorUniqueID> spawnMobGroup(
        ::BlockSource&,
        ::std::string const&,
        ::Vec3 const&,
        bool,
        bool,
        ::std::function<void(::Mob&)>&&
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
