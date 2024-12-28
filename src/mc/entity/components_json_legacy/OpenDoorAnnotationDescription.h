#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

struct OpenDoorAnnotationDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    OpenDoorAnnotationDescription& operator=(OpenDoorAnnotationDescription const&);
    OpenDoorAnnotationDescription(OpenDoorAnnotationDescription const&);
    OpenDoorAnnotationDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 1
    virtual ~OpenDoorAnnotationDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
