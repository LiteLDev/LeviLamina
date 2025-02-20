#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnFireComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk86dc6c;
    ::ll::UntypedStorage<1, 1> mUnkf4f992;
    // NOLINTEND

public:
    // prevent constructor by default
    OnFireComponent& operator=(OnFireComponent const&);
    OnFireComponent(OnFireComponent const&);
    OnFireComponent();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& LEGACY_FIRE_TAG();

    MCAPI static ::std::string const& ON_FIRE_TAG();
    // NOLINTEND
};
