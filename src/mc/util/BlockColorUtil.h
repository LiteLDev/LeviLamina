#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace BlockColorUtil {
// NOLINTBEGIN
MCAPI ::BlockColor fromInt(int auxValue);

MCAPI ::BlockColor fromItemColor(::ItemColor color);

MCAPI class mce::Color getColor(::BlockColor color);

MCAPI std::string const& getName(::BlockColor color);

MCAPI std::string const& getNameMixedCase(::BlockColor color);

MCAPI int getRGBColor(::BlockColor color);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::array<::BlockColor, 16>& RAINBOW();
// NOLINTEND

}; // namespace BlockColorUtil
