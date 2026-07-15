#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct CallStackEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb53225;
    ::ll::UntypedStorage<8, 32> mUnkd3d571;
    ::ll::UntypedStorage<4, 4>  mUnk1bb804;
    // NOLINTEND

public:
    // prevent constructor by default
    CallStackEntry& operator=(CallStackEntry const&);
    CallStackEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallStackEntry(::Scripting::CallStackEntry const&);

    MCNAPI ~CallStackEntry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::CallStackEntry FromBacktrace(::std::string_view backtrace);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::CallStackEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
