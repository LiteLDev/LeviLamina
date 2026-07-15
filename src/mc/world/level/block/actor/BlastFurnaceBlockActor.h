#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
