#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnExperienceOrbPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1f3269;
    ::ll::UntypedStorage<4, 4>  mUnk76f054;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnExperienceOrbPacketPayload& operator=(SpawnExperienceOrbPacketPayload const&);
    SpawnExperienceOrbPacketPayload(SpawnExperienceOrbPacketPayload const&);
    SpawnExperienceOrbPacketPayload();
};
