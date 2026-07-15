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
    ::ll::TypedStorage<4, 4, uint>                             mChunkRadius;
    ::ll::TypedStorage<4, 4, float>                            mMaxDistToPlayers;
    ::ll::TypedStorage<1, 1, bool>                             mAlwaysActive;
    ::ll::TypedStorage<1, 1, bool>                             mChanged;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITickingArea>> mTickingArea;
    // NOLINTEND

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
