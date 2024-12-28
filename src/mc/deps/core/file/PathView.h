#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class PathView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5007a0;
    // NOLINTEND

public:
    // prevent constructor by default
    PathView& operator=(PathView const&);
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PathView(::Core::PathView const&);

    MCAPI PathView(::Core::PathView&&);

    MCAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::PathView const&);

    MCAPI void* $ctor(::Core::PathView&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
