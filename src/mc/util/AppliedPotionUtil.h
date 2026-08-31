#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Potion;
// clang-format on

namespace AppliedPotionUtil {
// functions
// NOLINTBEGIN
MCNAPI ::std::optional<int>
calculateAppliedPotionAuxValue(::std::shared_ptr<::Potion const> const& potion, ::ItemStackBase const& item);
// NOLINTEND

} // namespace AppliedPotionUtil
