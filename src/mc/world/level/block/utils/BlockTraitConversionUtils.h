#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTraitConversionUtils {
// NOLINTBEGIN
/**
 * @symbol
 * ?cardinalDirectionStateGetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
 */
MCAPI extern std::function<std::optional<int32_t>(class BlockLegacy const&, int32_t)> cardinalDirectionStateGetter;
/**
 * @symbol
 * ?cardinalDirectionStateSetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
 */
MCAPI extern std::function<class Block const*(class BlockLegacy const&, int32_t, int32_t)> cardinalDirectionStateSetter;
/**
 * @symbol
 * ?observerFacingDirectionStateGetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
 */
MCAPI extern std::function<std::optional<int32_t>(class BlockLegacy const&, int32_t)>
    observerFacingDirectionStateGetter;
/**
 * @symbol
 * ?observerFacingDirectionStateSetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
 */
MCAPI extern std::function<class Block const*(class BlockLegacy const&, int32_t, int32_t)>
    observerFacingDirectionStateSetter;
// NOLINTEND

}; // namespace BlockTraitConversionUtils
