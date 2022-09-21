/**
 * @file  MC/InternalHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace InternalHelpers.
 *
 */
namespace InternalHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1084157780
     * @symbol ?lastRenderTime@InternalHelpers@@3V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@A
     */
    MCAPI extern class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> lastRenderTime;
    /**
     * @hash   -1115734696
     * @symbol ?toString@InternalHelpers@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MovePredictionType@@@Z
     */
    MCAPI std::string toString(enum MovePredictionType);

};