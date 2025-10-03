#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecSpecificInfoH264 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk192a25;
    ::ll::UntypedStorage<1, 1> mUnk18603f;
    ::ll::UntypedStorage<1, 1> mUnk4e5ab4;
    ::ll::UntypedStorage<1, 1> mUnk2367df;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecSpecificInfoH264& operator=(CodecSpecificInfoH264 const&);
    CodecSpecificInfoH264(CodecSpecificInfoH264 const&);
    CodecSpecificInfoH264();
};

} // namespace webrtc
