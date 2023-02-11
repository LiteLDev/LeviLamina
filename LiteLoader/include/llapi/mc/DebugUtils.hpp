/**
 * @file  DebugUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?DEFAULT_ASSERT_HANDLER\@DebugUtils\@\@YA_NAEBUAssertHandlerContext\@\@AEA_N\@Z
     */
    MCAPI bool DEFAULT_ASSERT_HANDLER(struct AssertHandlerContext const &, bool &);
    /**
     * @hash   -1990654919
     * @symbol  ?SET_THREAD_NAME\@DebugUtils\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void SET_THREAD_NAME(std::string const &);
    /**
     * @hash   -410178131
     * @symbol  ?debugUtilMutex\@DebugUtils\@\@3Vmutex\@std\@\@A
     */
    MCAPI extern class std::mutex debugUtilMutex;
    /**
     * @hash   1261374301
     * @symbol  ?gAssertTelemetryRegistered\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gAssertTelemetryRegistered;
    /**
     * @hash   105731008
     * @symbol  ?gBreakpadSetupFailed\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gBreakpadSetupFailed;
    /**
     * @hash   745203236
     * @symbol  ?gDebugAssertCallbacks\@DebugUtils\@\@3V?$vector\@V?$weak_ptr\@V?$function\@$$A6AXAEBUAssertHandlerContext\@\@\@Z\@std\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@V?$function\@$$A6AXAEBUAssertHandlerContext\@\@\@Z\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI extern std::vector<class std::weak_ptr<class std::function<void (struct AssertHandlerContext const &)>>> gDebugAssertCallbacks;
    /**
     * @hash   1070375562
     * @symbol  ?gFireAssertTelemetry\@DebugUtils\@\@3V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z\@std\@\@A
     */
    MCAPI extern class std::function<void (std::string const &, std::string const &)> gFireAssertTelemetry;
    /**
     * @hash   -604010077
     * @symbol  ?gPublishAssertFullMessage\@DebugUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@A
     */
    MCAPI extern std::string gPublishAssertFullMessage;
    /**
     * @hash   -874138065
     * @symbol  ?gShouldDebugBreak\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldDebugBreak;
    /**
     * @hash   -1776695468
     * @symbol  ?gShouldPresentDialog\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldPresentDialog;
    /**
     * @symbol  ?gp_assert_handler\@DebugUtils\@\@3V?$ServiceOverrider\@P6A_NAEBUAssertHandlerContext\@\@AEA_N\@Z\@\@A
     */
    MCAPI extern class ServiceOverrider<bool ( *)(struct AssertHandlerContext const &, bool &)> gp_assert_handler;
    /**
     * @hash   -1822725119
     * @symbol  ?isDebuggerAttached\@DebugUtils\@\@YA_NXZ
     */
    MCAPI bool isDebuggerAttached();

};