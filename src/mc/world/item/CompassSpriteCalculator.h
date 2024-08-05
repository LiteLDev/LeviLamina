#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompassSpriteCalculator {
public:
    // prevent constructor by default
    CompassSpriteCalculator& operator=(CompassSpriteCalculator const&);
    CompassSpriteCalculator(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

public:
    // NOLINTBEGIN
    MCAPI CompassSpriteCalculator(
        std::function<class BlockPos(class BlockSource const*, class Actor*)>,
        std::function<bool(class BlockSource const*, class Actor*)>,
        float rot,
        float
    );

    MCAPI int getFrame() const;

    MCAPI int update(class Actor& actor, bool instant);

    MCAPI int updateFromPosition(
        class BlockSource const* region,
        class Actor*             actor,
        float                    x,
        float                    z,
        float                    yRot,
        bool                     isZFlipped,
        bool                     instant
    );

    MCAPI ~CompassSpriteCalculator();

    MCAPI static std::function<bool(class BlockSource const*, class Actor*)> isInLastDeathDimension();

    MCAPI static std::function<bool(class BlockSource const*, class Actor*)> isInOverworldDimension();

    MCAPI static std::function<class BlockPos(class BlockSource const*, class Actor*)> pointTowardsLastDeathLocation();

    MCAPI static std::function<class BlockPos(class BlockSource const*, class Actor*)> pointTowardsSpawnPoint();

    // NOLINTEND
};
