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
MCNAPI uint64& sMainProcToken();
// NOLINTEND

} // namespace Bedrock::Threading
