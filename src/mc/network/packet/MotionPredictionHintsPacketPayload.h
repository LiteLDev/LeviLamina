#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MotionPredictionHintsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk393a31;
    ::ll::UntypedStorage<4, 12> mUnk2943a6;
    ::ll::UntypedStorage<1, 1>  mUnk44f729;
    // NOLINTEND

public:
    // prevent constructor by default
    MotionPredictionHintsPacketPayload& operator=(MotionPredictionHintsPacketPayload const&);
    MotionPredictionHintsPacketPayload(MotionPredictionHintsPacketPayload const&);
    MotionPredictionHintsPacketPayload();
};
