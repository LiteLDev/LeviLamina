#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BlockColor.h"

namespace BlockColorUtil {
// functions
// NOLINTBEGIN
MCNAPI ::BlockColor fromInt(int auxValue);

MCNAPI ::BlockColor fromItemColor(::ItemColor color);

MCNAPI ::std::string const& getName(::BlockColor color);

MCNAPI ::std::string const& getNameMixedCase(::BlockColor color);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::array<::BlockColor, 16>& RAINBOW();
// NOLINTEND

} // namespace BlockColorUtil
