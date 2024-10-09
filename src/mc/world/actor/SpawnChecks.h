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
    MCAPI static bool canHatchEgg(class ILevel const& level);

    MCAPI static bool canRespawnEnderDragon(class ILevel const& level);

    MCAPI static bool canReviveBees(class ILevel const& level);

    MCAPI static bool canSpawnBees(class ILevel const& level);

    MCAPI static bool canSpawnEnderDragon(class ServerLevel const& level);

    MCAPI static bool canSpawnFromMobSpawnerBlock(class ILevel const& level);

    MCAPI static bool canSpawnNaturally(class ILevel const& level);

    MCAPI static bool canSpawnPigZombieFromPortal(class Dimension const& dimension, class Randomize const& randomize);

    MCAPI static bool canSpawnSkeletonTrap(class ILevel const& level, class Randomize const& randomize);

    MCAPI static bool canSpawnTadpoles(class ILevel const& level);

    MCAPI static bool canSpawnVillageDwellers(class ILevel const& level);

    MCAPI static bool canSpawnWanderingTrader(class ServerLevel const& level);

    MCAPI static bool canSpawnWarden(class ILevel const& level);

    MCAPI static bool canSpawnWithWorldGeneration(class ILevel const& level);

    MCAPI static bool canTriggerRaid(class ILevel const& level);

    MCAPI static bool shouldAbortRaid(class ILevel const& level);

    MCAPI static bool shouldPauseRaid(class ILevel const& level);

    // NOLINTEND
};
