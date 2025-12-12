#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

struct SetHudPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HudElement>> mHudElement;
    ::ll::TypedStorage<4, 4, ::HudVisibility>              mHudVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    SetHudPacketPayload& operator=(SetHudPacketPayload const&);
    SetHudPacketPayload(SetHudPacketPayload const&);
    SetHudPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SetHudPacketPayload& operator=(::SetHudPacketPayload&&);

    MCAPI ~SetHudPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
