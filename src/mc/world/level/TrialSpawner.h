#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class ItemStack;
class Level;
class Mob;
class Random;
class SpawnData;
class Tag;
class TrialSpawnerConfigRegistry;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct TrialSpawnerConfig;
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
        ::ll::UntypedStorage<8, 152> mUnkcfe0d7;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedItemStack& operator=(WeightedItemStack const&);
        WeightedItemStack(WeightedItemStack const&);
        WeightedItemStack();

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
        ::ll::UntypedStorage<8, 24>  mUnkfde9b7;
        ::ll::UntypedStorage<8, 24>  mUnk3306f2;
        ::ll::UntypedStorage<8, 8>   mUnkc20a10;
        ::ll::UntypedStorage<8, 8>   mUnk6b8548;
        ::ll::UntypedStorage<4, 4>   mUnk8dd272;
        ::ll::UntypedStorage<8, 8>   mUnkf9e7b7;
        ::ll::UntypedStorage<8, 32>  mUnk5f3e43;
        ::ll::UntypedStorage<4, 4>   mUnk3e0fdd;
        ::ll::UntypedStorage<4, 4>   mUnkd5f05c;
        ::ll::UntypedStorage<4, 4>   mUnkedc67a;
        ::ll::UntypedStorage<8, 24>  mUnk3e65ea;
        ::ll::UntypedStorage<8, 176> mUnkc735e9;
        ::ll::UntypedStorage<8, 24>  mUnkdbeb48;
        ::ll::UntypedStorage<4, 4>   mUnkdf9eb1;
        ::ll::UntypedStorage<4, 4>   mUnk1ae719;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();

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
        ::ll::UntypedStorage<1, 1>  mUnk943899;
        ::ll::UntypedStorage<8, 24> mUnk10a0ac;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerScanResult& operator=(PlayerScanResult const&);
        PlayerScanResult(PlayerScanResult const&);
        PlayerScanResult();

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
    ::ll::UntypedStorage<4, 12>  mUnkbe7b9a;
    ::ll::UntypedStorage<4, 4>   mUnk57694f;
    ::ll::UntypedStorage<8, 360> mUnk875e9a;
    ::ll::UntypedStorage<8, 144> mUnk686b60;
    ::ll::UntypedStorage<8, 144> mUnkbc6028;
    ::ll::UntypedStorage<1, 1>   mUnk73169e;
    ::ll::UntypedStorage<1, 1>   mUnk338f73;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawner& operator=(TrialSpawner const&);
    TrialSpawner(TrialSpawner const&);
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

    MCAPI static bool _isOminous(::BlockSource& region, ::BlockPos pos);

    MCAPI static void _removeMobByGameplay(::Level& level, ::Actor& mob);

    MCAPI static ::std::unique_ptr<::Tag> _saveConfig(::TrialSpawnerConfig& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND
};
