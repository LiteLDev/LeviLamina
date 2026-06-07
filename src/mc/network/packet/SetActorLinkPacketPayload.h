#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorLink.h"

struct SetActorLinkPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::ActorLink> mLink;
    // NOLINTEND

public:
    // prevent constructor by default
    SetActorLinkPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SetActorLinkPacketPayload(::ActorLink const& link);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ActorLink const& link);
    // NOLINTEND
};
