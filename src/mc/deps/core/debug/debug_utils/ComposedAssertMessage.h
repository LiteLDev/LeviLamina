#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AssertHandlerContext;
// clang-format on

namespace DebugUtils {

class ComposedAssertMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk46006e;
    ::ll::UntypedStorage<8, 32> mUnk903de1;
    // NOLINTEND

public:
    // prevent constructor by default
    ComposedAssertMessage& operator=(ComposedAssertMessage const&);
    ComposedAssertMessage(ComposedAssertMessage const&);
    ComposedAssertMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void compose(::AssertHandlerContext const& context);

    MCAPI ~ComposedAssertMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace DebugUtils
