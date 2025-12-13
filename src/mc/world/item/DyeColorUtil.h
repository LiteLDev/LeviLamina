#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

class DyeColorUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int getAuxValue(::ItemColor color);

    MCNAPI static ::ItemColor getItemColor(int auxValue);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<short, 16> const& COLOR_TO_AUX();

    MCNAPI static ::std::array<short, 16> const& DYE_AUX_VALUES();

    MCNAPI static ::std::array<::ItemColor, 20> const& mColorMap();
    // NOLINTEND
};
