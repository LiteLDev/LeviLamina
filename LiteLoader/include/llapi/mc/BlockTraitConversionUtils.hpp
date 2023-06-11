/**
 * @file  BlockTraitConversionUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace BlockTraitConversionUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?cardinalDirectionStateGetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
     */
    MCAPI extern class std::function<class std::optional<int> (class BlockLegacy const &, int)> cardinalDirectionStateGetter;
    /**
     * @symbol ?cardinalDirectionStateSetter\@BlockTraitConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
     */
    MCAPI extern class std::function<class Block const * (class BlockLegacy const &, int, int)> cardinalDirectionStateSetter;

};