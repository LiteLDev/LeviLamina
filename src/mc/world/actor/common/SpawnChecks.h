#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnChecks {
public:
    // prevent constructor by default
    SpawnChecks& operator=(SpawnChecks const&);
    SpawnChecks(SpawnChecks const&);
    SpawnChecks();

public:
    // NOLINTBEGIN
    // symbol: ?canHatchEgg@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canHatchEgg(class ILevel const& level);

    // symbol: ?canRespawnEnderDragon@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canRespawnEnderDragon(class ILevel const& level);

    // symbol: ?canReviveBees@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canReviveBees(class ILevel const& level);

    // symbol: ?canSpawnBees@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnBees(class ILevel const& level);

    // symbol: ?canSpawnEnderDragon@SpawnChecks@@SA_NAEBVServerLevel@@@Z
    MCAPI static bool canSpawnEnderDragon(class ServerLevel const& level);

    // symbol: ?canSpawnFromMobSpawnerBlock@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const& level);

    // symbol: ?canSpawnNaturally@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnNaturally(class ILevel const& level);

    // symbol: ?canSpawnPigZombieFromPortal@SpawnChecks@@SA_NAEBVDimension@@AEBVRandomize@@@Z
    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const& dimension, class Randomize const& randomize);

    // symbol: ?canSpawnSkeletonTrap@SpawnChecks@@SA_NAEBVILevel@@AEBVRandomize@@@Z
    MCAPI static bool canSpawnSkeletonTrap(class ILevel const& level, class Randomize const& randomize);

    // symbol: ?canSpawnTadpoles@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnTadpoles(class ILevel const& level);

    // symbol: ?canSpawnVillageDwellers@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnVillageDwellers(class ILevel const& level);

    // symbol: ?canSpawnWanderingTrader@SpawnChecks@@SA_NAEBVServerLevel@@@Z
    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const& level);

    // symbol: ?canSpawnWarden@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnWarden(class ILevel const& level);

    // symbol: ?canSpawnWithWorldGeneration@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const& level);

    // symbol: ?canTriggerRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool canTriggerRaid(class ILevel const& level);

    // symbol: ?shouldAbortRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool shouldAbortRaid(class ILevel const& level);

    // symbol: ?shouldPauseRaid@SpawnChecks@@SA_NAEBVILevel@@@Z
    MCAPI static bool shouldPauseRaid(class ILevel const& level);

    // NOLINTEND
};
