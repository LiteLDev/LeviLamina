#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ApiRefs {
// functions
// NOLINTBEGIN
MCNAPI void GlobalRelease();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::atomic<uint>& g_globalApiRefs();

MCNAPI ::std::condition_variable& g_waitCv();

MCNAPI ::std::mutex& g_waitMutex();
// NOLINTEND

} // namespace ApiRefs
