#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StaticPayloadAudioCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk395d95;
    ::ll::UntypedStorage<4, 4> mUnkf0ab08;
    ::ll::UntypedStorage<8, 8> mUnkdb9eb6;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticPayloadAudioCodec& operator=(StaticPayloadAudioCodec const&);
    StaticPayloadAudioCodec(StaticPayloadAudioCodec const&);
    StaticPayloadAudioCodec();
};

} // namespace webrtc
