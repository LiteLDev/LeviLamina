#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {

class ComposedAssertMessage {
public:
    // prevent constructor by default
    ComposedAssertMessage& operator=(ComposedAssertMessage const&);
    ComposedAssertMessage(ComposedAssertMessage const&);
    ComposedAssertMessage();

public:
    // NOLINTBEGIN
    // symbol: ?compose@ComposedAssertMessage@DebugUtils@@QEAAXAEBUAssertHandlerContext@@@Z
    MCAPI void compose(struct AssertHandlerContext const& context);

    // symbol: ??1ComposedAssertMessage@DebugUtils@@QEAA@XZ
    MCAPI ~ComposedAssertMessage();

    // NOLINTEND
};

}; // namespace DebugUtils
