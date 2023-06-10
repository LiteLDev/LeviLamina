/**
 * @file  SpawnChecks.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnChecks.
 *
 */
class SpawnChecks {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNCHECKS
public:
    class SpawnChecks& operator=(class SpawnChecks const &) = delete;
    SpawnChecks(class SpawnChecks const &) = delete;
    SpawnChecks() = delete;
#endif

public:
    /**
     * @symbol ?canHatchEgg\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canHatchEgg(class ILevel const &);
    /**
     * @symbol ?canRespawnEnderDragon\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canRespawnEnderDragon(class ILevel const &);
    /**
     * @symbol ?canReviveBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canReviveBees(class ILevel const &);
    /**
     * @symbol ?canSpawnBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnBees(class ILevel const &);
    /**
     * @symbol ?canSpawnEnderDragon\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnEnderDragon(class ServerLevel const &);
    /**
     * @symbol ?canSpawnFromMobSpawnerBlock\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const &);
    /**
     * @symbol ?canSpawnNaturally\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnNaturally(class ILevel const &);
    /**
     * @symbol ?canSpawnPigZombieFromPortal\@SpawnChecks\@\@SA_NAEBVDimension\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const &, class Randomize const &);
    /**
     * @symbol ?canSpawnSkeletonTrap\@SpawnChecks\@\@SA_NAEBVILevel\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnSkeletonTrap(class ILevel const &, class Randomize const &);
    /**
     * @symbol ?canSpawnTadpoles\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnTadpoles(class ILevel const &);
    /**
     * @symbol ?canSpawnVillageDwellers\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnVillageDwellers(class ILevel const &);
    /**
     * @symbol ?canSpawnWanderingTrader\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const &);
    /**
     * @symbol ?canSpawnWarden\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWarden(class ILevel const &);
    /**
     * @symbol ?canSpawnWithWorldGeneration\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const &);
    /**
     * @symbol ?canTriggerRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canTriggerRaid(class ILevel const &);
    /**
     * @symbol ?shouldAbortRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldAbortRaid(class ILevel const &);
    /**
     * @symbol ?shouldPauseRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldPauseRaid(class ILevel const &);

};
