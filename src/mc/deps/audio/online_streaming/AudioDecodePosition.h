#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct AudioDecodePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbbf2e8;
    ::ll::UntypedStorage<4, 4> mUnk27ac45;
    ::ll::UntypedStorage<4, 4> mUnkd9dcf6;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioDecodePosition& operator=(AudioDecodePosition const&);
    AudioDecodePosition(AudioDecodePosition const&);
    AudioDecodePosition();
};

} // namespace Audio
