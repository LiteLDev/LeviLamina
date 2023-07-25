#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace InternalHelpers {
/**
 * @symbol
 * ?lastRenderTime\@InternalHelpers\@\@3V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@A
 */
MCAPI extern class std::chrono::
    time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
        lastRenderTime;
/**
 * @symbol
 * ?toString\@InternalHelpers\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MovePredictionType\@\@\@Z
 */
MCAPI std::string toString(enum class MovePredictionType);

}; // namespace InternalHelpers
