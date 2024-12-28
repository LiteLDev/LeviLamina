#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ReceivedPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk568ff4;
    ::ll::UntypedStorage<8, 8> mUnkaee992;
    ::ll::UntypedStorage<8, 8> mUnk7d15a7;
    // NOLINTEND

public:
    // prevent constructor by default
    ReceivedPacket& operator=(ReceivedPacket const&);
    ReceivedPacket(ReceivedPacket const&);
    ReceivedPacket();
};

} // namespace webrtc
