/**
 * @file  MC/Spawner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelChunk.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Mob;
class ItemActor;
class ItemStack;
class LevelChunk;

#undef BEFORE_EXTRA

/**
 * @brief MC class Spawner.
 *
 */
class Spawner {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI Mob* spawnMob(Vec3& ,int, std::string );
    LIAPI ItemActor* spawnItem(Vec3&, int, ItemStack*);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNER
public:
    class Spawner& operator=(class Spawner const &) = delete;
    Spawner(class Spawner const &) = delete;
    Spawner() = delete;
#endif

public:
    /**
     * @hash   1658248685
     * @symbol ??0Spawner@@QEAA@AEAVLevel@@@Z
     */
    MCAPI Spawner(class Level &);
    /**
     * @hash   1663617439
     * @symbol ?postProcessSpawnMobs@Spawner@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
     */
    MCAPI void postProcessSpawnMobs(class BlockSource &, int, int, class Random &);
    /**
     * @hash   -1959554719
     * @symbol ?spawnItem@Spawner@@QEAAPEAVItemActor@@AEAVBlockSource@@AEBVItemStack@@PEAVActor@@AEBVVec3@@H@Z
     */
    MCAPI class ItemActor * spawnItem(class BlockSource &, class ItemStack const &, class Actor *, class Vec3 const &, int);
    /**
     * @hash   1332228567
     * @symbol ?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z
     */
    MCAPI class Mob * spawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, bool, bool, bool);
    /**
     * @hash   1925256967
     * @symbol ?spawnMobGroup@Spawner@@QEAA?AV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@AEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVVec3@@_N3$$QEAV?$function@$$A6AXAEAVMob@@@Z@3@@Z
     */
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> spawnMobGroup(class BlockSource &, std::string const &, class Vec3 const &, bool, bool, class std::function<void (class Mob &)> &&);
    /**
     * @hash   -332206444
     * @symbol ?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z
     */
    MCAPI class Actor * spawnProjectile(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -2094423247
     * @symbol ?tick@Spawner@@QEAAXAEAVBlockSource@@AEBVLevelChunk@@@Z
     */
    MCAPI void tick(class BlockSource &, class LevelChunk const &);
    /**
     * @hash   -1743359258
     * @symbol ?findNextSpawnBlockUnder@Spawner@@SA_NAEBVBlockSource@@AEAVBlockPos@@W4MaterialType@@W4SpawnBlockRequirements@@@Z
     */
    MCAPI static bool findNextSpawnBlockUnder(class BlockSource const &, class BlockPos &, enum MaterialType, enum SpawnBlockRequirements);
    /**
     * @hash   -2103933520
     * @symbol ?isSpawnPositionOk@Spawner@@SA_NAEBVMobSpawnRules@@AEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI static bool isSpawnPositionOk(class MobSpawnRules const &, class BlockSource &, class BlockPos const &, bool);

//protected:
    /**
     * @hash   -284669565
     * @symbol ?_spawnStructureMob@Spawner@@IEAAXAEAVBlockSource@@AEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z
     */
    MCAPI void _spawnStructureMob(class BlockSource &, class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &);
    /**
     * @hash   2096875601
     * @symbol ?_tickSpawnMobClusters@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEAVSpawnConditions@@@Z@std@@@Z
     */
    MCAPI void _tickSpawnMobClusters(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, class SpawnConditions &)> const &);
    /**
     * @hash   -99229326
     * @symbol ?_tickSpawnStructureMobs@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z@std@@AEBV?$function@$$A6A?AV?$span@$$CBUHardcodedSpawningArea@LevelChunk@@$0?0@gsl@@AEBVLevelChunk@@@Z@6@@Z
     */
    MCAPI void _tickSpawnStructureMobs(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &)> const &, class std::function<class gsl::span<struct LevelChunk::HardcodedSpawningArea const, -1> (class LevelChunk const &)> const &);
    /**
     * @hash   629770837
     * @symbol ?_updateBaseTypeCount@Spawner@@IEAAXAEAVBlockSource@@AEBVChunkPos@@@Z
     */
    MCAPI void _updateBaseTypeCount(class BlockSource &, class ChunkPos const &);

//private:
    /**
     * @hash   1770082613
     * @symbol ?_handlePopulationCap@Spawner@@AEAAHPEBVMobSpawnerData@@AEBVSpawnConditions@@H@Z
     */
    MCAPI int _handlePopulationCap(class MobSpawnerData const *, class SpawnConditions const &, int);
    /**
     * @hash   -1056136589
     * @symbol ?_permuteId@Spawner@@AEBAXAEAUActorDefinitionIdentifier@@AEBVMobSpawnRules@@AEAVRandom@@@Z
     */
    MCAPI void _permuteId(struct ActorDefinitionIdentifier &, class MobSpawnRules const &, class Random &) const;
    /**
     * @hash   925288250
     * @symbol ?_sendHerdEvents@Spawner@@AEBAXAEBUMobSpawnHerdInfo@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
     */
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const &, std::vector<class Mob *> &) const;
    /**
     * @hash   -1091773407
     * @symbol ?_spawnMobCluster@Spawner@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVSpawnConditions@@@Z
     */
    MCAPI void _spawnMobCluster(class BlockSource &, class BlockPos const &, class SpawnConditions &);
    /**
     * @hash   -583998596
     * @symbol ?_spawnMobInCluster@Spawner@@AEAAXAEAVBlockSource@@UActorDefinitionIdentifier@@AEBVBlockPos@@AEBVSpawnConditions@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
     */
    MCAPI void _spawnMobInCluster(class BlockSource &, struct ActorDefinitionIdentifier, class BlockPos const &, class SpawnConditions const &, std::vector<class Mob *> &);
    /**
     * @hash   787183
     * @symbol ?_updateMobCounts@Spawner@@AEAAXAEAVBlockSource@@AEBUActorDefinitionIdentifier@@AEBVSpawnConditions@@@Z
     */
    MCAPI void _updateMobCounts(class BlockSource &, struct ActorDefinitionIdentifier const &, class SpawnConditions const &);

protected:

private:
    /**
     * @hash   783398335
     * @symbol ?SPAWN_RING_OFFSETS@Spawner@@0V?$unordered_set@VChunkPos@@U?$hash@VChunkPos@@@std@@U?$equal_to@VChunkPos@@@3@V?$allocator@VChunkPos@@@3@@std@@B
     */
    MCAPI static class std::unordered_set<class ChunkPos, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<class ChunkPos>> const SPAWN_RING_OFFSETS;

};