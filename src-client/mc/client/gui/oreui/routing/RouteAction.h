#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct RouteAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6acbe8;
    ::ll::UntypedStorage<4, 4>  mUnk134fe9;
    // NOLINTEND

public:
    // prevent constructor by default
    RouteAction& operator=(RouteAction const&);
    RouteAction(RouteAction const&);
    RouteAction();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RouteAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
