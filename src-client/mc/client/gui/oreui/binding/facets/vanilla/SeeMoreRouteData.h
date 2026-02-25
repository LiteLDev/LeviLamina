#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct SeeMoreRouteData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> title;
    ::ll::TypedStorage<8, 32, ::std::string> pageId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SeeMoreRouteData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
