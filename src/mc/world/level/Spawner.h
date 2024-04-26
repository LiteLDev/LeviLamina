#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"
#include "mc/world/level/block/utils/SpawnBlockRequirements.h"
#include "mc/world/level/chunk/LevelChunk.h"

class Spawner {
public:
    // prevent constructor by default
    Spawner& operator=(Spawner const&);
    Spawner(Spawner const&);
    Spawner();

public:
    // NOLINTBEGIN
    // symbol: ?getSpawnRules@Spawner@@QEBAPEBVActorSpawnRuleGroup@@XZ
    MCAPI class ActorSpawnRuleGroup const* getSpawnRules() const;

    // symbol: ?getSpawnSettings@Spawner@@QEBAAEBUSpawnSettings@@XZ
    MCAPI struct SpawnSettings const& getSpawnSettings() const;

    // symbol: ?incrementSpawnableTickedMob@Spawner@@QEAAXXZ
    MCAPI void incrementSpawnableTickedMob();

    // symbol: ?initializeServerSide@Spawner@@QEAAXAEAVResourcePackManager@@AEAVIWorldRegistriesProvider@@@Z
    MCAPI void initializeServerSide(class ResourcePackManager& rpm, class IWorldRegistriesProvider& registries);

    // symbol: ?postProcessSpawnMobs@Spawner@@QEAAXAEAVBlockSource@@HHAEAVRandom@@@Z
    MCAPI void postProcessSpawnMobs(class BlockSource& region, int xo, int zo, class Random& random);

    // symbol: ?setSpawnSettings@Spawner@@QEAAXAEBUSpawnSettings@@@Z
    MCAPI void setSpawnSettings(struct SpawnSettings const& spawnSettings);

    // symbol: ?spawnItem@Spawner@@QEAAPEAVItemActor@@AEAVBlockSource@@AEBVItemStack@@PEAVActor@@AEBVVec3@@H@Z
    MCAPI class ItemActor* spawnItem(
        class BlockSource&     region,
        class ItemStack const& item,
        class Actor*           spawner,
        class Vec3 const&      pos,
        int                    throwTime = 0
    );

    // symbol:
    // ?spawnMob@Spawner@@QEAAPEAVMob@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAVActor@@AEBVVec3@@_N44@Z
    MCAPI class Mob* spawnMob(
        class BlockSource&                      region,
        struct ActorDefinitionIdentifier const& id,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        bool                                    naturalSpawn = false,
        bool                                    surface      = true,
        bool                                    fromSpawner  = false
    );

    // symbol:
    // ?spawnMobGroup@Spawner@@QEAA?AV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@AEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVVec3@@_N3$$QEAV?$function@$$A6AXAEAVMob@@@Z@3@@Z
    MCAPI std::unordered_set<struct ActorUniqueID> spawnMobGroup(
        class BlockSource&                region,
        std::string const&                spawnGroupId,
        class Vec3 const&                 pos,
        bool                              doScatter,
        bool                              validateDistToPlayer,
        std::function<void(class Mob&)>&& spawnedCallback
    );

    // symbol:
    // ?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z
    MCAPI class Actor* spawnProjectile(
        class BlockSource&                      region,
        struct ActorDefinitionIdentifier const& id,
        class Actor*                            spawner,
        class Vec3 const&                       position,
        class Vec3 const&                       direction
    );

    // symbol: ?tick@Spawner@@QEAAXAEAVBlockSource@@AEBVLevelChunk@@@Z
    MCAPI void tick(class BlockSource& region, class LevelChunk const& chunk);

    // symbol:
    // ?findNextSpawnBlockUnder@Spawner@@SA_NAEBVBlockSource@@AEAVBlockPos@@W4MaterialType@@W4SpawnBlockRequirements@@@Z
    MCAPI static bool findNextSpawnBlockUnder(
        class BlockSource const& region,
        class BlockPos&          pos,
        ::MaterialType           canSpawnIn,
        ::SpawnBlockRequirements spawnBlockRequirements
    );

    // symbol: ?isSpawnPositionOk@Spawner@@SA_NAEBVMobSpawnRules@@AEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI static bool isSpawnPositionOk(
        class MobSpawnRules const& rules,
        class BlockSource&         region,
        class BlockPos const&      pos,
        bool                       validateDistToPlayer
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_postProcessSpawnMobs@Spawner@@IEAAXAEAVBlockSource@@HHAEAVRandomize@@_NAEBV?$function@$$A6AXAEBVBlockPos@@AEAVSpawnConditions@@@Z@std@@AEBV?$function@$$A6A_NAEBVBlockSource@@VBlockPos@@@Z@5@@Z
    MCAPI void
    _postProcessSpawnMobs(class BlockSource& region, int xo, int zo, class Randomize& randomize, bool, std::function<void(class BlockPos const&, class SpawnConditions&)> const& spawnMobClusterCallback, std::function<bool(class BlockSource const&, class BlockPos)> const&);

    // symbol:
    // ?_spawnStructureMob@Spawner@@IEAAXAEAVBlockSource@@AEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z
    MCAPI void _spawnStructureMob(
        class BlockSource&                              region,
        class BlockPos const&                           pos,
        struct LevelChunk::HardcodedSpawningArea const& spawnArea,
        class SpawnConditions const&                    structureConditions
    );

    // symbol:
    // ?_tickSpawnMobClusters@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEAVSpawnConditions@@@Z@std@@AEBV?$function@$$A6A_NAEBVBlockSource@@VBlockPos@@@Z@6@@Z
    MCAPI void
    _tickSpawnMobClusters(class BlockSource& region, class LevelChunk const& chunk, class BlockPos pos, std::function<void(class BlockPos const&, class SpawnConditions&)> const& spawnMobClusterCallback, std::function<bool(class BlockSource const&, class BlockPos)> const&);

    // symbol:
    // ?_tickSpawnStructureMobs@Spawner@@IEAAXAEAVBlockSource@@AEBVLevelChunk@@VBlockPos@@AEBV?$function@$$A6AXAEBVBlockPos@@AEBUHardcodedSpawningArea@LevelChunk@@AEBVSpawnConditions@@@Z@std@@AEBV?$function@$$A6A?AV?$span@$$CBUHardcodedSpawningArea@LevelChunk@@$0?0@gsl@@AEBVLevelChunk@@@Z@6@@Z
    MCAPI void _tickSpawnStructureMobs(
        class BlockSource&      region,
        class LevelChunk const& chunk,
        class BlockPos          pos,
        std::function<
            void(class BlockPos const&, struct LevelChunk::HardcodedSpawningArea const&, class SpawnConditions const&)> const&
            spawnStructureMobCallback,
        std::function<gsl::span<struct LevelChunk::HardcodedSpawningArea const>(class LevelChunk const&)> const&
            getSpawningAreasCallback
    );

    // symbol: ?_updateBaseTypeCount@Spawner@@IEAAXAEAVBlockSource@@AEBVChunkPos@@@Z
    MCAPI void _updateBaseTypeCount(class BlockSource& region, class ChunkPos const& center);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_handlePopulationCap@Spawner@@AEAAHPEBVMobSpawnerData@@AEBVSpawnConditions@@H@Z
    MCAPI int _handlePopulationCap(
        class MobSpawnerData const*  mobType,
        class SpawnConditions const& conditions,
        int                          inSpawnCount
    );

    // symbol: ?_permuteId@Spawner@@AEBAXAEAUActorDefinitionIdentifier@@AEBVMobSpawnRules@@AEAVRandom@@@Z
    MCAPI void
    _permuteId(struct ActorDefinitionIdentifier& actualId, class MobSpawnRules const& spawnRules, class Random& random)
        const;

    // symbol:
    // ?_sendHerdEvents@Spawner@@AEBAXAEBUMobSpawnHerdInfo@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const& herdInfo, std::vector<class Mob*>& spawnGroup) const;

    // symbol: ?_spawnMobCluster@Spawner@@AEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVSpawnConditions@@@Z
    MCAPI void
    _spawnMobCluster(class BlockSource& region, class BlockPos const& pos, class SpawnConditions& conditions);

    // symbol:
    // ?_spawnMobInCluster@Spawner@@AEAAXAEAVBlockSource@@UActorDefinitionIdentifier@@AEBVBlockPos@@AEBVSpawnConditions@@AEAV?$vector@PEAVMob@@V?$allocator@PEAVMob@@@std@@@std@@@Z
    MCAPI void _spawnMobInCluster(
        class BlockSource&               region,
        struct ActorDefinitionIdentifier id,
        class BlockPos const&            pos,
        class SpawnConditions const&     conditions,
        std::vector<class Mob*>&         spawnGroup
    );

    // symbol: ?_updateMobCounts@Spawner@@AEAAXAEBUActorDefinitionIdentifier@@AEBVSpawnConditions@@@Z
    MCAPI void
    _updateMobCounts(struct ActorDefinitionIdentifier const& actualId, class SpawnConditions const& conditions);

    // symbol: ?_isInsideAncientCity@Spawner@@CA_NAEBVBlockSource@@VBlockPos@@@Z
    MCAPI static bool _isInsideAncientCity(class BlockSource const& region, class BlockPos pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?SPAWN_RING_OFFSETS@Spawner@@0V?$unordered_set@VChunkPos@@U?$hash@VChunkPos@@@std@@U?$equal_to@VChunkPos@@@3@V?$allocator@VChunkPos@@@3@@std@@B
    MCAPI static std::unordered_set<class ChunkPos> const SPAWN_RING_OFFSETS;

    // NOLINTEND
};
