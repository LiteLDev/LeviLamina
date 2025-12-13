#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetDifficultyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc697fb;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDifficultyPacketPayload& operator=(SetDifficultyPacketPayload const&);
    SetDifficultyPacketPayload(SetDifficultyPacketPayload const&);
    SetDifficultyPacketPayload();
};
