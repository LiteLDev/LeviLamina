#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CallStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> functionName;
    ::ll::TypedStorage<8, 32, ::std::string> fileName;
    ::ll::TypedStorage<4, 4, int>            lineNumber;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CallStackEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::CallStackEntry FromBacktrace(::std::string_view backtrace);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
