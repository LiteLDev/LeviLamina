#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/BlockColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ItemColorUtil {
// functions
// NOLINTBEGIN
MCNAPI ::ItemColor fromBlockColor(::BlockColor color);

MCNAPI ::ItemColor fromColor(::mce::Color const& color);

MCNAPI ::ItemColor fromInt(int auxValue);

MCNAPI ::mce::Color getColor(::ItemColor color);

MCNAPI ::std::string const& getName(::ItemColor color);

MCNAPI ::std::string const& getNameMixedCase(::ItemColor color);

MCNAPI int getRGBColor(::ItemColor color);
// NOLINTEND

} // namespace ItemColorUtil
