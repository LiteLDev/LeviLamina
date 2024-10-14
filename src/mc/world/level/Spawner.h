#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SpawnBlockRequirements.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/material/MaterialType.h"

class Spawner {
public:
    // prevent constructor by default
    Spawner& operator=(Spawner const&);
    Spawner(Spawner const&);
    Spawner();

public:
    // NOLINTBEGIN
    MCAPI explicit Spawner(class Level& level);

    MCAPI class ActorSpawnRuleGroup const* getSpawnRules() const;

    MCAPI class ActorSpawnRuleGroup* getSpawnRulesMutable() const;

    MCAPI struct SpawnSettings const& getSpawnSettings() const;

    MCAPI void incrementSpawnableTickedMob();

    MCAPI void initializeServerSide(class ResourcePackManager& rpm, class IWorldRegistriesProvider& registries);

    MCAPI void postProcessSpawnMobs(class BlockSource& region, int xo, int zo, class Random& random);

    MCAPI void setSpawnSettings(struct SpawnSettings const& spawnSettings);

    MCAPI class ItemActor* spawnItem(
        class BlockSource&     region,
        class ItemStack const& item,
        class Actor*           spawner,
        class Vec3 const&      pos,
        int                    throwTime = 0
    );

    MCAPI class Mob* spawnMob(
        class BlockSource&                      region,
        struct ActorDefinitionIdentifier const& id,
        class Actor*                            spawner,
        class Vec3 const&                       pos,
        bool                                    naturalSpawn = false,
        bool                                    surface      = true,
        bool                                    fromSpawner  = false
    );

    MCAPI std::unordered_set<struct ActorUniqueID> spawnMobGroup(
        class BlockSource&                region,
        std::string const&                spawnGroupId,
        class Vec3 const&                 pos,
        bool                              doScatter,
        bool                              validateDistToPlayer,
        std::function<void(class Mob&)>&& spawnedCallback
    );

    MCAPI class Actor* spawnProjectile(
        class BlockSource&                      region,
        struct ActorDefinitionIdentifier const& id,
        class Actor*                            spawner,
        class Vec3 const&                       position,
        class Vec3 const&                       direction
    );

    MCAPI void tick(class BlockSource& region, class LevelChunk const& chunk);

    MCAPI void tickMobCount();

    MCAPI ~Spawner();

    MCAPI static bool findNextSpawnBlockUnder(
        class BlockSource const& region,
        class BlockPos&          pos,
        ::MaterialType           canSpawnIn,
        ::SpawnBlockRequirements spawnBlockRequirements
    );

    MCAPI static bool isSpawnPositionOk(
        class MobSpawnRules const& rules,
        class BlockSource&         region,
        class BlockPos const&      pos,
        bool                       validateDistToPlayer
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _postProcessSpawnMobs(
        class BlockSource&                                                        region,
        int                                                                       xo,
        int                                                                       zo,
        class Randomize&                                                          randomize,
        bool                                                                      doMobSpawning,
        std::function<void(class BlockPos const&, class SpawnConditions&)> const& spawnMobClusterCallback,
        std::function<bool(class BlockSource const&, class BlockPos)> const&      hardcodedAllowStructureMobSpawns
    );

    MCAPI void _spawnMobInCluster(
        class BlockSource&                      region,
        struct ActorDefinitionIdentifier const& id,
        class BlockPos const&                   pos,
        class SpawnConditions const&            conditions,
        std::vector<class Mob*>&                spawnGroup
    );

    MCAPI void _spawnStructureMob(
        class BlockSource&                              region,
        class BlockPos const&                           pos,
        struct LevelChunk::HardcodedSpawningArea const& spawnArea,
        class SpawnConditions const&                    structureConditions
    );

    MCAPI void _tickSpawnMobClusters(
        class BlockSource&                                                        region,
        class LevelChunk const&                                                   chunk,
        class BlockPos                                                            pos,
        std::function<void(class BlockPos const&, class SpawnConditions&)> const& spawnMobClusterCallback,
        std::function<bool(class BlockSource const&, class BlockPos)> const&      hardcodedAllowStructureMobSpawns
    );

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

    MCAPI void _updateBaseTypeCount(class BlockSource& region, class ChunkPos const& center);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _handlePopulationCap(
        class MobSpawnerData const*  mobType,
        class SpawnConditions const& conditions,
        int                          inSpawnCount
    );

    MCAPI void
    _permuteId(struct ActorDefinitionIdentifier& actualId, class MobSpawnRules const& spawnRules, class Random& random)
        const;

    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const& herdInfo, std::vector<class Mob*>& spawnGroup) const;

    MCAPI void
    _spawnMobCluster(class BlockSource& region, class BlockPos const& pos, class SpawnConditions& conditions);

    MCAPI void
    _updateMobCounts(struct ActorDefinitionIdentifier const& actualId, class SpawnConditions const& conditions);

    MCAPI static bool _hardcodedAllowStructureMobSpawns(class BlockSource const& region, class BlockPos pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static std::unordered_set<class ChunkPos> const& SPAWN_RING_OFFSETS();

    // NOLINTEND
};
