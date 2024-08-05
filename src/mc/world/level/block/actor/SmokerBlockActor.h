#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

class SmokerBlockActor : public ::FurnaceBlockActor {
public:
    // prevent constructor by default
    SmokerBlockActor& operator=(SmokerBlockActor const&);
    SmokerBlockActor(SmokerBlockActor const&);
    SmokerBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::string getName() const;

    MCAPI explicit SmokerBlockActor(class BlockPos const& blockPos);

    // NOLINTEND
};
