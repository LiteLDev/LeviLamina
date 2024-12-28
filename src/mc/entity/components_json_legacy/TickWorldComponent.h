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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickWorldComponent();

    MCAPI TickWorldComponent(::TickWorldComponent&& other);

    MCAPI uint getChunkRadius() const;

    MCAPI float getMaxDistToPlayers() const;

    MCAPI ::std::shared_ptr<::ITickingArea> getTickingArea();

    MCAPI bool hasTickingArea() const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI bool isAlwaysActive() const;

    MCAPI ::TickWorldComponent& operator=(::TickWorldComponent&& other);

    MCAPI void removeArea();

    MCAPI void setTickingArea(::Actor& owner, ::std::shared_ptr<::ITickingArea> tickingArea);

    MCAPI void updateArea(::Actor& owner);

    MCAPI ~TickWorldComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::TickWorldComponent&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
