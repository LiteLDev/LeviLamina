#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {
// NOLINTBEGIN
MCAPI bool
handleAssert_va(char const* msgFormat, char const* arg, int line, char const* file, char const* function, char* args);

MCAPI bool isDebuggerAttached();

MCAPI bool runAssertHandler(std::bitset<7> const& steps, struct AssertHandlerContext const& context);

MCAPI void setThreadName(std::string const& name);

MCAPI bool shouldDebugBreak();
// NOLINTEND

}; // namespace DebugUtils
