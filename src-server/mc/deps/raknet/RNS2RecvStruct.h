#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RNS2RecvStruct {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1600> mUnk32bfe3;
    ::ll::UntypedStorage<4, 4> mUnk475ecf;
    ::ll::UntypedStorage<8, 136> mUnk74fa55;
    ::ll::UntypedStorage<8, 8> mUnkf7b14d;
    ::ll::UntypedStorage<8, 8> mUnk209b03;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2RecvStruct& operator=(RNS2RecvStruct const&);
    RNS2RecvStruct(RNS2RecvStruct const&);
    RNS2RecvStruct();

};

}
