/**
 * @file  DebugUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace DebugUtils.
 *
 */
namespace DebugUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   2120501282
     * @symbol ?DEFAULT_ASSERT_HANDLER@DebugUtils@@YA_NAEBUAssertHandlerContext@@@Z
     */
    MCAPI bool DEFAULT_ASSERT_HANDLER(struct AssertHandlerContext const &);
    /**
     * @hash   1553025641
     * @symbol ?SET_THREAD_NAME@DebugUtils@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void SET_THREAD_NAME(std::string const &);
    /**
     * @hash   -1227550915
     * @symbol ?debugUtilMutex@DebugUtils@@3Vmutex@std@@A
     */
    MCAPI extern class std::mutex debugUtilMutex;
    /**
     * @hash   443993829
     * @symbol ?gAssertTelemetryRegistered@DebugUtils@@3_NA
     */
    MCAPI extern bool gAssertTelemetryRegistered;
    /**
     * @hash   -711649464
     * @symbol ?gBreakpadSetupFailed@DebugUtils@@3_NA
     */
    MCAPI extern bool gBreakpadSetupFailed;
    /**
     * @hash   -72169548
     * @symbol ?gDebugAssertCallbacks@DebugUtils@@3V?$vector@V?$weak_ptr@V?$function@$$A6AXAEBUAssertHandlerContext@@@Z@std@@@std@@V?$allocator@V?$weak_ptr@V?$function@$$A6AXAEBUAssertHandlerContext@@@Z@std@@@std@@@2@@std@@A
     */
    MCAPI extern std::vector<class std::weak_ptr<class std::function<void (struct AssertHandlerContext const &)>>> gDebugAssertCallbacks;
    /**
     * @hash   253002778
     * @symbol ?gFireAssertTelemetry@DebugUtils@@3V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z@std@@A
     */
    MCAPI extern class std::function<void (std::string const &, std::string const &)> gFireAssertTelemetry;
    /**
     * @hash   -1697566573
     * @symbol ?gPublishAssertFullMessage@DebugUtils@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@A
     */
    MCAPI extern std::string gPublishAssertFullMessage;
    /**
     * @hash   -1967702249
     * @symbol ?gShouldDebugBreak@DebugUtils@@3_NA
     */
    MCAPI extern bool gShouldDebugBreak;
    /**
     * @hash   1424707644
     * @symbol ?gShouldPresentDialog@DebugUtils@@3_NA
     */
    MCAPI extern bool gShouldPresentDialog;
    /**
     * @hash   548117619
     * @symbol ?gp_assert_handler@DebugUtils@@3V?$ServiceOverrider@P6A_NAEBUAssertHandlerContext@@@Z@@A
     */
    MCAPI extern class ServiceOverrider<bool ( *)(struct AssertHandlerContext const &)> gp_assert_handler;
    /**
     * @hash   1721385969
     * @symbol ?isDebuggerAttached@DebugUtils@@YA_NXZ
     */
    MCAPI bool isDebuggerAttached();

};