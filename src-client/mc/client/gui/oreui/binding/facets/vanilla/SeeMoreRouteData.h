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
    // prevent constructor by default
    SeeMoreRouteData& operator=(SeeMoreRouteData const&);
    SeeMoreRouteData(SeeMoreRouteData const&);
    SeeMoreRouteData();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::OreUI::SeeMoreRouteData& operator=(::OreUI::SeeMoreRouteData&&);

    MCAPI ~SeeMoreRouteData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
