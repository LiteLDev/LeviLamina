#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateAllocationUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf10aac;
    ::ll::UntypedStorage<8, 8> mUnk2d33f3;
    ::ll::UntypedStorage<8, 8> mUnk411cbe;
    ::ll::UntypedStorage<8, 8> mUnk181c1a;
    ::ll::UntypedStorage<8, 8> mUnk8d3043;
    ::ll::UntypedStorage<8, 8> mUnkaf45d8;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateAllocationUpdate& operator=(BitrateAllocationUpdate const&);
    BitrateAllocationUpdate(BitrateAllocationUpdate const&);
    BitrateAllocationUpdate();

};

}
