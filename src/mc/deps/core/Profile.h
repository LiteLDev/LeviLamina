#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/CounterFlags.h"
#include "mc/deps/core/CounterFormat.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class CounterTokenMarker; }
// clang-format on

namespace Core::Profile {
// NOLINTBEGIN
MCAPI void counterSet(class Core::Profile::CounterTokenMarker token, int64 amount);

MCAPI class Core::Profile::CounterTokenMarker generateCounterTokenWithConfig(
    char const*                    label,
    ::Core::Profile::CounterFormat format,
    int64                          limit,
    ::Core::Profile::CounterFlags  flags
);

MCAPI void initializeProfile();

MCAPI void onFileOpenFailed(bool isReadOnly);

MCAPI void onFileOpenRequest(bool isReadOnly);

MCAPI void onFileOpenRetry(bool isReadOnly);

MCAPI void onFileOpenRetrySuccess(bool isReadOnly);

MCAPI void onMainThreadCreate();

MCAPI void onThreadDestroy();

MCAPI void profileFlip();

MCAPI void shutdownProfile();
// NOLINTEND

}; // namespace Core::Profile
