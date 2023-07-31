#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/LevelChunk.h"

class Spawner {

public:
    // prevent constructor by default
    Spawner& operator=(Spawner const&) = delete;
    Spawner(Spawner const&)            = delete;
    Spawner()                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?findNextSpawnBlockUnder\@Spawner\@\@SA_NAEBVBlockSource\@\@AEAVBlockPos\@\@W4MaterialType\@\@W4SpawnBlockRequirements\@\@\@Z
     */
    MCAPI static bool findNextSpawnBlockUnder(
        class BlockSource const&,
        class BlockPos&,
        enum class MaterialType,
        enum class SpawnBlockRequirements
    );
    /**
     * @symbol ?getSpawnRules\@Spawner\@\@QEBAPEBVActorSpawnRuleGroup\@\@XZ
     */
    MCAPI class ActorSpawnRuleGroup const* getSpawnRules() const;
    /**
     * @symbol ?getSpawnSettings\@Spawner\@\@QEBAAEBUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings const& getSpawnSettings() const;
    /**
     * @symbol ?initializeServerSide\@Spawner\@\@QEAAXAEAVResourcePackManager\@\@AEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI void initializeServerSide(class ResourcePackManager&, class IWorldRegistriesProvider&);
    /**
     * @symbol ?isSpawnPositionOk\@Spawner\@\@SA_NAEBVMobSpawnRules\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static bool isSpawnPositionOk(class MobSpawnRules const&, class BlockSource&, class BlockPos const&, bool);
    /**
     * @symbol ?postProcessSpawnMobs\@Spawner\@\@QEAAXAEAVBlockSource\@\@HHAEAVRandom\@\@\@Z
     */
    MCAPI void postProcessSpawnMobs(class BlockSource&, int, int, class Random&);
    /**
     * @symbol ?setSpawnSettings\@Spawner\@\@QEAAXAEBUSpawnSettings\@\@\@Z
     */
    MCAPI void setSpawnSettings(struct SpawnSettings const&);
    /**
     * @symbol
     * ?spawnItem\@Spawner\@\@QEAAPEAVItemActor\@\@AEAVBlockSource\@\@AEBVItemStack\@\@PEAVActor\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI class ItemActor* spawnItem(class BlockSource&, class ItemStack const&, class Actor*, class Vec3 const&, int);
    /**
     * @symbol
     * ?spawnMob\@Spawner\@\@QEAAPEAVMob\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@PEAVActor\@\@AEBVVec3\@\@_N44\@Z
     */
    MCAPI class Mob* spawnMob(
        class BlockSource&,
        struct ActorDefinitionIdentifier const&,
        class Actor*,
        class Vec3 const&,
        bool,
        bool,
        bool
    );
    /**
     * @symbol
     * ?spawnMobGroup\@Spawner\@\@QEAA?AV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@AEAVBlockSource\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVVec3\@\@_N3$$QEAV?$function\@$$A6AXAEAVMob\@\@\@Z\@3\@\@Z
     */
    MCAPI std::unordered_set<struct ActorUniqueID>
    spawnMobGroup(class BlockSource&, std::string const&, class Vec3 const&, bool, bool, std::function<void(class Mob&)>&&);
    /**
     * @symbol
     * ?spawnProjectile\@Spawner\@\@QEAAPEAVActor\@\@AEAVBlockSource\@\@AEBUActorDefinitionIdentifier\@\@PEAV2\@AEBVVec3\@\@3\@Z
     */
    MCAPI class Actor*
    spawnProjectile(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?tick\@Spawner\@\@QEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@\@Z
     */
    MCAPI void tick(class BlockSource&, class LevelChunk const&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_postProcessSpawnMobs\@Spawner\@\@IEAAXAEAVBlockSource\@\@HHAEAVRandomize\@\@_NAEBV?$function\@$$A6AXAEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@VBlockPos\@\@\@Z\@5\@\@Z
     */
    MCAPI void
    _postProcessSpawnMobs(class BlockSource&, int, int, class Randomize&, bool, std::function<void(class BlockPos const&, class SpawnConditions&)> const&, std::function<bool(class BlockSource const&, class BlockPos)> const&);
    /**
     * @symbol
     * ?_spawnStructureMob\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBUHardcodedSpawningArea\@LevelChunk\@\@AEBVSpawnConditions\@\@\@Z
     */
    MCAPI void
    _spawnStructureMob(class BlockSource&, class BlockPos const&, struct LevelChunk::HardcodedSpawningArea const&, class SpawnConditions const&);
    /**
     * @symbol
     * ?_tickSpawnMobClusters\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@VBlockPos\@\@AEBV?$function\@$$A6AXAEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A_NAEBVBlockSource\@\@VBlockPos\@\@\@Z\@6\@\@Z
     */
    MCAPI void
    _tickSpawnMobClusters(class BlockSource&, class LevelChunk const&, class BlockPos, std::function<void(class BlockPos const&, class SpawnConditions&)> const&, std::function<bool(class BlockSource const&, class BlockPos)> const&);
    /**
     * @symbol
     * ?_tickSpawnStructureMobs\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVLevelChunk\@\@VBlockPos\@\@AEBV?$function\@$$A6AXAEBVBlockPos\@\@AEBUHardcodedSpawningArea\@LevelChunk\@\@AEBVSpawnConditions\@\@\@Z\@std\@\@AEBV?$function\@$$A6A?AV?$span\@$$CBUHardcodedSpawningArea\@LevelChunk\@\@$0?0\@gsl\@\@AEBVLevelChunk\@\@\@Z\@6\@\@Z
     */
    MCAPI void _tickSpawnStructureMobs(class BlockSource&, class LevelChunk const&, class BlockPos, std::function<void(class BlockPos const&, struct LevelChunk::HardcodedSpawningArea const&, class SpawnConditions const&)> const&, std::function<class gsl::span<struct LevelChunk::HardcodedSpawningArea const>(class LevelChunk const&)> const&);
    /**
     * @symbol ?_updateBaseTypeCount\@Spawner\@\@IEAAXAEAVBlockSource\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void _updateBaseTypeCount(class BlockSource&, class ChunkPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_handlePopulationCap\@Spawner\@\@AEAAHPEBVMobSpawnerData\@\@AEBVSpawnConditions\@\@H\@Z
     */
    MCAPI int _handlePopulationCap(class MobSpawnerData const*, class SpawnConditions const&, int);
    /**
     * @symbol ?_isInsideAncientCity\@Spawner\@\@CA_NAEBVBlockSource\@\@VBlockPos\@\@\@Z
     */
    MCAPI static bool _isInsideAncientCity(class BlockSource const&, class BlockPos);
    /**
     * @symbol ?_permuteId\@Spawner\@\@AEBAXAEAUActorDefinitionIdentifier\@\@AEBVMobSpawnRules\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _permuteId(struct ActorDefinitionIdentifier&, class MobSpawnRules const&, class Random&) const;
    /**
     * @symbol
     * ?_sendHerdEvents\@Spawner\@\@AEBAXAEBUMobSpawnHerdInfo\@\@AEAV?$vector\@PEAVMob\@\@V?$allocator\@PEAVMob\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const&, std::vector<class Mob*>&) const;
    /**
     * @symbol ?_spawnMobCluster\@Spawner\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVSpawnConditions\@\@\@Z
     */
    MCAPI void _spawnMobCluster(class BlockSource&, class BlockPos const&, class SpawnConditions&);
    /**
     * @symbol
     * ?_spawnMobInCluster\@Spawner\@\@AEAAXAEAVBlockSource\@\@UActorDefinitionIdentifier\@\@AEBVBlockPos\@\@AEBVSpawnConditions\@\@AEAV?$vector\@PEAVMob\@\@V?$allocator\@PEAVMob\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    _spawnMobInCluster(class BlockSource&, struct ActorDefinitionIdentifier, class BlockPos const&, class SpawnConditions const&, std::vector<class Mob*>&);
    /**
     * @symbol ?_updateMobCounts\@Spawner\@\@AEAAXAEBUActorDefinitionIdentifier\@\@AEBVSpawnConditions\@\@\@Z
     */
    MCAPI void _updateMobCounts(struct ActorDefinitionIdentifier const&, class SpawnConditions const&);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?SPAWN_RING_OFFSETS\@Spawner\@\@0V?$unordered_set\@VChunkPos\@\@U?$hash\@VChunkPos\@\@\@std\@\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@VChunkPos\@\@\@3\@\@std\@\@B
     */
    MCAPI static std::unordered_set<class ChunkPos> const SPAWN_RING_OFFSETS;
    // NOLINTEND
};
