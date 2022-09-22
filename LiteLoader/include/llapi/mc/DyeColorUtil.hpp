/**
 * @file  DyeColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DyeColorUtil.
 *
 */
class DyeColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYECOLORUTIL
public:
    class DyeColorUtil& operator=(class DyeColorUtil const &) = delete;
    DyeColorUtil(class DyeColorUtil const &) = delete;
    DyeColorUtil() = delete;
#endif

public:
    /**
     * @hash   1798578754
     * @symbol ?COLOR_TO_AUX@DyeColorUtil@@2V?$array@F$0BA@@std@@B
     */
    MCAPI static class std::array<short, 16> const COLOR_TO_AUX;
    /**
     * @hash   -1418052843
     * @symbol ?DEPRECATED_DYE_AUX_VALUES@DyeColorUtil@@2V?$array@F$03@std@@B
     */
    MCAPI static class std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES;
    /**
     * @hash   899587546
     * @symbol ?DYE_AUX_VALUES@DyeColorUtil@@2V?$array@F$0BA@@std@@B
     */
    MCAPI static class std::array<short, 16> const DYE_AUX_VALUES;
    /**
     * @hash   -1404324903
     * @symbol ?getAuxValue@DyeColorUtil@@SAHW4ItemColor@@@Z
     */
    MCAPI static int getAuxValue(enum ItemColor);
    /**
     * @hash   -616530667
     * @symbol ?getItemColor@DyeColorUtil@@SA?AW4ItemColor@@H@Z
     */
    MCAPI static enum ItemColor getItemColor(int);
    /**
     * @hash   -295187645
     * @symbol ?getRandomItemColor@DyeColorUtil@@SA?AW4ItemColor@@AEAVRandom@@@Z
     */
    MCAPI static enum ItemColor getRandomItemColor(class Random &);
    /**
     * @hash   993319481
     * @symbol ?mColorMap@DyeColorUtil@@2V?$array@W4ItemColor@@$0BE@@std@@B
     */
    MCAPI static class std::array<enum ItemColor, 20> const mColorMap;

};