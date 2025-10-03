#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/spawn_category/Type.h"
#include "mc/world/level/Spawner.h"

// auto generated forward declare list
// clang-format off
class ActorSpawnRuleGroup;
class Biome;
class BlockPos;
class BlockSource;
class ChunkPos;
class IRandom;
class IWorldRegistriesProvider;
class LevelChunkVolumeData;
class Mob;
class Random;
class ResourcePackManager;
class SpawnGroupRegistry;
class Vec3;
struct ActorUniqueID;
struct SpawnSettings;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { class SpawnPlacements; }
namespace br::spawn { struct State; }
// clang-format on

class NaturalSpawner : public ::Spawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk2d322f;
    ::ll::UntypedStorage<8, 8>   mUnk9032a6;
    ::ll::UntypedStorage<8, 48>  mUnk905d1f;
    ::ll::UntypedStorage<8, 272> mUnk504207;
    ::ll::UntypedStorage<8, 8>   mUnk62f589;
    ::ll::UntypedStorage<8, 8>   mUnke1fc69;
    ::ll::UntypedStorage<8, 8>   mUnk5d231c;
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
