/**
 * @file  CompassSpriteCalculator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompassSpriteCalculator.
 *
 */
class CompassSpriteCalculator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSSPRITECALCULATOR
public:
    class CompassSpriteCalculator& operator=(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator() = delete;
#endif

public:
    /**
     * @hash   50361859
     * @symbol  ??0CompassSpriteCalculator\@\@QEAA\@V?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@V?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@2\@MM\@Z
     */
    MCAPI CompassSpriteCalculator(class std::function<class BlockPos (class BlockSource const *, class Actor *)>, class std::function<bool (class BlockSource const *, class Actor *)>, float, float);
    /**
     * @hash   -576888492
     * @symbol  ?getFrame\@CompassSpriteCalculator\@\@QEBAHXZ
     */
    MCAPI int getFrame() const;
    /**
     * @hash   -230124518
     * @symbol  ?update\@CompassSpriteCalculator\@\@QEAAHAEAVActor\@\@_N\@Z
     */
    MCAPI int update(class Actor &, bool);
    /**
     * @hash   -427045519
     * @symbol  ?updateFromPosition\@CompassSpriteCalculator\@\@QEAAHPEBVBlockSource\@\@AEBVBlockPos\@\@MMM_N22\@Z
     */
    MCAPI int updateFromPosition(class BlockSource const *, class BlockPos const &, float, float, float, bool, bool, bool);
    /**
     * @hash   1635112254
     * @symbol  ?updateFromPosition\@CompassSpriteCalculator\@\@QEAAHPEBVBlockSource\@\@PEAVActor\@\@MMM_N2\@Z
     */
    MCAPI int updateFromPosition(class BlockSource const *, class Actor *, float, float, float, bool, bool);
    /**
     * @hash   -411065963
     * @symbol  ??1CompassSpriteCalculator\@\@QEAA\@XZ
     */
    MCAPI ~CompassSpriteCalculator();
    /**
     * @hash   -1147551171
     * @symbol  ?isInLastDeathDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInLastDeathDimension();
    /**
     * @hash   1636187869
     * @symbol  ?isInOverworldDimension\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A_NPEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<bool (class BlockSource const *, class Actor *)> isInOverworldDimension();
    /**
     * @hash   262119498
     * @symbol  ?pointTowardsLastDeathLocation\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsLastDeathLocation();
    /**
     * @hash   -1098142324
     * @symbol  ?pointTowardsSpawnPoint\@CompassSpriteCalculator\@\@SA?AV?$function\@$$A6A?AVBlockPos\@\@PEBVBlockSource\@\@PEAVActor\@\@\@Z\@std\@\@XZ
     */
    MCAPI static class std::function<class BlockPos (class BlockSource const *, class Actor *)> pointTowardsSpawnPoint();

};