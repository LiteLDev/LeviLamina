#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSMapState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbb5269;
    ::ll::UntypedStorage<8, 16> mUnkd9ff62;
    ::ll::UntypedStorage<4, 4>  mUnk782009;
    ::ll::UntypedStorage<8, 8>  mUnk893d69;
    ::ll::UntypedStorage<4, 4>  mUnkd934b7;
    ::ll::UntypedStorage<4, 4>  mUnk510183;
    ::ll::UntypedStorage<4, 4>  mUnkb3a303;
    ::ll::UntypedStorage<8, 24> mUnk51fe45;
    // NOLINTEND

public:
    // prevent constructor by default
    JSMapState& operator=(JSMapState const&);
    JSMapState(JSMapState const&);
    JSMapState();
};
