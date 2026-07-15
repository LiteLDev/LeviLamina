#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace ItemColorUtil {
// functions
// NOLINTBEGIN
MCNAPI ::ItemColor fromColor(::mce::Color const& color);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::array<::std::pair<::ItemColor, int>, 16> const& itemColorToRGB();
#endif

#ifdef LL_PLAT_S
MCNAPI ::std::array<::std::pair<::ItemColor, int>, 16> const& itemColorToRGB();
#endif
// NOLINTEND

} // namespace ItemColorUtil
