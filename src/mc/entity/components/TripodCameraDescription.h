#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

class TripodCameraDescription : public ::ActorComponentDescription {
public:
    // prevent constructor by default
    TripodCameraDescription& operator=(TripodCameraDescription const&);
    TripodCameraDescription(TripodCameraDescription const&);
    TripodCameraDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~TripodCameraDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
