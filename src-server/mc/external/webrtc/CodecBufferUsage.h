#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CodecBufferUsage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke92575;
    ::ll::UntypedStorage<1, 1> mUnk7d16e2;
    ::ll::UntypedStorage<1, 1> mUnka92cd6;
    // NOLINTEND

public:
    // prevent constructor by default
    CodecBufferUsage& operator=(CodecBufferUsage const&);
    CodecBufferUsage(CodecBufferUsage const&);
    CodecBufferUsage();

};

}
