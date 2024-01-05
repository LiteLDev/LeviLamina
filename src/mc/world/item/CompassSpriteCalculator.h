#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompassSpriteCalculator {
public:
    // prevent constructor by default
    CompassSpriteCalculator& operator=(CompassSpriteCalculator const&);
    CompassSpriteCalculator();

public:
    // NOLINTBEGIN
    // symbol: ??0CompassSpriteCalculator@@QEAA@AEBV0@@Z
    MCAPI CompassSpriteCalculator(class CompassSpriteCalculator const&);

    // symbol:
    // ??0CompassSpriteCalculator@@QEAA@V?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@V?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@2@MM@Z
    MCAPI CompassSpriteCalculator(
        std::function<class BlockPos(class BlockSource const*, class Actor*)>,
        std::function<bool(class BlockSource const*, class Actor*)>,
        float rot,
        float
    );

    // symbol: ?getFrame@CompassSpriteCalculator@@QEBAHXZ
    MCAPI int getFrame() const;

    // symbol: ?update@CompassSpriteCalculator@@QEAAHAEAVActor@@_N@Z
    MCAPI int update(class Actor& actor, bool instant);

    // symbol: ?updateFromPosition@CompassSpriteCalculator@@QEAAHPEBVBlockSource@@PEAVActor@@MMM_N2@Z
    MCAPI int updateFromPosition(
        class BlockSource const* region,
        class Actor*             actor,
        float                    x,
        float                    z,
        float                    yRot,
        bool                     isZFlipped,
        bool                     instant
    );

    // symbol: ??1CompassSpriteCalculator@@QEAA@XZ
    MCAPI ~CompassSpriteCalculator();

    // symbol:
    // ?isInLastDeathDimension@CompassSpriteCalculator@@SA?AV?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@std@@XZ
    MCAPI static std::function<bool(class BlockSource const*, class Actor*)> isInLastDeathDimension();

    // symbol:
    // ?isInOverworldDimension@CompassSpriteCalculator@@SA?AV?$function@$$A6A_NPEBVBlockSource@@PEAVActor@@@Z@std@@XZ
    MCAPI static std::function<bool(class BlockSource const*, class Actor*)> isInOverworldDimension();

    // symbol:
    // ?pointTowardsLastDeathLocation@CompassSpriteCalculator@@SA?AV?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@XZ
    MCAPI static std::function<class BlockPos(class BlockSource const*, class Actor*)> pointTowardsLastDeathLocation();

    // symbol:
    // ?pointTowardsSpawnPoint@CompassSpriteCalculator@@SA?AV?$function@$$A6A?AVBlockPos@@PEBVBlockSource@@PEAVActor@@@Z@std@@XZ
    MCAPI static std::function<class BlockPos(class BlockSource const*, class Actor*)> pointTowardsSpawnPoint();

    // NOLINTEND
};
