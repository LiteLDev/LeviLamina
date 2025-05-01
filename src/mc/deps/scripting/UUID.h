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
    MCNAPI UUID();

    MCNAPI UUID(::Scripting::UUID&&);

    MCNAPI ~UUID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::UUID&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
