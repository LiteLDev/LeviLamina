#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {
// functions
// NOLINTBEGIN
MCAPI bool
handleAssert_va(char const* msgFormat, char const* arg, int line, char const* file, char const* function, char* args);

MCAPI bool isDebuggerAttached();

MCAPI bool runAssertHandler(::std::bitset<7> const& steps, ::AssertHandlerContext const& context);

MCAPI void setThreadName(::std::string const& name);

MCAPI bool shouldDebugBreak();
// NOLINTEND

} // namespace DebugUtils
