#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BlockColor.h"

namespace BlockColorUtil {
// functions
// NOLINTBEGIN
MCAPI ::BlockColor fromInt(int auxValue);

MCFOLD ::BlockColor fromItemColor(::ItemColor color);

MCAPI ::std::string const& getName(::BlockColor color);

MCAPI ::std::string const& getNameMixedCase(::BlockColor color);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::array<::BlockColor, 16>& RAINBOW();
// NOLINTEND

} // namespace BlockColorUtil
