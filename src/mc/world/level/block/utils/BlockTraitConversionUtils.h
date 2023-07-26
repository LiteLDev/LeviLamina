#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockTraitConversionUtils {
/**
 * @symbol
 * ?cardinalDirectionStateGetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
 */
MCAPI extern class std::function<class std::optional<int>(class BlockLegacy const&, int)>
    cardinalDirectionStateGetter; // NOLINT
/**
 * @symbol
 * ?cardinalDirectionStateSetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
 */
MCAPI extern class std::function<class Block const*(class BlockLegacy const&, int, int)>
    cardinalDirectionStateSetter; // NOLINT
/**
 * @symbol
 * ?observerFacingDirectionStateGetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
 */
MCAPI extern class std::function<class std::optional<int>(class BlockLegacy const&, int)>
    observerFacingDirectionStateGetter; // NOLINT
/**
 * @symbol
 * ?observerFacingDirectionStateSetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
 */
MCAPI extern class std::function<class Block const*(class BlockLegacy const&, int, int)>
    observerFacingDirectionStateSetter; // NOLINT

}; // namespace BlockTraitConversionUtils
