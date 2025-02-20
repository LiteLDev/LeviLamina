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
    ::ll::UntypedStorage<8, 120> mUnk6f4ad5;
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int
    _handlePopulationCap(::MobSpawnerData const* mobType, ::SpawnConditions const& conditions, int inSpawnCount);

    MCAPI void _postProcessSpawnMobs(
        ::BlockSource&                                                      region,
        int                                                                 xo,
        int                                                                 zo,
        ::Randomize&                                                        randomize,
        bool                                                                doMobSpawning,
        ::std::function<void(::BlockPos const&, ::SpawnConditions&)> const& spawnMobClusterCallback,
        ::std::function<bool(::BlockSource const&, ::BlockPos)> const&      isInsideAncientCity
    );

    MCAPI void _sendHerdEvents(::MobSpawnHerdInfo const& herdInfo, ::std::vector<::Mob*>& spawnGroup) const;

    MCAPI void _spawnMobCluster(::BlockSource& region, ::BlockPos const& pos, ::SpawnConditions& conditions);

    MCAPI void _spawnMobInCluster(
        ::BlockSource&                     region,
        ::ActorDefinitionIdentifier const& id,
        ::BlockPos const&                  pos,
        ::SpawnConditions const&           conditions,
        ::std::vector<::Mob*>&             spawnGroup
    );

    MCAPI void _updateBaseTypeCount(::BlockSource& region, ::ChunkPos const& center);

    MCAPI void _updateGroupPersistence(::MobSpawnRules const& spawnRules, ::std::vector<::Mob*> const& spawnGroup);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isInsideAncientCity(::BlockSource const& region, ::BlockPos pos);
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
    MCAPI void $initializeServerSide(::ResourcePackManager& rpm, ::IWorldRegistriesProvider& registries);

    MCFOLD ::SpawnSettings const& $getSpawnSettings() const;

    MCAPI void $setSpawnSettings(::SpawnSettings const& spawnSettings);

    MCFOLD ::ActorSpawnRuleGroup const* $getSpawnRules() const;

    MCFOLD ::ActorSpawnRuleGroup* $getSpawnRulesMutable() const;

    MCFOLD ::SpawnGroupRegistry const* $getSpawnGroupRegistry() const;

    MCFOLD ::br::spawn::EntityTypeCache* $getEntityTypeCache() const;

    MCAPI ::ItemActor*
    $spawnItem(::BlockSource& region, ::ItemStack const& inst, ::Actor* spawner, ::Vec3 const& pos, int throwTime);

    MCAPI void $postProcessSpawnMobs(::BlockSource& region, int xo, int zo, ::Random& random);

    MCAPI void
    $tick(::BlockSource& region, ::LevelChunkVolumeData const& levelChunkVolumeData, ::ChunkPos const chunkPos);

    MCAPI void $tickMobCount();

    MCAPI void $incrementSpawnableTickedMob();

    MCAPI uint $getSpawnableTickedMobCountPrevious() const;

    MCAPI ::std::unordered_set<::ActorUniqueID> $spawnMobGroup(
        ::BlockSource&                  region,
        ::std::string const&            spawnGroupId,
        ::Vec3 const&                   pos,
        bool                            doScatter,
        bool                            validateDistToPlayer,
        ::std::function<void(::Mob&)>&& spawnedCallback
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
