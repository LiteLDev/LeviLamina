/**
 * @file  DebugUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @symbol ?debugUtilMutex\@DebugUtils\@\@3Vmutex\@std\@\@A
     */
    MCAPI extern class std::mutex debugUtilMutex;
    /**
     * @symbol ?gAssertTelemetryRegistered\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gAssertTelemetryRegistered;
    /**
     * @symbol ?gBreakpadSetupFailed\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gBreakpadSetupFailed;
    /**
     * @symbol ?gDebugAssertCallbacks\@DebugUtils\@\@3V?$Publisher\@$$A6AXAEBUAssertHandlerContext\@\@\@ZUMultiThreaded\@ThreadModel\@PubSub\@Bedrock\@\@\@PubSub\@Bedrock\@\@A
     */
    MCAPI extern class Bedrock::PubSub::Publisher<void (struct AssertHandlerContext const &), struct Bedrock::PubSub::ThreadModel::MultiThreaded> gDebugAssertCallbacks;
    /**
     * @symbol ?gFireAssertTelemetry\@DebugUtils\@\@3V?$Publisher\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@ZUMultiThreaded\@ThreadModel\@PubSub\@Bedrock\@\@\@PubSub\@Bedrock\@\@A
     */
    MCAPI extern class Bedrock::PubSub::Publisher<void (std::string const &, std::string const &), struct Bedrock::PubSub::ThreadModel::MultiThreaded> gFireAssertTelemetry;
    /**
     * @symbol ?gPublishAssertFullMessage\@DebugUtils\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@A
     */
    MCAPI extern std::string gPublishAssertFullMessage;
    /**
     * @symbol ?gShouldDebugBreak\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldDebugBreak;
    /**
     * @symbol ?gShouldPresentDialog\@DebugUtils\@\@3_NA
     */
    MCAPI extern bool gShouldPresentDialog;
    /**
     * @symbol ?gp_assert_handler\@DebugUtils\@\@3V?$ServiceOverrider\@P6A_NAEBUAssertHandlerContext\@\@AEA_N\@Z\@\@A
     */
    MCAPI extern class ServiceOverrider<bool ( *)(struct AssertHandlerContext const &, bool &)> gp_assert_handler;
    /**
     * @symbol ?handleAssert\@DebugUtils\@\@YA_NPEBD0AEA_NH00ZZ
     */
    MCAPI bool handleAssert(char const *, char const *, bool &, int, char const *, char const *, ...);
    /**
     * @symbol ?isDebuggerAttached\@DebugUtils\@\@YA_NXZ
     */
    MCAPI bool isDebuggerAttached();
    /**
     * @symbol ?optimizedAssertHandler\@DebugUtils\@\@YA_NAEBUAssertHandlerContext\@\@AEA_N\@Z
     */
    MCAPI bool optimizedAssertHandler(struct AssertHandlerContext const &, bool &);
    /**
     * @symbol ?runAssertHandler\@DebugUtils\@\@YA_NAEBV?$bitset\@$06\@std\@\@AEBUAssertHandlerContext\@\@AEA_N\@Z
     */
    MCAPI bool runAssertHandler(class std::bitset<7> const &, struct AssertHandlerContext const &, bool &);
    /**
     * @symbol ?setThreadName\@DebugUtils\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setThreadName(std::string const &);

};