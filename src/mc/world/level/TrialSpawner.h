#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class Level;
class Mob;
class Random;
class SpawnData;
class TrialSpawnerConfigRegistry;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
// clang-format on

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
    struct PlayerScanResult;
    struct WeightedItemStack;
    struct Data;
    // clang-format on

    // TrialSpawner inner types define
    enum class SpawningLogicState : int {
        Inactive                 = 0,
        WaitingForPlayers        = 1,
        Active                   = 2,
        WaitingForRewardEjection = 3,
        EjectingRewards          = 4,
        Cooldown                 = 5,
        Count                    = 6,
    };

    struct PlayerScanResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                            haveTrialOmen;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> foundPlayers;
        // NOLINTEND
    };

    struct WeightedItemStack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack> itemStack;
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                   mDetectedPlayers;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                   mCurrentMobs;
        ::ll::TypedStorage<8, 8, uint64>                                            mCooldownEndsAt;
        ::ll::TypedStorage<8, 8, uint64>                                            mNextMobSpawnsAt;
        ::ll::TypedStorage<4, 4, int>                                               mTotalMobsSpawned;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpawnData>>                    mNextSpawnData;
        ::ll::TypedStorage<8, 32, ::std::string>                                    mSelectedLootTableName;
        ::ll::TypedStorage<8, 24, ::std::vector<::TrialSpawner::WeightedItemStack>> mDispensing;
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                     mActorDefId;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef>                                  mDisplayEntity;
        ::ll::TypedStorage<4, 4, float>                                             mCurrentSpinSpeed;
        ::ll::TypedStorage<4, 4, float>                                             mPreviousSpinSpeed;
        ::ll::TypedStorage<1, 1, bool>                                              mSkipNextMobCleanup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Data();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>      mPosition;
    ::ll::TypedStorage<4, 4, int>                    mPlayerSearchRange;
    ::ll::TypedStorage<8, 352, ::TrialSpawner::Data> mData;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mNormalConfig;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mOminousConfig;
    ::ll::TypedStorage<1, 1, bool>                   mIsOminous;
    ::ll::TypedStorage<1, 1, bool>                   hasSpawnedItemSpawner;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::TrialSpawner::WeightedItemStack>& _getDispensingItems(::BlockSource& region);

    MCAPI ::std::optional<::Vec3>
    _getPositionToSpawnItemSpawner(::BlockSource& region, ::std::vector<::ActorUniqueID> const& eligibleActorIds) const;

    MCAPI bool
    _hasLineOfSight(::BlockSource const& region, ::Vec3 const from, ::Vec3 const to, float const maxRange) const;

    MCAPI void _sendSmallFlame(::BlockSource& region, ::Vec3 const center);

    MCAPI void _setUpdated(::BlockSource& region);

    MCAPI void _spawnItemSpawner(::BlockSource& region, ::Vec3 pos, ::ItemStack const& itemToSpawn);

    MCAPI ::std::optional<::ActorUniqueID> _spawnMob(::BlockSource& region, ::BlockPos blockActorPos);

    MCAPI void _tryRegisterNewPlayers(::BlockSource& region, ::TrialSpawner::SpawningLogicState currentState);

    MCAPI void applyUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);

    MCAPI ::Mob* createAndAddDisplayEntity(::BlockSource& region);

    MCAPI ::CompoundTag createUpdatePacket();

    MCAPI ::SpawnData const* getOrCreateNextSpawnData(::Random& random);

#ifdef LL_PLAT_C
    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(::BlockSource& region) const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(::BlockSource& region) const;
#endif

    MCAPI void load(::CompoundTag const& data, ::TrialSpawnerConfigRegistry const& configRegistry);

    MCAPI void removeDisplayEntity();

    MCAPI void save(::CompoundTag& tag);

    MCAPI void setEntityId(::ActorDefinitionIdentifier const& actorDefId, ::BlockSource& region);

    MCAPI void tick(::BlockSource& region);

#ifdef LL_PLAT_C
    MCAPI ::Mob* tryGetOrCreateDisplayEntity(::BlockSource& region);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemStack> _getRandomLootTableItems(
        ::Level&             level,
        ::Random&            random,
        ::DimensionType      dimensionType,
        ::std::string const& lootTableName
    );

#ifdef LL_PLAT_C
    MCAPI static void addSpawnParticles(::Level& level, ::Vec3 pos, bool isOminous);

    MCAPI static void sendEjectItemParticles(::Level& level, ::BlockPos pos, bool isOminous);
#endif
    // NOLINTEND
};
