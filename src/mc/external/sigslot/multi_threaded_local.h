#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sigslot {

class multi_threaded_local {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk21dfbd;
    // NOLINTEND

public:
    // prevent constructor by default
    multi_threaded_local& operator=(multi_threaded_local const&);
    multi_threaded_local(multi_threaded_local const&);
    multi_threaded_local();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~multi_threaded_local();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace sigslot
