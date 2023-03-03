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
     * @symbol  ?SET_THREAD_NAME\@DebugUtils\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void SET_THREAD_NAME(std::string const &);
    /**
     * @symbol  ?debugUtilMutex\@DebugUtils\@\@3Vmutex\@std\@\@A
     */
    MCAPI extern class std::mutex debugUtilMutex;
    /**
     * @symbol  ?gAssertTelemetryRegistered\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gAssertTelemetryRegistered;
    /**
     * @symbol  ?gBreakpadSetupFailed\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gBreakpadSetupFailed;
    /**
     * @symbol  ?gDebugAssertCallbacks\@DebugUtils\@\@3V?$vector\@V?$weak_ptr\@V?$function\@$$A6AXAEBUAssertHandlerContext\@\@\@Z\@std\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@V?$function\@$$A6AXAEBUAssertHandlerContext\@\@\@Z\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI extern std::vector<class std::weak_ptr<class std::function<void (struct AssertHandlerContext const &)>>> gDebugAssertCallbacks;
    /**
     * @symbol  ?gFireAssertTelemetry\@DebugUtils\@\@3V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z\@std\@\@A
     */
    MCAPI extern class std::function<void (std::string const &, std::string const &)> gFireAssertTelemetry;
    /**
     * @symbol  ?gPublishAssertFullMessage\@DebugUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@A
     */
    MCAPI extern std::string gPublishAssertFullMessage;
    /**
     * @symbol  ?gShouldDebugBreak\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldDebugBreak;
    /**
     * @symbol  ?gShouldPresentDialog\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldPresentDialog;
    /**
     * @symbol  ?gp_assert_handler\@DebugUtils\@\@3V?$ServiceOverrider\@P6A_NAEBUAssertHandlerContext\@\@AEA_N\@Z\@\@A
     */
    MCAPI extern class ServiceOverrider<bool ( *)(struct AssertHandlerContext const &, bool &)> gp_assert_handler;
    /**
     * @symbol  ?isDebuggerAttached\@DebugUtils\@\@YA_NXZ
     */
    MCAPI bool isDebuggerAttached();

};