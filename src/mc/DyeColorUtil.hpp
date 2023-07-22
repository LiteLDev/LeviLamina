/**
 * @file  DyeColorUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?COLOR_TO_AUX\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static class std::array<short, 16> const COLOR_TO_AUX;
    /**
     * @symbol  ?DEPRECATED_DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$03\@std\@\@B
     */
    MCAPI static class std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES;
    /**
     * @symbol  ?DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static class std::array<short, 16> const DYE_AUX_VALUES;
    /**
     * @symbol  ?getAuxValue\@DyeColorUtil\@\@SAHW4ItemColor\@\@\@Z
     */
    MCAPI static int getAuxValue(enum class ItemColor);
    /**
     * @symbol  ?getItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@H\@Z
     */
    MCAPI static enum class ItemColor getItemColor(int);
    /**
     * @symbol  ?getRandomItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static enum class ItemColor getRandomItemColor(class Random &);
    /**
     * @symbol  ?mColorMap\@DyeColorUtil\@\@2V?$array\@W4ItemColor\@\@$0BE\@\@std\@\@B
     */
    MCAPI static class std::array<enum class ItemColor, 20> const mColorMap;

};