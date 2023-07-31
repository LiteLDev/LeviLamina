#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DyeColorUtil {

public:
    // prevent constructor by default
    DyeColorUtil& operator=(DyeColorUtil const&) = delete;
    DyeColorUtil(DyeColorUtil const&)            = delete;
    DyeColorUtil()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getAuxValue\@DyeColorUtil\@\@SAHW4ItemColor\@\@\@Z
     */
    MCAPI static int getAuxValue(enum class ItemColor);
    /**
     * @symbol ?getItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@H\@Z
     */
    MCAPI static enum class ItemColor getItemColor(int);
    /**
     * @symbol ?getRandomItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static enum class ItemColor getRandomItemColor(class Random&);
    /**
     * @symbol ?COLOR_TO_AUX\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static std::array<short, 16> const COLOR_TO_AUX;
    /**
     * @symbol ?DEPRECATED_DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$03\@std\@\@B
     */
    MCAPI static std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES;
    /**
     * @symbol ?DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static std::array<short, 16> const DYE_AUX_VALUES;
    /**
     * @symbol ?mColorMap\@DyeColorUtil\@\@2V?$array\@W4ItemColor\@\@$0BE\@\@std\@\@B
     */
    MCAPI static std::array<enum class ItemColor, 20> const mColorMap;
    // NOLINTEND
};
