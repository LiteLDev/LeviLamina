#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {
// functions
// NOLINTBEGIN
MCNAPI bool
handleAssert_va(char const* msgFormat, char const* arg, int line, char const* file, char const* function, char* args);

MCNAPI bool runAssertHandler(::std::bitset<7> const& steps, ::AssertHandlerContext const& context);
// NOLINTEND

} // namespace DebugUtils
