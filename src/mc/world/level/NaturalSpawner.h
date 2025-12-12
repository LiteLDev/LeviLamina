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
class IMinecraftEventing;
class IRandom;
class IWorldRegistriesProvider;
class Level;
class LevelChunkVolumeData;
class Mob;
class Random;
class ResourcePackManager;
class SpawnGroupRegistry;
class Vec3;
struct ActorUniqueID;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { struct State; }
// clang-format on

class NaturalSpawner : public ::Spawner {
public:
    // NaturalSpawner inner types define
    using AfterSpawnCallback = ::std::function<void(::Mob&, ::LevelChunkVolumeData const&)>;

    using SpawnPredicate = ::std::function<bool(::ActorType, ::BlockPos, ::LevelChunkVolumeData const&)>;

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
    virtual ~NaturalSpawner() /*override*/ = default;

    virtual ::std::tuple<::std::array<::SpawnCategory::Type, 8>, uint64>
    filteredSpawningCategories(::br::spawn::State const&, bool, bool, bool) const /*override*/;

    virtual void spawnForChunk(
        ::BlockSource&,
        ::LevelChunkVolumeData const&,
        ::br::spawn::State&,
        ::gsl::span<::SpawnCategory::Type>,
        ::IRandom&
    ) const /*override*/;

    virtual void spawnMobsForChunkGeneration(::BlockSource&, ::Biome const&, ::ChunkPos, ::IRandom&) const /*override*/;

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;

    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) /*override*/;

    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;

    virtual void setSpawnSettings(::SpawnSettings const&) /*override*/;

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;

    virtual void postProcessSpawnMobs(::BlockSource&, int, int, ::Random&) /*override*/;

    virtual void tick(::BlockSource&, ::LevelChunkVolumeData const&, ::ChunkPos const) /*override*/;

    virtual void tickMobCount() /*override*/;

    virtual void incrementSpawnableTickedMob() /*override*/;

    virtual uint getSpawnableTickedMobCountPrevious() const /*override*/;

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
