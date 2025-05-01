#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Spawner.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class BlockPos;
class BlockSource;
class ChunkPos;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class LevelChunkVolumeData;
class Mob;
class MobSpawnRules;
class MobSpawnerData;
class Random;
class Randomize;
class ResourcePackManager;
class SpawnConditions;
class SpawnGroupRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct MobSpawnHerdInfo;
struct SpawnSettings;
namespace br::spawn { class EntityTypeCache; }
namespace br::spawn { class SpawnPlacements; }
// clang-format on

class BedrockSpawner : public ::Spawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk68d560;
    ::ll::UntypedStorage<8, 48>  mUnk8ab4e7;
    ::ll::UntypedStorage<8, 8>   mUnk5ec8f1;
    ::ll::UntypedStorage<8, 8>   mUnk2bf45e;
    ::ll::UntypedStorage<8, 8>   mUnk86ad24;
    ::ll::UntypedStorage<8, 272> mUnk6f4ad5;
    ::ll::UntypedStorage<4, 56>  mUnk8d4b8a;
    ::ll::UntypedStorage<8, 128> mUnk39b4be;
    ::ll::UntypedStorage<4, 4>   mUnkc641af;
    ::ll::UntypedStorage<4, 4>   mUnk740ff9;
    ::ll::UntypedStorage<4, 4>   mUnka71f9c;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockSpawner& operator=(BedrockSpawner const&);
    BedrockSpawner(BedrockSpawner const&);
    BedrockSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BedrockSpawner() /*override*/ = default;

    // vIndex: 1
    virtual void initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries) /*override*/;

    // vIndex: 2
    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;

    // vIndex: 3
    virtual void setSpawnSettings(::SpawnSettings const& spawnSettings) /*override*/;

    // vIndex: 4
    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;

    // vIndex: 5
    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;

    // vIndex: 6
    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;

    // vIndex: 7
    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;

    // vIndex: 9
    virtual ::ItemActor* spawnItem(
        ::BlockSource&     region,
        ::ItemStack const& inst,
        ::Actor*           spawner,
        ::Vec3 const&      pos,
        int                throwTime
    ) /*override*/;

    // vIndex: 11
    virtual void postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random) /*override*/;

    // vIndex: 12
    virtual void tick(
        ::BlockSource&                region,
        ::LevelChunkVolumeData const& levelChunkVolumeData,
        ::ChunkPos const              chunkPos
    ) /*override*/;

    // vIndex: 13
    virtual void tickMobCount() /*override*/;

    // vIndex: 14
    virtual void incrementSpawnableTickedMob() /*override*/;

    // vIndex: 15
    virtual uint getSpawnableTickedMobCountPrevious() const /*override*/;

    // vIndex: 16
    virtual ::std::unordered_set<::ActorUniqueID> spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    ) /*override*/;

    // vIndex: 17
    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int
    _handlePopulationCap(::MobSpawnerData const* mobType, ::SpawnConditions const& conditions, int inSpawnCount);

    MCNAPI void _postProcessSpawnMobs(
        ::BlockSource&                                                      region,
        int                                                                 xo,
        int                                                                 zo,
        ::Randomize&                                                        randomize,
        bool                                                                doMobSpawning,
        ::std::function<void(::BlockPos const&, ::SpawnConditions&)> const& spawnMobClusterCallback,
        ::std::function<bool(::BlockSource const&, ::BlockPos)> const&      isInsideAncientCity
    );

    MCNAPI void _sendHerdEvents(::MobSpawnHerdInfo const& herdInfo, ::std::vector<::Mob*>& spawnGroup) const;

    MCNAPI void _spawnMobCluster(::BlockSource& region, ::BlockPos const& pos, ::SpawnConditions& conditions);

    MCNAPI void _spawnMobInCluster(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::BlockPos const&                  pos,
        ::SpawnConditions const&           conditions,
        ::std::vector<::Mob*>&             spawnGroup
    );

    MCNAPI void _updateBaseTypeCount(::BlockSource& region, ::ChunkPos const& center);

    MCNAPI void _updateGroupPersistence(::MobSpawnRules const& spawnRules, ::std::vector<::Mob*> const& spawnGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isInsideAncientCity(::BlockSource const& region, ::BlockPos pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_set<::ChunkPos> const& SPAWN_RING_OFFSETS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries);

    MCNAPI ::SpawnSettings const& $getSpawnSettings() const;

    MCNAPI void $setSpawnSettings(::SpawnSettings const& spawnSettings);

    MCNAPI ::ActorSpawnRuleGroup const* $getSpawnRules() const;

    MCNAPI ::ActorSpawnRuleGroup* $getSpawnRulesMutable() const;

    MCNAPI ::SpawnGroupRegistry const* $getSpawnGroupRegistry() const;

    MCNAPI ::br::spawn::EntityTypeCache* $getEntityTypeCache() const;

    MCNAPI ::ItemActor*
    $spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);

    MCNAPI void $postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random);

    MCNAPI void
    $tick(::BlockSource& region, ::LevelChunkVolumeData const& levelChunkVolumeData, ::ChunkPos const chunkPos);

    MCNAPI void $tickMobCount();

    MCNAPI void $incrementSpawnableTickedMob();

    MCNAPI uint $getSpawnableTickedMobCountPrevious() const;

    MCNAPI ::std::unordered_set<::ActorUniqueID> $spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    );

    MCNAPI ::br::spawn::SpawnPlacements& $getSpawnPlacements();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
