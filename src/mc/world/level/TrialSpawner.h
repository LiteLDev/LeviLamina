#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
    struct Config;
    class Data;
    struct PlayerScanResult;
    struct WeightedItemStack;
    struct WeightedLootTable;
    // clang-format on

    // TrialSpawner inner types define
    enum class SpawningLogicState {};

    struct Config {
    public:
        // prevent constructor by default
        Config(Config const&);
        Config();

    public:
        // NOLINTBEGIN
        MCAPI struct TrialSpawner::Config& operator=(struct TrialSpawner::Config const&);

        MCAPI ~Config();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class Data {
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();

    public:
        // NOLINTBEGIN
        MCAPI ~Data();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct PlayerScanResult {
    public:
        // prevent constructor by default
        PlayerScanResult& operator=(PlayerScanResult const&);
        PlayerScanResult(PlayerScanResult const&);
        PlayerScanResult();

    public:
        // NOLINTBEGIN
        MCAPI ~PlayerScanResult();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct WeightedItemStack {
    public:
        // prevent constructor by default
        WeightedItemStack& operator=(WeightedItemStack const&);
        WeightedItemStack(WeightedItemStack const&);
        WeightedItemStack();

    public:
        // NOLINTBEGIN
        MCAPI ~WeightedItemStack();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct WeightedLootTable {
    public:
        // prevent constructor by default
        WeightedLootTable& operator=(WeightedLootTable const&);
        WeightedLootTable(WeightedLootTable const&);
        WeightedLootTable();

    public:
        // NOLINTBEGIN
        MCAPI ~WeightedLootTable();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TrialSpawner& operator=(TrialSpawner const&);
    TrialSpawner(TrialSpawner const&);
    TrialSpawner();

public:
    // NOLINTBEGIN
    MCAPI explicit TrialSpawner(class BlockPos const& pos);

    MCAPI void applyUpdatePacket(class CompoundTag const& tag, class BlockSource& region);

    MCAPI class Mob* createAndAddDisplayEntity(class BlockSource& region);

    MCAPI class CompoundTag createUpdatePacket();

    MCAPI class SpawnData const* getOrCreateNextSpawnData(class Random& random);

    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(class BlockSource& region) const;

    MCAPI void load(class CompoundTag const& data);

    MCAPI void removeDisplayEntity();

    MCAPI void save(class CompoundTag& tag);

    MCAPI void setEntityId(struct ActorDefinitionIdentifier const& actorDefId);

    MCAPI void tick(class BlockSource& region);

    MCAPI ~TrialSpawner();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _becomeOminous(class BlockSource& region, class Block const& block);

    MCAPI bool
    _canSpawnItemAboveActor(class Actor const& actor, class Vec3 blockCenterPos, float actorSearchRangeSqr) const;

    MCAPI void _dispenseItemAboveRandomCombatant(class BlockSource& region);

    MCAPI struct TrialSpawner::PlayerScanResult _doPlayerScan(class BlockSource& region);

    MCAPI void _ejectReward(class BlockSource& region, class BlockPos pos) const;

    MCAPI std::vector<struct TrialSpawner::WeightedItemStack>& _getDispensingItems(class BlockSource& region);

    MCAPI std::optional<class Vec3> _getPositionToSpawnItemSpawner(
        class BlockSource&                       region,
        std::vector<struct ActorUniqueID> const& eligibleActorIds
    ) const;

    MCAPI bool _hasLineOfSight(class BlockSource const& region, class Vec3 from, class Vec3 to, float maxRange) const;

    MCAPI class Vec3 _offsetRandom(class Vec3 vec, float offset, class Random& random);

    MCAPI void _selectLootTable(class Level& level);

    MCAPI void
    _sendParticlesForState(class BlockSource& region, class BlockPos pos, ::TrialSpawner::SpawningLogicState state);

    MCAPI void _sendSmallFlame(class BlockSource& region, class Vec3 center);

    MCAPI void _setUpdated(class BlockSource& region);

    MCAPI void _spawnItemSpawner(class BlockSource& region, class Vec3 pos, class ItemStack const& itemToSpawn);

    MCAPI std::optional<struct ActorUniqueID>
          _spawnMob(class BlockSource& region, class BlockPos blockActorPos, class Vec3 spawnPos);

    MCAPI void _tryRegisterNewPlayers(class BlockSource& region, ::TrialSpawner::SpawningLogicState currentState);

    MCAPI void _updateStateMachine(class BlockSource& region);

    MCAPI static void _ejectItem(class BlockSource& region, class Vec3 pos, class ItemStack const& item);

    MCAPI static std::optional<class Vec3>
    _findFreePositionAbove(class BlockSource const& region, class Vec3 const& from, int distance);

    MCAPI static std::vector<class ItemStack> _getRandomLootTableItems(
        class Level&       level,
        class Random&      random,
        DimensionType      dimensionType,
        std::string const& lootTableName
    );

    MCAPI static bool _isAllowedToSpawnInLevel(class Level& level);

    MCAPI static void _loadConfig(struct TrialSpawner::Config& config, class CompoundTag const* data);

    MCAPI static void _removeMobByGameplay(class Level& level, class Actor& mob);

    MCAPI static std::unique_ptr<class CompoundTag>
    _saveConfig(struct TrialSpawner::Config& config, struct TrialSpawner::Config const* baselineConfig);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static int const& DELAY_BETWEEN_ITEM_DISPENSING();

    MCAPI static int const& SPAWN_ITEM_DELAY_MAX();

    MCAPI static int const& SPAWN_ITEM_DELAY_MIN();

    // NOLINTEND
};
