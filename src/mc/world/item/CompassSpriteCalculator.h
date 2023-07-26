#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompassSpriteCalculator {

public:
    // prevent constructor by default
    CompassSpriteCalculator& operator=(CompassSpriteCalculator const&) = delete;
    CompassSpriteCalculator(CompassSpriteCalculator const&)            = delete;
    CompassSpriteCalculator()                                          = delete;

public:
    /**
     * @symbol
     * ??0CompassSpriteCalculator\@\@QEAA\@V?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@V?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@2\@MM\@Z
     */
    MCAPI CompassSpriteCalculator(
        class std::function<class BlockPos(class BlockSource const*, class Actor*)>,
        class std::function<bool(class BlockSource const*, class Actor*)>,
        float,
        float
    ); // NOLINT
    /**
     * @symbol ?getFrame\@CompassSpriteCalculator\@\@QEBAHXZ
     */
    MCAPI int getFrame() const; // NOLINT
    /**
     * @symbol ?update\@CompassSpriteCalculator\@\@QEAAHAEAVActor\@\@_N\@Z
     */
    MCAPI int update(class Actor&, bool); // NOLINT
    /**
     * @symbol ?updateFromPosition\@CompassSpriteCalculator\@\@QEAAHPEBVBlockSource\@\@PEAVActor\@\@MMM_N2\@Z
     */
    MCAPI int updateFromPosition(class BlockSource const*, class Actor*, float, float, float, bool, bool); // NOLINT
    /**
     * @symbol ??1CompassSpriteCalculator\@\@QEAA\@XZ
     */
    MCAPI ~CompassSpriteCalculator(); // NOLINT
    /**
     * @symbol
     * ?isInLastDeathDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool(class BlockSource const*, class Actor*)> isInLastDeathDimension(); // NOLINT
    /**
     * @symbol
     * ?isInOverworldDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool(class BlockSource const*, class Actor*)> isInOverworldDimension(); // NOLINT
    /**
     * @symbol
     * ?pointTowardsLastDeathLocation\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos(class BlockSource const*, class Actor*)>
    pointTowardsLastDeathLocation(); // NOLINT
    /**
     * @symbol
     * ?pointTowardsSpawnPoint\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos(class BlockSource const*, class Actor*)>
    pointTowardsSpawnPoint(); // NOLINT
};
