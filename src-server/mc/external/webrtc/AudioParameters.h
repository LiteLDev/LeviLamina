#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class AudioParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2ab95f;
    ::ll::UntypedStorage<8, 8> mUnk4e20da;
    ::ll::UntypedStorage<8, 8> mUnkb81f72;
    ::ll::UntypedStorage<8, 8> mUnk31ca9f;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioParameters& operator=(AudioParameters const&);
    AudioParameters(AudioParameters const&);
    AudioParameters();

};

}
