#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class DebuggerExceptionSupressor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf439d7;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerExceptionSupressor& operator=(DebuggerExceptionSupressor const&);
    DebuggerExceptionSupressor(DebuggerExceptionSupressor const&);
    DebuggerExceptionSupressor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DebuggerExceptionSupressor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
