#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

class DyeColorUtil {
public:
    // prevent constructor by default
    DyeColorUtil& operator=(DyeColorUtil const&);
    DyeColorUtil(DyeColorUtil const&);
    DyeColorUtil();

public:
    // NOLINTBEGIN
    MCAPI static int getAuxValue(::ItemColor color);

    MCAPI static ::ItemColor getItemColor(int auxValue);

    MCAPI static ::ItemColor getRandomItemColor(class Random& random);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::array<short, 16> const& COLOR_TO_AUX();

    MCAPI static std::array<short, 4> const& DEPRECATED_DYE_AUX_VALUES();

    MCAPI static std::array<short, 16> const& DYE_AUX_VALUES();

    MCAPI static std::array<::ItemColor, 20> const& mColorMap();

    // NOLINTEND
};
