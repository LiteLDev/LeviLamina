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
    MCAPI void compose(struct AssertHandlerContext const& context);

    MCAPI ~ComposedAssertMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace DebugUtils
