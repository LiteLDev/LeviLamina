#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkSensorConversionUtils {
// NOLINTBEGIN
MCAPI extern std::function<std::optional<int>(class BlockLegacy const&, int)> SculkSensorPhaseStateGetter;

MCAPI extern std::function<class Block const*(class BlockLegacy const&, int, int)> SculkSensorPhaseStateSetter;
// NOLINTEND

}; // namespace SculkSensorConversionUtils
