#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

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
    };

public:
    // prevent constructor by default
    TrialSpawner& operator=(TrialSpawner const&);
    TrialSpawner(TrialSpawner const&);
    TrialSpawner();

public:
    // NOLINTBEGIN
    MCAPI explicit TrialSpawner(class BlockPos const&);

    MCAPI void applyUpdatePacket(class CompoundTag const&, class BlockSource&);

    MCAPI class Mob* createAndAddDisplayEntity(class BlockSource&);

    MCAPI class CompoundTag createUpdatePacket();

    MCAPI class SpawnData const* getOrCreateNextSpawnData(class Random&);

    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(class BlockSource&) const;

    MCAPI void load(class CompoundTag const&);

    MCAPI void removeDisplayEntity();

    MCAPI void save(class CompoundTag&);

    MCAPI void setEntityId(struct ActorDefinitionIdentifier const&);

    MCAPI void tick(class BlockSource&);

    MCAPI ~TrialSpawner();

    MCAPI static int const DELAY_BETWEEN_ITEM_DISPENSING;

    MCAPI static int const SPAWN_ITEM_DELAY_MAX;

    MCAPI static int const SPAWN_ITEM_DELAY_MIN;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _becomeOminous(class BlockSource&, class Block const&);

    MCAPI bool _canSpawnItemAboveActor(class Actor const&, class Vec3, float) const;

    MCAPI void _dispenseItemAboveRandomCombatant(class BlockSource&);

    MCAPI struct TrialSpawner::PlayerScanResult _doPlayerScan(class BlockSource&);

    MCAPI void _ejectReward(class BlockSource&, class BlockPos) const;

    MCAPI std::vector<struct TrialSpawner::WeightedItemStack>& _getDispensingItems(class BlockSource&);

    MCAPI std::optional<class Vec3>
          _getPositionToSpawnItemSpawner(class BlockSource&, std::vector<struct ActorUniqueID> const&) const;

    MCAPI bool _hasLineOfSight(class BlockSource const&, class Vec3, class Vec3, float) const;

    MCAPI class Vec3 _offsetRandom(class Vec3, float, class Random&);

    MCAPI void _selectLootTable(class Level&);

    MCAPI void _sendParticlesForState(class BlockSource&, class BlockPos, ::TrialSpawner::SpawningLogicState);

    MCAPI void _sendSmallFlame(class BlockSource&, class Vec3);

    MCAPI void _setUpdated(class BlockSource&);

    MCAPI void _spawnItemSpawner(class BlockSource&, class Vec3, class ItemStack const&);

    MCAPI std::optional<struct ActorUniqueID> _spawnMob(class BlockSource&, class BlockPos, class Vec3);

    MCAPI void _tryRegisterNewPlayers(class BlockSource&, ::TrialSpawner::SpawningLogicState);

    MCAPI void _updateStateMachine(class BlockSource&);

    MCAPI static void _ejectItem(class BlockSource&, class Vec3, class ItemStack const&);

    MCAPI static std::optional<class Vec3> _findFreePositionAbove(class BlockSource const&, class Vec3 const&, int);

    MCAPI static std::vector<class ItemStack>
    _getRandomLootTableItems(class Level&, class Random&, DimensionType, std::string const&);

    MCAPI static bool _isAllowedToSpawnInLevel(class Level&);

    MCAPI static void _loadConfig(struct TrialSpawner::Config&, class CompoundTag const*);

    MCAPI static void _removeMobByGameplay(class Level&, class Actor&);

    MCAPI static std::unique_ptr<class CompoundTag>
    _saveConfig(struct TrialSpawner::Config&, struct TrialSpawner::Config const*);

    // NOLINTEND
};
