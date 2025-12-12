#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;

    virtual ~BlastFurnaceBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
