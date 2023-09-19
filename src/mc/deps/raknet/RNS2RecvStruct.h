#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2RecvStruct {
public:
    // prevent constructor by default
    RNS2RecvStruct& operator=(RNS2RecvStruct const&);
    RNS2RecvStruct(RNS2RecvStruct const&);
    RNS2RecvStruct();
};

}; // namespace RakNet
