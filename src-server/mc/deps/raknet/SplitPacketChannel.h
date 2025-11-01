#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SplitPacketChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc30349;
    ::ll::UntypedStorage<8, 24> mUnkf5877e;
    ::ll::UntypedStorage<8, 8> mUnkd3a32a;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitPacketChannel& operator=(SplitPacketChannel const&);
    SplitPacketChannel(SplitPacketChannel const&);
    SplitPacketChannel();

};

}
