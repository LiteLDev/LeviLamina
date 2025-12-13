#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShowCreditsPacketPayload {
public:
    // ShowCreditsPacketPayload inner types define
    enum class CreditsState : int {
        Start    = 0,
        Finished = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk50cea0;
    ::ll::UntypedStorage<4, 4> mUnke1dfb9;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowCreditsPacketPayload& operator=(ShowCreditsPacketPayload const&);
    ShowCreditsPacketPayload(ShowCreditsPacketPayload const&);
    ShowCreditsPacketPayload();
};
