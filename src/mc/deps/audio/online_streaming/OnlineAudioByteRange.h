#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

struct OnlineAudioByteRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk64c510;
    ::ll::UntypedStorage<8, 8> mUnkeb53ca;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioByteRange& operator=(OnlineAudioByteRange const&);
    OnlineAudioByteRange(OnlineAudioByteRange const&);
    OnlineAudioByteRange();
};

} // namespace Audio
