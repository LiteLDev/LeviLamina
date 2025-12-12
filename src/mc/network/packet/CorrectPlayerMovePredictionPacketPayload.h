#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CorrectPlayerMovePredictionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk20137a;
    ::ll::UntypedStorage<4, 12> mUnk961b4d;
    ::ll::UntypedStorage<4, 8>  mUnkdb8d70;
    ::ll::UntypedStorage<4, 8>  mUnk8393e5;
    ::ll::UntypedStorage<8, 8>  mUnk9a0b42;
    ::ll::UntypedStorage<1, 1>  mUnkbcbc65;
    ::ll::UntypedStorage<1, 1>  mUnk916d6d;
    // NOLINTEND

public:
    // prevent constructor by default
    CorrectPlayerMovePredictionPacketPayload& operator=(CorrectPlayerMovePredictionPacketPayload const&);
    CorrectPlayerMovePredictionPacketPayload(CorrectPlayerMovePredictionPacketPayload const&);
    CorrectPlayerMovePredictionPacketPayload();
};
