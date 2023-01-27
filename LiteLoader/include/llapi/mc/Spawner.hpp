/**
 * @file  Spawner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../LevelChunk.hpp"

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
     * @hash   -1768389763
     * @symbol  ??0Spawner\@\@QEAA\@AEAVLevel\@\@\@Z
     */
    MCAPI Spawner(class Level &);
    /**
     * @hash   -1761683297
     * @symbol  ?postProcessSpawnMobs\@Spawner\@\@QEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCAPI void postProcessSpawnMobs(class BlockSource &, int, int, class Random &);
    /**
     * @hash   -1089965039
     * @symbol  ?spawnItem\@Spawner\@\@QEAAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVItemStack\@\@PEAVActor\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class ItemActor * spawnItem(class BlockSource &, class ItemStack const &, class Actor *, class Vec3 const &, int);
    /**
     * @hash   -2093133673
     * @symbol  ?spawnMob\@Spawner\@\@QEAAPEAVMob\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@_N44\@Z
     */
    MCAPI class Mob * spawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, bool, bool, bool);
    /**
     * @hash   -1500089897
     * @symbol  ?spawnMobGroup\@Spawner\@\@QEAA?AV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@AEAVBlockSource\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVVec3\@\@_N3$$QEAV?$function\@$$A6AXAEAVMob\@\@\@Z\@3\@\@Z
     */
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> spawnMobGroup(class BlockSource &, std::string const &, class Vec3 const &, bool, bool, class std::function<void (class Mob &)> &&);
    /**
     * @hash   537460116
     * @symbol  ?spawnProjectile\@Spawner\@\@QEAAPEAVActor\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@PEAV2\@AEBVVec3\@\@3\@Z
     */
    MCAPI class Actor * spawnProjectile(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -1224710559
     * @symbol  ?tick\@Spawner\@\@QEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@\@Z
     */
    MCAPI void tick(class BlockSource &, class LevelChunk const &);
    /**
     * @hash   -873800330
     * @symbol  ?findNextSpawnBlockUnder\@Spawner\@\@SA_NAEBVBlockSource\@\@AEAVBlockPos\@\@W4MaterialType\@\@W4SpawnBlockRequirements\@\@\@Z
     */
    MCAPI static bool findNextSpawnBlockUnder(class BlockSource const &, class BlockPos &, enum class MaterialType, enum class SpawnBlockRequirements);
    /**
     * @hash   -1234343840
     * @symbol  ?isSpawnPositionOk\@Spawner\@\@SA_NAEBVMobSpawnRules\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static bool isSpawnPositionOk(class MobSpawnRules const &, class BlockSource &, class BlockPos const &, bool);

//protected:
    /**
     * @hash   -588805805
     * @symbol  ?_postProcessSpawnMobs\@Spawner\@\@IEAAXAEAVBlockSource\@\@HHAEAVRandomize\@\@_NAEBV?$function\@$$A6AXAEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@VBlockPos\@\@\@Z\@5\@\@Z
     */
    MCAPI void _postProcessSpawnMobs(class BlockSource &, int, int, class Randomize &, bool, class std::function<void (class BlockPos const &, class SpawnConditions &)> const &, class std::function<bool (class BlockSource const &, class BlockPos)> const &);
    /**
     * @hash   584612595
     * @symbol  ?_spawnStructureMob\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBUHardcodedSpawningArea\@LevelChunk\@\@AEBVSpawnConditions\@\@\@Z
     */
    MCAPI void _spawnStructureMob(class BlockSource &, class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &);
    /**
     * @hash   151484506
     * @symbol  ?_tickSpawnMobClusters\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@VBlockPos\@\@AEBV?$function\@$$A6AXAEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@VBlockPos\@\@\@Z\@6\@\@Z
     */
    MCAPI void _tickSpawnMobClusters(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, class SpawnConditions &)> const &, class std::function<bool (class BlockSource const &, class BlockPos)> const &);
    /**
     * @hash   770221970
     * @symbol  ?_tickSpawnStructureMobs\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@VBlockPos\@\@AEBV?$function\@$$A6AXAEBVBlockPos\@\@AEBUHardcodedSpawningArea\@LevelChunk\@\@AEBVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A?AV?$span\@$$CBUHardcodedSpawningArea\@LevelChunk\@\@$0?0\@gsl\@\@AEBVLevelChunk\@\@\@Z\@6\@\@Z
     */
    MCAPI void _tickSpawnStructureMobs(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &)> const &, class std::function<class gsl::span<struct LevelChunk::HardcodedSpawningArea const, -1> (class LevelChunk const &)> const &);
    /**
     * @hash   1499283637
     * @symbol  ?_updateBaseTypeCount\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void _updateBaseTypeCount(class BlockSource &, class ChunkPos const &);

//private:
    /**
     * @hash   -1656386699
     * @symbol  ?_handlePopulationCap\@Spawner\@\@AEAAHPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@H\@Z
     */
    MCAPI int _handlePopulationCap(class MobSpawnerData const *, class SpawnConditions const &, int);
    /**
     * @hash   -187561725
     * @symbol  ?_permuteId\@Spawner\@\@AEBAXAEAUActorDefinitionIdentifier\@\@AEBVMobSpawnRules\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _permuteId(struct ActorDefinitionIdentifier &, class MobSpawnRules const &, class Random &) const;
    /**
     * @hash   1794385898
     * @symbol  ?_sendHerdEvents\@Spawner\@\@AEBAXAEBUMobSpawnHerdInfo\@\@AEAV?$vector\@PEAVMob\@\@V?$allocator\@PEAVMob\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const &, std::vector<class Mob *> &) const;
    /**
     * @hash   -222675759
     * @symbol  ?_spawnMobCluster\@Spawner\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z
     */
    MCAPI void _spawnMobCluster(class BlockSource &, class BlockPos const &, class SpawnConditions &);
    /**
     * @hash   285283564
     * @symbol  ?_spawnMobInCluster\@Spawner\@\@AEAAXAEAVBlockSource\@\@UActorDefinitionIdentifier\@\@AEBVBlockPos\@\@AEBVSpawnConditions\@\@AEAV?$vector\@PEAVMob\@\@V?$allocator\@PEAVMob\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _spawnMobInCluster(class BlockSource &, struct ActorDefinitionIdentifier, class BlockPos const &, class SpawnConditions const &, std::vector<class Mob *> &);
    /**
     * @hash   870330735
     * @symbol  ?_updateMobCounts\@Spawner\@\@AEAAXAEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@AEBVSpawnConditions\@\@\@Z
     */
    MCAPI void _updateMobCounts(class BlockSource &, struct ActorDefinitionIdentifier const &, class SpawnConditions const &);
    /**
     * @hash   24060779
     * @symbol  ?_isInsideAncientCity\@Spawner\@\@CA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isInsideAncientCity(class BlockSource const &, class BlockPos);

protected:

private:
    /**
     * @hash   1681648879
     * @symbol  ?SPAWN_RING_OFFSETS\@Spawner\@\@0V?$unordered_set\@VChunkPos\@\@U?$hash\@VChunkPos\@\@\@std\@\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@VChunkPos\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::unordered_set<class ChunkPos, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<class ChunkPos>> const SPAWN_RING_OFFSETS;

};