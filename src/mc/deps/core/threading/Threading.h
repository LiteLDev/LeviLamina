#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock::Threading { class AssignedThread; }
// clang-format on

namespace Bedrock::Threading {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Threading::AssignedThread& getMainThread();
#endif

MCNAPI ::gsl::not_null<::Scheduler*> getMainThreadScheduler();

#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Threading::AssignedThread& getServerThread();
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI uint64& sMainProcToken();
// NOLINTEND

} // namespace Bedrock::Threading
