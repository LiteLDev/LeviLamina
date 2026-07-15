#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class PotentSulfurBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mNextEruptionActiveSoundTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
