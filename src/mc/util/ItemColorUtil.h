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
MCFOLD ::ItemColor fromBlockColor(::BlockColor color);

MCAPI ::ItemColor fromColor(::mce::Color const& color);

MCAPI ::ItemColor fromInt(int auxValue);

MCAPI ::mce::Color getColor(::ItemColor color);

MCAPI ::std::string const& getName(::ItemColor color);

MCAPI ::std::string const& getNameMixedCase(::ItemColor color);

MCAPI int getRGBColor(::ItemColor color);
// NOLINTEND

} // namespace ItemColorUtil
