#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class IOnlineAudioFetcherUpdateHandle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOnlineAudioFetcherUpdateHandle() = default;

    virtual void update(::std::chrono::steady_clock::time_point currentTime, uint64 decoderReadPosition) = 0;
    // NOLINTEND
};

} // namespace Audio
