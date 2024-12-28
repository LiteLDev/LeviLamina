#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

class DyeColorUtil {
public:
    // prevent constructor by default
    DyeColorUtil& operator=(DyeColorUtil const&);
    DyeColorUtil(DyeColorUtil const&);
    DyeColorUtil();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getAuxValue(::ItemColor color);

    MCAPI static ::ItemColor getItemColor(int auxValue);

    MCAPI static ::ItemColor getRandomItemColor(::Random& random);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::array<short, 16> const& COLOR_TO_AUX();

    MCAPI static ::std::array<short, 4> const& DEPRECATED_DYE_AUX_VALUES();

    MCAPI static ::std::array<short, 16> const& DYE_AUX_VALUES();

    MCAPI static ::std::array<::ItemColor, 20> const& mColorMap();
    // NOLINTEND
};
