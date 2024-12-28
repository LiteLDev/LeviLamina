#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/CounterFlags.h"
#include "mc/deps/profiler/CounterFormat.h"

// auto generated forward declare list
// clang-format off
namespace Core::Profile { class CounterTokenMarker; }
// clang-format on

namespace Core::Profile {
// functions
// NOLINTBEGIN
MCAPI void counterSet(::Core::Profile::CounterTokenMarker, int64);

MCAPI ::Core::Profile::CounterTokenMarker
generateCounterTokenWithConfig(char const*, ::Core::Profile::CounterFormat, int64, ::Core::Profile::CounterFlags);

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

// static variables
// NOLINTBEGIN
MCAPI bool& ProfilerInitialized();
// NOLINTEND

} // namespace Core::Profile
