#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnChecks {

public:
    // prevent constructor by default
    SpawnChecks& operator=(SpawnChecks const&) = delete;
    SpawnChecks(SpawnChecks const&)            = delete;
    SpawnChecks()                              = delete;

public:
    /**
     * @symbol ?canHatchEgg\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canHatchEgg(class ILevel const&); // NOLINT
    /**
     * @symbol ?canRespawnEnderDragon\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canRespawnEnderDragon(class ILevel const&); // NOLINT
    /**
     * @symbol ?canReviveBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canReviveBees(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnBees(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnEnderDragon\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnEnderDragon(class ServerLevel const&); // NOLINT
    /**
     * @symbol ?canSpawnFromMobSpawnerBlock\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnNaturally\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnNaturally(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnPigZombieFromPortal\@SpawnChecks\@\@SA_NAEBVDimension\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const&, class Randomize const&); // NOLINT
    /**
     * @symbol ?canSpawnSkeletonTrap\@SpawnChecks\@\@SA_NAEBVILevel\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnSkeletonTrap(class ILevel const&, class Randomize const&); // NOLINT
    /**
     * @symbol ?canSpawnTadpoles\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnTadpoles(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnVillageDwellers\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnVillageDwellers(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnWanderingTrader\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const&); // NOLINT
    /**
     * @symbol ?canSpawnWarden\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWarden(class ILevel const&); // NOLINT
    /**
     * @symbol ?canSpawnWithWorldGeneration\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const&); // NOLINT
    /**
     * @symbol ?canTriggerRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canTriggerRaid(class ILevel const&); // NOLINT
    /**
     * @symbol ?shouldAbortRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldAbortRaid(class ILevel const&); // NOLINT
    /**
     * @symbol ?shouldPauseRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldPauseRaid(class ILevel const&); // NOLINT
};
