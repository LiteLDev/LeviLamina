#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/level/block/utils/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace BlockColorUtil {
// NOLINTBEGIN
MCAPI extern std::array<::BlockColor, 16> RAINBOW;

MCAPI ::BlockColor fromInt(int auxValue);

MCAPI ::BlockColor fromItemColor(::ItemColor color);

MCAPI class mce::Color getColor(::BlockColor color);

MCAPI std::string const& getName(::BlockColor);

MCAPI std::string const& getNameMixedCase(::BlockColor);

MCAPI int getRGBColor(::BlockColor color);
// NOLINTEND

}; // namespace BlockColorUtil
