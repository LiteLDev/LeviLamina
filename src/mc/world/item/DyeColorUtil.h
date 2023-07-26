#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DyeColorUtil {

public:
    // prevent constructor by default
    DyeColorUtil& operator=(DyeColorUtil const&) = delete;
    DyeColorUtil(DyeColorUtil const&)            = delete;
    DyeColorUtil()                               = delete;

public:
    /**
     * @symbol ?getAuxValue\@DyeColorUtil\@\@SAHW4ItemColor\@\@\@Z
     */
    MCAPI static int getAuxValue(enum class ItemColor); // NOLINT
    /**
     * @symbol ?getItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@H\@Z
     */
    MCAPI static enum class ItemColor getItemColor(int); // NOLINT
    /**
     * @symbol ?getRandomItemColor\@DyeColorUtil\@\@SA?AW4ItemColor\@\@AEAVRandom\@\@\@Z
     */
    MCAPI static enum class ItemColor getRandomItemColor(class Random&); // NOLINT
    /**
     * @symbol ?COLOR_TO_AUX\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static class std::array<short, 16> const COLOR_TO_AUX; // NOLINT
    /**
     * @symbol ?DEPRECATED_DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$03\@std\@\@B
     */
    MCAPI static class std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES; // NOLINT
    /**
     * @symbol ?DYE_AUX_VALUES\@DyeColorUtil\@\@2V?$array\@F$0BA\@\@std\@\@B
     */
    MCAPI static class std::array<short, 16> const DYE_AUX_VALUES; // NOLINT
    /**
     * @symbol ?mColorMap\@DyeColorUtil\@\@2V?$array\@W4ItemColor\@\@$0BE\@\@std\@\@B
     */
    MCAPI static class std::array<enum class ItemColor, 20> const mColorMap; // NOLINT
};
