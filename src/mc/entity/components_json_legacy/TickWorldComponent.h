#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ITickingArea;
// clang-format on

class TickWorldComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk24ecfb;
    ::ll::UntypedStorage<4, 4>  mUnk2dac6c;
    ::ll::UntypedStorage<1, 1>  mUnkb86528;
    ::ll::UntypedStorage<1, 1>  mUnk46359c;
    ::ll::UntypedStorage<8, 16> mUnk75da0b;
    // NOLINTEND

public:
    // prevent constructor by default
    TickWorldComponent& operator=(TickWorldComponent const&);
    TickWorldComponent(TickWorldComponent const&);
    TickWorldComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void removeArea();

    MCAPI void setTickingArea(::Actor& owner, ::std::shared_ptr<::ITickingArea> tickingArea);

    MCAPI void updateArea(::Actor& owner);

    MCAPI ~TickWorldComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
