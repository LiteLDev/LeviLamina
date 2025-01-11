#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct UUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke4e03f;
    // NOLINTEND

public:
    // prevent constructor by default
    UUID& operator=(UUID const&);
    UUID(UUID const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UUID();

    MCAPI ~UUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
