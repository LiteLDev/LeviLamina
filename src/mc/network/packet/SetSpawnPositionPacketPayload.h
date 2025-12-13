#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetSpawnPositionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk5478a4;
    ::ll::UntypedStorage<4, 4>  mUnke83e11;
    ::ll::UntypedStorage<4, 4>  mUnk3a71ac;
    ::ll::UntypedStorage<4, 12> mUnkfaeee5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSpawnPositionPacketPayload& operator=(SetSpawnPositionPacketPayload const&);
    SetSpawnPositionPacketPayload(SetSpawnPositionPacketPayload const&);
    SetSpawnPositionPacketPayload();
};
