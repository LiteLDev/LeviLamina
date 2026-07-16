#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Spawner.h"
#include "mc/world/level/chunk/SpawnPlacements.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorSpawnRuleGroup;
class BlockSource;
class ChunkPos;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class ItemActor;
class ItemStack;
class Level;
class LevelChunkVolumeData;
class Mob;
class Random;
class ResourcePackManager;
class SpawnGroupRegistry;
class Vec3;
struct ActorUniqueID;
namespace br::spawn { class EntityTypeCache; }
// clang-format on

class BedrockSpawner : public ::Spawner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>                                        mLevel;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                mSpawnSettings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorSpawnRuleGroup>>        mActorSpawnRules;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnGroupRegistry>>         mSpawnGroupRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::spawn::EntityTypeCache>> mEntityTypeCache;
    ::ll::TypedStorage<8, 272, ::br::spawn::SpawnPlacements>                  mSpawnPlacements;
    ::ll::TypedStorage<4, 56, int[2][7]>                                      mBaseTypeCount;
    ::ll::TypedStorage<8, 128, ::std::unordered_map<::HashedString, int>[2]>  mEntityTypeCount;
    ::ll::TypedStorage<4, 4, int>                                             mTotalEntityCount;
    ::ll::TypedStorage<4, 4, uint>                                            mSpawnableMobTickCount;
    ::ll::TypedStorage<4, 4, uint>                                            mSpawnableMobTickCountPrevious;
    // NOLINTEND

public:
    // prevent constructor by default
    BedrockSpawner& operator=(BedrockSpawner const&);
    BedrockSpawner(BedrockSpawner const&);
    BedrockSpawner();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedrockSpawner() /*override*/ = default;

    virtual void initializeServerSide(::ResourcePackManager&, ::IWorldRegistriesProvider&) /*override*/;

    virtual ::SpawnSettings const& getSpawnSettings() const /*override*/;

    virtual void setSpawnSettings(::SpawnSettings const&) /*override*/;

    virtual ::ActorSpawnRuleGroup const* getSpawnRules() const /*override*/;

    virtual ::ActorSpawnRuleGroup* getSpawnRulesMutable() const /*override*/;

    virtual ::SpawnGroupRegistry const* getSpawnGroupRegistry() const /*override*/;

    virtual ::br::spawn::EntityTypeCache* getEntityTypeCache() const /*override*/;

    virtual ::ItemActor* spawnItem(
        ::BlockSource&     region,
        ::ItemStack const& inst,
        ::Actor*           spawner,
        ::Vec3 const&      pos,
        int                throwTime
    ) /*override*/;

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

    virtual ::br::spawn::SpawnPlacements& getSpawnPlacements() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BedrockSpawner(::Level& level, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
