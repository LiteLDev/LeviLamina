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
        // symbol: ??4Config@TrialSpawner@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct TrialSpawner::Config& operator=(struct TrialSpawner::Config const&);

        // symbol: ??1Config@TrialSpawner@@QEAA@XZ
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
        // symbol: ??1Data@TrialSpawner@@QEAA@XZ
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
        // symbol: ??1PlayerScanResult@TrialSpawner@@QEAA@XZ
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
        // symbol: ??1WeightedItemStack@TrialSpawner@@QEAA@XZ
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
        // symbol: ??1WeightedLootTable@TrialSpawner@@QEAA@XZ
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
    // symbol: ??0TrialSpawner@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit TrialSpawner(class BlockPos const&);

    // symbol: ?applyUpdatePacket@TrialSpawner@@QEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCAPI void applyUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ?createAndAddDisplayEntity@TrialSpawner@@QEAAPEAVMob@@AEAVBlockSource@@@Z
    MCAPI class Mob* createAndAddDisplayEntity(class BlockSource&);

    // symbol: ?createUpdatePacket@TrialSpawner@@QEAA?AVCompoundTag@@XZ
    MCAPI class CompoundTag createUpdatePacket();

    // symbol: ?getOrCreateNextSpawnData@TrialSpawner@@QEAAPEBVSpawnData@@AEAVRandom@@@Z
    MCAPI class SpawnData const* getOrCreateNextSpawnData(class Random&);

    // symbol: ?getSpawningLogicState@TrialSpawner@@QEBA?AW4SpawningLogicState@1@AEAVBlockSource@@@Z
    MCAPI ::TrialSpawner::SpawningLogicState getSpawningLogicState(class BlockSource&) const;

    // symbol: ?load@TrialSpawner@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const&);

    // symbol: ?removeDisplayEntity@TrialSpawner@@QEAAXXZ
    MCAPI void removeDisplayEntity();

    // symbol: ?save@TrialSpawner@@QEAAXAEAVCompoundTag@@@Z
    MCAPI void save(class CompoundTag&);

    // symbol: ?setEntityId@TrialSpawner@@QEAAXAEBUActorDefinitionIdentifier@@@Z
    MCAPI void setEntityId(struct ActorDefinitionIdentifier const&);

    // symbol: ?tick@TrialSpawner@@QEAAXAEAVBlockSource@@@Z
    MCAPI void tick(class BlockSource&);

    // symbol: ??1TrialSpawner@@QEAA@XZ
    MCAPI ~TrialSpawner();

    // symbol: ?DELAY_BETWEEN_ITEM_DISPENSING@TrialSpawner@@2HB
    MCAPI static int const DELAY_BETWEEN_ITEM_DISPENSING;

    // symbol: ?SPAWN_ITEM_DELAY_MAX@TrialSpawner@@2HB
    MCAPI static int const SPAWN_ITEM_DELAY_MAX;

    // symbol: ?SPAWN_ITEM_DELAY_MIN@TrialSpawner@@2HB
    MCAPI static int const SPAWN_ITEM_DELAY_MIN;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_becomeOminous@TrialSpawner@@AEAAXAEAVBlockSource@@AEBVBlock@@@Z
    MCAPI void _becomeOminous(class BlockSource&, class Block const&);

    // symbol: ?_canSpawnItemAboveActor@TrialSpawner@@AEBA_NAEBVActor@@VVec3@@M@Z
    MCAPI bool _canSpawnItemAboveActor(class Actor const&, class Vec3, float) const;

    // symbol: ?_dispenseItemAboveRandomCombatant@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _dispenseItemAboveRandomCombatant(class BlockSource&);

    // symbol: ?_doPlayerScan@TrialSpawner@@AEAA?AUPlayerScanResult@1@AEAVBlockSource@@@Z
    MCAPI struct TrialSpawner::PlayerScanResult _doPlayerScan(class BlockSource&);

    // symbol: ?_ejectReward@TrialSpawner@@AEBAXAEAVBlockSource@@VBlockPos@@@Z
    MCAPI void _ejectReward(class BlockSource&, class BlockPos) const;

    // symbol:
    // ?_getDispensingItems@TrialSpawner@@AEAAAEAV?$vector@UWeightedItemStack@TrialSpawner@@V?$allocator@UWeightedItemStack@TrialSpawner@@@std@@@std@@AEAVBlockSource@@@Z
    MCAPI std::vector<struct TrialSpawner::WeightedItemStack>& _getDispensingItems(class BlockSource&);

    // symbol:
    // ?_getPositionToSpawnItemSpawner@TrialSpawner@@AEBA?AV?$optional@VVec3@@@std@@AEAVBlockSource@@AEBV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@3@@Z
    MCAPI std::optional<class Vec3>
          _getPositionToSpawnItemSpawner(class BlockSource&, std::vector<struct ActorUniqueID> const&) const;

    // symbol: ?_hasLineOfSight@TrialSpawner@@AEBA_NAEBVBlockSource@@VVec3@@1M@Z
    MCAPI bool _hasLineOfSight(class BlockSource const&, class Vec3, class Vec3, float) const;

    // symbol: ?_offsetRandom@TrialSpawner@@AEAA?AVVec3@@V2@MAEAVRandom@@@Z
    MCAPI class Vec3 _offsetRandom(class Vec3, float, class Random&);

    // symbol: ?_selectLootTable@TrialSpawner@@AEAAXAEAVLevel@@@Z
    MCAPI void _selectLootTable(class Level&);

    // symbol: ?_sendParticlesForState@TrialSpawner@@AEAAXAEAVBlockSource@@VBlockPos@@W4SpawningLogicState@1@@Z
    MCAPI void _sendParticlesForState(class BlockSource&, class BlockPos, ::TrialSpawner::SpawningLogicState);

    // symbol: ?_sendSmallFlame@TrialSpawner@@AEAAXAEAVBlockSource@@VVec3@@@Z
    MCAPI void _sendSmallFlame(class BlockSource&, class Vec3);

    // symbol: ?_setUpdated@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _setUpdated(class BlockSource&);

    // symbol: ?_spawnItemSpawner@TrialSpawner@@AEAAXAEAVBlockSource@@VVec3@@AEBVItemStack@@@Z
    MCAPI void _spawnItemSpawner(class BlockSource&, class Vec3, class ItemStack const&);

    // symbol: ?_spawnMob@TrialSpawner@@AEAA?AV?$optional@UActorUniqueID@@@std@@AEAVBlockSource@@VBlockPos@@VVec3@@@Z
    MCAPI std::optional<struct ActorUniqueID> _spawnMob(class BlockSource&, class BlockPos, class Vec3);

    // symbol: ?_tryRegisterNewPlayers@TrialSpawner@@AEAAXAEAVBlockSource@@W4SpawningLogicState@1@@Z
    MCAPI void _tryRegisterNewPlayers(class BlockSource&, ::TrialSpawner::SpawningLogicState);

    // symbol: ?_updateStateMachine@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateStateMachine(class BlockSource&);

    // symbol: ?_ejectItem@TrialSpawner@@CAXAEAVBlockSource@@VVec3@@AEBVItemStack@@@Z
    MCAPI static void _ejectItem(class BlockSource&, class Vec3, class ItemStack const&);

    // symbol: ?_findFreePositionAbove@TrialSpawner@@CA?AV?$optional@VVec3@@@std@@AEBVBlockSource@@AEBVVec3@@H@Z
    MCAPI static std::optional<class Vec3> _findFreePositionAbove(class BlockSource const&, class Vec3 const&, int);

    // symbol:
    // ?_getRandomLootTableItems@TrialSpawner@@CA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVLevel@@AEAVRandom@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::vector<class ItemStack>
    _getRandomLootTableItems(class Level&, class Random&, DimensionType, std::string const&);

    // symbol: ?_isAllowedToSpawnInLevel@TrialSpawner@@CA_NAEAVLevel@@@Z
    MCAPI static bool _isAllowedToSpawnInLevel(class Level&);

    // symbol: ?_loadConfig@TrialSpawner@@CAXAEAUConfig@1@PEBVCompoundTag@@@Z
    MCAPI static void _loadConfig(struct TrialSpawner::Config&, class CompoundTag const*);

    // symbol: ?_removeMobByGameplay@TrialSpawner@@CAXAEAVLevel@@AEAVActor@@@Z
    MCAPI static void _removeMobByGameplay(class Level&, class Actor&);

    // symbol:
    // ?_saveConfig@TrialSpawner@@CA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAUConfig@1@PEBU41@@Z
    MCAPI static std::unique_ptr<class CompoundTag>
    _saveConfig(struct TrialSpawner::Config&, struct TrialSpawner::Config const*);

    // NOLINTEND
};
