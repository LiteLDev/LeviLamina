#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkSensorConversionUtils {
// NOLINTBEGIN
// symbol:
// ?SculkSensorPhaseStateGetter@SculkSensorConversionUtils@@3V?$function@$$A6A?AV?$optional@H@std@@AEBVBlockLegacy@@H@Z@std@@A
MCAPI extern std::function<std::optional<int>(class BlockLegacy const&, int)> SculkSensorPhaseStateGetter;

// symbol:
// ?SculkSensorPhaseStateSetter@SculkSensorConversionUtils@@3V?$function@$$A6APEBVBlock@@AEBVBlockLegacy@@HH@Z@std@@A
MCAPI extern std::function<class Block const*(class BlockLegacy const&, int, int)> SculkSensorPhaseStateSetter;
// NOLINTEND

}; // namespace SculkSensorConversionUtils
