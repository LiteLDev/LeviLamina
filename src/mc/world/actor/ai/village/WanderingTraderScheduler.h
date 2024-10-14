#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WanderingTraderScheduler {
public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // NOLINTBEGIN
    MCAPI explicit WanderingTraderScheduler(class Level& level);

    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const& actor);

    MCAPI void readSaveData();

    MCAPI void tick();

    MCAPI void writeSaveData() const;

    MCAPI ~WanderingTraderScheduler();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSpawnAtPosition(class BlockPos const& pos, class BlockSource& region) const;

    MCAPI bool _canWanderingTraderBeMoved() const;

    MCAPI bool _doesWanderingTraderExist() const;

    MCAPI std::optional<class BlockPos>
          _findValidSpawnPosUnder(class BlockPos const& pos, class BlockSource& region) const;

    MCAPI class BlockPos _getRandomHeightmapPosAroundOrigin(
        class BlockSource const& region,
        class BlockPos const&    origin,
        int                      distFromOrigin,
        bool                     exactDist
    );

    MCAPI class Actor* _getRandomPlayerInOverworld() const;

    MCAPI std::optional<class BlockPos>
          _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const& playerPos, class BlockSource& region);

    MCAPI void _spawnWanderingTraderAtPos(class BlockPos const& pos, class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static float const& CHANCE_TO_SPAWN_IN_WILDERNESS();

    MCAPI static std::vector<float> const& CHANCE_TO_SPAWN_PER_DAY();

    MCAPI static int const& DISTANCE_IN_BLOCKS_FROM_MEETING_AREA();

    MCAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER();

    MCAPI static int const& DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE();

    MCAPI static int const& LENGTH_OF_DAY_IN_TICKS();

    // NOLINTEND
};
