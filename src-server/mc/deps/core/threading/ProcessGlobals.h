#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XTaskQueueObject;
// clang-format on

namespace ProcessGlobals {
// static variables
// NOLINTBEGIN
MCNAPI ::std::atomic<::XTaskQueueObject*>& g_defaultProcessQueue();

MCNAPI ::std::atomic<::XTaskQueueObject*>& g_processQueue();
// NOLINTEND

}
