#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
// clang-format on

namespace Bedrock::Threading {
// functions
// NOLINTBEGIN
MCNAPI ::gsl::not_null<::Scheduler*> getMainThreadScheduler();
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI uint64& sMainProcToken();
#endif

#ifdef LL_PLAT_S
MCNAPI uint64& sMainProcToken();
#endif
// NOLINTEND

} // namespace Bedrock::Threading
