#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
// clang-format on

namespace SculkSensorConversionUtils {
// static variables
// NOLINTBEGIN
MCAPI ::std::function<::std::optional<int>(::BlockLegacy const&, int)>& SculkSensorPhaseStateGetter();

MCAPI ::std::function<::Block const*(::BlockLegacy const&, int, int)>& SculkSensorPhaseStateSetter();
// NOLINTEND

} // namespace SculkSensorConversionUtils
