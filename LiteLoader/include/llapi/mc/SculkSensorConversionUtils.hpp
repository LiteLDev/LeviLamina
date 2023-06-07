/**
 * @file  SculkSensorConversionUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SculkSensorConversionUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?SculkSensorPhaseStateGetter\@SculkSensorConversionUtils\@\@3V?$function\@$$A6A?AV?$optional\@H\@std\@\@AEBVBlockLegacy\@\@H\@Z\@std\@\@A
     */
    MCAPI extern class std::function<class std::optional<int> (class BlockLegacy const &, int)> SculkSensorPhaseStateGetter;
    /**
     * @symbol ?SculkSensorPhaseStateSetter\@SculkSensorConversionUtils\@\@3V?$function\@$$A6APEBVBlock\@\@AEBVBlockLegacy\@\@HH\@Z\@std\@\@A
     */
    MCAPI extern class std::function<class Block const * (class BlockLegacy const &, int, int)> SculkSensorPhaseStateSetter;

};