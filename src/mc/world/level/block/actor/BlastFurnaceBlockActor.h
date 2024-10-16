#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // prevent constructor by default
    BlastFurnaceBlockActor& operator=(BlastFurnaceBlockActor const&);
    BlastFurnaceBlockActor(BlastFurnaceBlockActor const&);
    BlastFurnaceBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::string getName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBlockActor();

    MCAPI static void** vftableForContainer();

    MCAPI std::string getName$() const;

    // NOLINTEND
};
