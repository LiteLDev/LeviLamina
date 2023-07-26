#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SculkSensorConversionUtils {
/**
 * @symbol
 * ?SculkSensorPhaseStateGetter\@SculkSensorConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
 */
MCAPI extern class std::function<class std::optional<int>(class BlockLegacy const&, int)>
    SculkSensorPhaseStateGetter; // NOLINT
/**
 * @symbol
 * ?SculkSensorPhaseStateSetter\@SculkSensorConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
 */
MCAPI extern class std::function<class Block const*(class BlockLegacy const&, int, int)>
    SculkSensorPhaseStateSetter; // NOLINT

}; // namespace SculkSensorConversionUtils
