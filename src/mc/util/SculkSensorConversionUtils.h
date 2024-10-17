#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkSensorConversionUtils {
// thunks
// NOLINTBEGIN
MCAPI std::function<std::optional<int>(class BlockLegacy const&, int)>& SculkSensorPhaseStateGetter();

MCAPI std::function<class Block const*(class BlockLegacy const&, int, int)>& SculkSensorPhaseStateSetter();
// NOLINTEND

}; // namespace SculkSensorConversionUtils
