#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Difficulty.h"

class Raid {
public:
    // prevent constructor by default
    Raid& operator=(Raid const&);
    Raid(Raid const&);
    Raid();

public:
    // NOLINTBEGIN
    MCAPI Raid(
        int                                        raidPreparationTime,
        int                                        groupCompleteDelayInTicks,
        int                                        locationHelpDelayInTicks,
        int                                        finishedDelayInTicks,
        ::Difficulty                               difficulty,
        uchar                                      allowedSpawnFailures,
        std::function<bool(uint64, class Vec3&)>&& pickSpawnPointCallback,
        std::function<bool(uint64, class Vec3, uchar, std::unordered_set<struct ActorUniqueID>&)>&& spawnGroupCallback,
        std::function<bool(struct ActorUniqueID const&)>&& doesActorExistCallback,
        std::function<bool()>&&                            isVillageDefeatedCallback
    );

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void addPlayerToHeroList(class Actor const& actor);

    MCAPI void addRaider(struct ActorUniqueID const& actor, float maxHealth);

    MCAPI void appendDebugInfo(std::string& infoString) const;

    MCAPI float getBossBarFilledFraction() const;

    MCAPI uint64 getRemainingRaiders() const;

    MCAPI bool isRaider(struct ActorUniqueID actor) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag);

    MCAPI void tick(struct Tick tick);

    MCAPI ~Raid();

    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _calcBossBarUsingHealth() const;

    MCAPI float _calcBossBarUsingMobs() const;

    MCAPI float _getTotalRaiderHealth() const;

    MCAPI void _tickGroupInPlay();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static uchar const NUM_GROUPS_ON_EASY;

    MCAPI static uchar const NUM_GROUPS_ON_HARD;

    MCAPI static uchar const NUM_GROUPS_ON_NORMAL;

    // NOLINTEND
};
