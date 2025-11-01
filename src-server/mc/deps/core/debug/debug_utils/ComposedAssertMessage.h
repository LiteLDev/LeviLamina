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
    ::ll::UntypedStorage<1, 1> mUnk46006e;
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
    MCNAPI void compose(::AssertHandlerContext const& context);

    MCNAPI ~ComposedAssertMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
