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
MCAPI ::Bedrock::Threading::AssignedThread& getMainThread();
#endif

MCAPI ::gsl::not_null<::Scheduler*> getMainThreadScheduler();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI uint64& sMainProcToken();
// NOLINTEND

} // namespace Bedrock::Threading
