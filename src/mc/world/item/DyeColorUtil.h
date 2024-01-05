#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"

class DyeColorUtil {
public:
    // prevent constructor by default
    DyeColorUtil& operator=(DyeColorUtil const&);
    DyeColorUtil(DyeColorUtil const&);
    DyeColorUtil();

public:
    // NOLINTBEGIN
    // symbol: ?getAuxValue@DyeColorUtil@@SAHW4ItemColor@@@Z
    MCAPI static int getAuxValue(::ItemColor color);

    // symbol: ?getItemColor@DyeColorUtil@@SA?AW4ItemColor@@H@Z
    MCAPI static ::ItemColor getItemColor(int auxValue);

    // symbol: ?getRandomItemColor@DyeColorUtil@@SA?AW4ItemColor@@AEAVRandom@@@Z
    MCAPI static ::ItemColor getRandomItemColor(class Random& random);

    // symbol: ?COLOR_TO_AUX@DyeColorUtil@@2V?$array@F$0BA@@std@@B
    MCAPI static std::array<short, 16> const COLOR_TO_AUX;

    // symbol: ?DEPRECATED_DYE_AUX_VALUES@DyeColorUtil@@2V?$array@F$03@std@@B
    MCAPI static std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES;

    // symbol: ?DYE_AUX_VALUES@DyeColorUtil@@2V?$array@F$0BA@@std@@B
    MCAPI static std::array<short, 16> const DYE_AUX_VALUES;

    // symbol: ?mColorMap@DyeColorUtil@@2V?$array@W4ItemColor@@$0BE@@std@@B
    MCAPI static std::array<::ItemColor, 20> const mColorMap;

    // NOLINTEND
};
