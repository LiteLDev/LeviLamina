#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class CounterTokenMarker; }
namespace Core::Profile { enum class CounterFlags; }
namespace Core::Profile { enum class CounterFormat; }
// clang-format on

namespace Core::Profile {
/**
 * @symbol ?counterSet\@Profile\@Core\@\@YAXVCounterTokenMarker\@12\@_J\@Z
 */
MCAPI void counterSet(class Core::Profile::CounterTokenMarker, __int64); // NOLINT
/**
 * @symbol
 * ?generateCounterTokenWithConfig\@Profile\@Core\@\@YA?AVCounterTokenMarker\@12\@PEBDW4CounterFormat\@12\@_JW4CounterFlags\@12\@\@Z
 */
MCAPI class Core::Profile::CounterTokenMarker generateCounterTokenWithConfig(
    char const*,
    enum class Core::Profile::CounterFormat,
    __int64,
    enum class Core::Profile::CounterFlags
); // NOLINT
/**
 * @symbol ?initializeProfile\@Profile\@Core\@\@YAXXZ
 */
MCAPI void initializeProfile(); // NOLINT
/**
 * @symbol ?onFileOpenFailed\@Profile\@Core\@\@YAX_N\@Z
 */
MCAPI void onFileOpenFailed(bool); // NOLINT
/**
 * @symbol ?onFileOpenRequest\@Profile\@Core\@\@YAX_N\@Z
 */
MCAPI void onFileOpenRequest(bool); // NOLINT
/**
 * @symbol ?onFileOpenRetry\@Profile\@Core\@\@YAX_N\@Z
 */
MCAPI void onFileOpenRetry(bool); // NOLINT
/**
 * @symbol ?onFileOpenRetrySuccess\@Profile\@Core\@\@YAX_N\@Z
 */
MCAPI void onFileOpenRetrySuccess(bool); // NOLINT
/**
 * @symbol ?onMainThreadCreate\@Profile\@Core\@\@YAXXZ
 */
MCAPI void onMainThreadCreate(); // NOLINT
/**
 * @symbol ?onThreadDestroy\@Profile\@Core\@\@YAXXZ
 */
MCAPI void onThreadDestroy(); // NOLINT
/**
 * @symbol ?profileFlip\@Profile\@Core\@\@YAXXZ
 */
MCAPI void profileFlip(); // NOLINT
/**
 * @symbol ?shutdownProfile\@Profile\@Core\@\@YAXXZ
 */
MCAPI void shutdownProfile(); // NOLINT

}; // namespace Core::Profile
