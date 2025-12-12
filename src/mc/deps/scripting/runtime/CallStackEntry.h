#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CallStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5cd443;
    ::ll::UntypedStorage<8, 32> mUnke29b41;
    ::ll::UntypedStorage<4, 4>  mUnk1bb804;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStackEntry& operator=(CallStackEntry const&);
    CallStackEntry(CallStackEntry const&);
    CallStackEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CallStackEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::CallStackEntry FromBacktrace(::std::string_view backtrace);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
