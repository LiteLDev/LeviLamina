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
     * @hash   1021001945
     * @symbol  ?canHatchTurtle\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canHatchTurtle(class ILevel const &);
    /**
     * @hash   -105270967
     * @symbol  ?canRespawnEnderDragon\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canRespawnEnderDragon(class ILevel const &);
    /**
     * @hash   2025270691
     * @symbol  ?canReviveBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canReviveBees(class ILevel const &);
    /**
     * @hash   1437638905
     * @symbol  ?canSpawnBees\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnBees(class ILevel const &);
    /**
     * @hash   1271243995
     * @symbol  ?canSpawnEnderDragon\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnEnderDragon(class ServerLevel const &);
    /**
     * @hash   1539391471
     * @symbol  ?canSpawnFromMobSpawnerBlock\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const &);
    /**
     * @hash   -366547719
     * @symbol  ?canSpawnNaturally\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnNaturally(class ILevel const &);
    /**
     * @hash   -1635954226
     * @symbol  ?canSpawnPigZombieFromPortal\@SpawnChecks\@\@SA_NAEBVDimension\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const &, class Randomize const &);
    /**
     * @hash   -746774168
     * @symbol  ?canSpawnSkeletonTrap\@SpawnChecks\@\@SA_NAEBVILevel\@\@AEBVRandomize\@\@\@Z
     */
    MCAPI static bool canSpawnSkeletonTrap(class ILevel const &, class Randomize const &);
    /**
     * @hash   1782978515
     * @symbol  ?canSpawnTadpoles\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnTadpoles(class ILevel const &);
    /**
     * @hash   -1161747419
     * @symbol  ?canSpawnVillageDwellers\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnVillageDwellers(class ILevel const &);
    /**
     * @hash   -267379109
     * @symbol  ?canSpawnWanderingTrader\@SpawnChecks\@\@SA_NAEBVServerLevel\@\@\@Z
     */
    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const &);
    /**
     * @hash   2130282785
     * @symbol  ?canSpawnWarden\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWarden(class ILevel const &);
    /**
     * @hash   -1056772403
     * @symbol  ?canSpawnWithWorldGeneration\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const &);
    /**
     * @hash   -593901859
     * @symbol  ?canTriggerRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool canTriggerRaid(class ILevel const &);
    /**
     * @hash   -1307384463
     * @symbol  ?shouldAbortRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldAbortRaid(class ILevel const &);
    /**
     * @hash   424254277
     * @symbol  ?shouldPauseRaid\@SpawnChecks\@\@SA_NAEBVILevel\@\@\@Z
     */
    MCAPI static bool shouldPauseRaid(class ILevel const &);

};