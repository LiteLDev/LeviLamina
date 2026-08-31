#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeregisterTagsFromActorProxy() /*override*/;

    virtual void deregisterTagsFromActor(::Actor& actor) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deregisterTagsFromActor(::Actor& actor);


    // NOLINTEND
};
