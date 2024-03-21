#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class TrialSpawner {
public:
    // TrialSpawner inner types declare
    // clang-format off
    struct WeightedLootTable;
    // clang-format on

    // TrialSpawner inner types define
    enum class SpawningLogicState {};

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

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_findPlayers@TrialSpawner@@AEAA?AV?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@AEAVBlockSource@@@Z
    MCAPI std::vector<struct ActorUniqueID> _findPlayers(class BlockSource&);

    // symbol: ?_offsetRandom@TrialSpawner@@AEAA?AVVec3@@V2@MAEAVRandom@@@Z
    MCAPI class Vec3 _offsetRandom(class Vec3, float, class Random&);

    // symbol: ?_resetSpawnerStatistics@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _resetSpawnerStatistics(class BlockSource&);

    // symbol: ?_selectLootTable@TrialSpawner@@AEAAXAEAVLevel@@@Z
    MCAPI void _selectLootTable(class Level&);

    // symbol: ?_sendParticlesForState@TrialSpawner@@AEAAXW4SpawningLogicState@1@AEAVLevel@@VBlockPos@@@Z
    MCAPI void _sendParticlesForState(::TrialSpawner::SpawningLogicState, class Level&, class BlockPos);

    // symbol: ?_sendSmallFlame@TrialSpawner@@AEAAXAEAVLevel@@VVec3@@@Z
    MCAPI void _sendSmallFlame(class Level&, class Vec3);

    // symbol: ?_setUpdated@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _setUpdated(class BlockSource&);

    // symbol: ?_spawnMob@TrialSpawner@@AEAA?AV?$optional@UActorUniqueID@@@std@@AEAVBlockSource@@VBlockPos@@@Z
    MCAPI std::optional<struct ActorUniqueID> _spawnMob(class BlockSource&, class BlockPos);

    // symbol: ?_tryRegisterNewPlayers@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _tryRegisterNewPlayers(class BlockSource&);

    // symbol: ?_updateStateMachine@TrialSpawner@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateStateMachine(class BlockSource&);

    // symbol: ?_ejectItem@TrialSpawner@@CAXAEAVBlockSource@@AEBVVec3@@AEBVItemStack@@@Z
    MCAPI static void _ejectItem(class BlockSource&, class Vec3 const&, class ItemStack const&);

    // symbol:
    // ?_getRandomLootTableItems@TrialSpawner@@CA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::vector<class ItemStack> _getRandomLootTableItems(class Level&, DimensionType, std::string const&);

    // NOLINTEND
};
