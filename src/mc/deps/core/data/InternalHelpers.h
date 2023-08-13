#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace InternalHelpers {
// NOLINTBEGIN
/**
 * @symbol
 * ?lastRenderTime\@InternalHelpers\@\@3V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@A
 */
MCAPI extern std::chrono::steady_clock::time_point lastRenderTime;
/**
 * @symbol
 * ?toString\@InternalHelpers\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4MovePredictionType\@\@\@Z
 */
MCAPI std::string toString(enum class MovePredictionType);
// NOLINTEND

}; // namespace InternalHelpers
