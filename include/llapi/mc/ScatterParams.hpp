/**
 * @file  ScatterParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScatterParams.
 *
 */
class ScatterParams {

#define AFTER_EXTRA
// Add Member There
public:
class ScatteredPositions {
public:
    ScatteredPositions() = delete;
    ScatteredPositions(ScatteredPositions const&) = delete;
    ScatteredPositions(ScatteredPositions const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERPARAMS
public:
    class ScatterParams& operator=(class ScatterParams const &) = delete;
    ScatterParams(class ScatterParams const &) = delete;
    ScatterParams() = delete;
#endif

public:
    /**
     * @symbol  ?addAdditionalSaveData\@ScatterParams\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol  ?readAdditionalSaveData\@ScatterParams\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @symbol  ?scatter\@ScatterParams\@\@QEBA?AVScatteredPositions\@1\@AEAVRenderParams\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class ScatterParams::ScatteredPositions scatter(class RenderParams &, class BlockPos const &, class Random &) const;
    /**
     * @symbol  ??1ScatterParams\@\@QEAA\@XZ
     */
    MCAPI ~ScatterParams();
    /**
     * @symbol  ?initMolangParams\@ScatterParams\@\@SAXAEAVRenderParams\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static void initMolangParams(class RenderParams &, class BlockPos const &, class Random &);
    /**
     * @symbol  ?initScatterParamIndices\@ScatterParams\@\@SAXXZ
     */
    MCAPI static void initScatterParamIndices();

//private:
    /**
     * @symbol  ?_getPos\@ScatterParams\@\@AEBA?AVBlockPos\@\@IAEBV2\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI class BlockPos _getPos(unsigned int, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @symbol  ?_parseExpressionNodeFloat\@ScatterParams\@\@AEAAXAEBVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEAVExpressionNode\@\@M\@Z
     */
    MCAPI void _parseExpressionNodeFloat(class CompoundTag const &, std::string const &, std::string const &, class ExpressionNode &, float);

private:

};