#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

class AudioSource {
public:
    // prevent constructor by default
    AudioSource& operator=(AudioSource const&);
    AudioSource(AudioSource const&);
    AudioSource();
};

} // namespace cricket
