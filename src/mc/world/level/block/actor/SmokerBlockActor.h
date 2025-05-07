#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class SmokerBlockActor : public ::FurnaceBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 0
    virtual ~SmokerBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForContainer();

    MCNAPI static void** $vftableForBlockActor();
    // NOLINTEND
};
