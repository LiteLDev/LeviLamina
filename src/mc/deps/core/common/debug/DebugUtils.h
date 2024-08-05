#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {
// NOLINTBEGIN
MCAPI bool handleAssert_va(char const*, char const*, int, char const*, char const*, char*);

MCAPI bool isDebuggerAttached();

MCAPI bool runAssertHandler(std::bitset<7> const&, struct AssertHandlerContext const&);

MCAPI void setThreadName(std::string const& name);

MCAPI bool shouldDebugBreak();
// NOLINTEND

}; // namespace DebugUtils
