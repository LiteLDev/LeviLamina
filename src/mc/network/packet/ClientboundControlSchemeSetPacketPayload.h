#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ClientboundControlSchemeSetPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ControlScheme::Scheme> mControlScheme;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundControlSchemeSetPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientboundControlSchemeSetPacketPayload(::ControlScheme::Scheme scheme);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ControlScheme::Scheme scheme);
    // NOLINTEND
};
