#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/registry/TrialSpawnerConfig.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class CompoundTag;
class Dimension;
class Level;
class Mob;
class Random;
class SpawnData;
class Tag;
class TrialSpawnerConfigRegistry;
class Vec3;
struct ActorUniqueID;
// clang-format on

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
    struct Data;
    struct PlayerScanResult;
    struct WeightedItemStack;
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

    struct WeightedItemStack {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack> itemStack;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedItemStack();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
        ::ll::TypedStorage<4, 4, int>                                               mOpeningDelay;
        ::ll::TypedStorage<4, 4, int>                                               mEjectionDelay;
        ::ll::TypedStorage<4, 4, int>                                               mMaxDistance;
        ::ll::TypedStorage<8, 24, ::std::vector<::TrialSpawner::WeightedItemStack>> mDispensing;
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                     mActorDefId;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef>                                  mDisplayEntity;
        ::ll::TypedStorage<4, 4, float>                                             mCurrentSpinSpeed;
        ::ll::TypedStorage<4, 4, float>                                             mPreviousSpinSpeed;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void reset();

        MCAPI ~Data();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct PlayerScanResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                            haveTrialOmen;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> foundPlayers;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PlayerScanResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>      mPosition;
    ::ll::TypedStorage<4, 4, int>                    mPlayerSearchRange;
    ::ll::TypedStorage<8, 360, ::TrialSpawner::Data> mData;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mNormalConfig;
    ::ll::TypedStorage<8, 144, ::TrialSpawnerConfig> mOminousConfig;
    ::ll::TypedStorage<1, 1, bool>                   mIsOminous;
    ::ll::TypedStorage<1, 1, bool>                   hasSpawnedItemSpawner;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawner();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TrialSpawner(::BlockPos const& pos);

    MCAPI void _becomeOminous(::BlockSource& region, ::Block const& block);

    MCAPI void _dispenseItemAboveRandomCombatant(::BlockSource& region);

    MCAPI ::TrialSpawner::PlayerScanResult _doPlayerScan(::BlockSource& region);

    MCAPI ::std::vector<::TrialSpawner::WeightedItemStack>& _getDispensingItems(::BlockSource& region);

    MCAPI ::std::optional<::Vec3>
    _getPositionToSpawnItemSpawner(::BlockSource& region, ::std::vector<::ActorUniqueID> const& eligibleActorIds) const;

    MCAPI bool _hasLineOfSight(::BlockSource const& region, ::Vec3 from, ::Vec3 to, float maxRange) const;

    MCAPI void _selectLootTable(::Level& level);

    MCAPI void _sendParticlesForState(::BlockSource& region, ::BlockPos pos, ::TrialSpawner::SpawningLogicState state);

    MCAPI void _sendSmallFlame(::BlockSource& region, ::Vec3 center);

    MCAPI void _setUpdated(::BlockSource& region);

    MCAPI void _spawnItemSpawner(::BlockSource& region, ::Vec3 pos, ::ItemStack const& itemToSpawn);

    MCAPI ::std::optional<::ActorUniqueID> _spawnMob(::BlockSource& region, ::BlockPos blockActorPos, ::Vec3 spawnPos);

    MCAPI void _tryRegisterNewPlayers(::BlockSource& region, ::TrialSpawner::SpawningLogicState currentState);

    MCAPI void _updateStateMachine(::BlockSource& region);

    MCAPI void applyUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);

    MCAPI ::Mob* createAndAddDisplayEntity(::BlockSource& region);

    MCAPI ::SpawnData const* getOrCreateNextSpawnData(::Random& random);

    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(::BlockSource& region) const;

    MCAPI void load(::CompoundTag const& data, ::TrialSpawnerConfigRegistry const& configRegistry);

    MCAPI void removeDisplayEntity();

    MCAPI void save(::CompoundTag& tag);

    MCAPI void setEntityId(::ActorDefinitionIdentifier const& actorDefId, ::BlockSource& region);

    MCAPI void tick(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _ejectItem(::BlockSource& region, ::Vec3 pos, ::ItemStack const& item);

    MCAPI static void _ejectResultItems(
        ::BlockSource&                    region,
        ::BlockPos                        blockPos,
        ::std::vector<::ItemStack> const& items,
        int                               lootCount
    );

    MCAPI static ::std::optional<::Vec3>
    _findFreePositionAbove(::BlockSource const& region, ::Vec3 const& from, int distance);

    MCAPI static ::std::vector<::ItemStack> _getRandomLootTableItems(
        ::Level&             level,
        ::Random&            random,
        ::DimensionType      dimensionType,
        ::std::string const& lootTableName
    );

    MCAPI static bool _isAllowedToSpawnInLevel(::Level& level);

    MCAPI static void _removeMobByGameplay(::Level& level, ::Actor& mob);

    MCAPI static ::std::unique_ptr<::Tag> _saveConfig(::TrialSpawnerConfig& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND
};
