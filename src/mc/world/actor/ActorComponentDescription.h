#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Description.h"

struct ActorComponentDescription : public ::Description {
public:
    // prevent constructor by default
    ActorComponentDescription& operator=(ActorComponentDescription const&);
    ActorComponentDescription(ActorComponentDescription const&);
    ActorComponentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~ActorComponentDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
