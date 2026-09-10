#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class OnlineAudioTimingHistogram; }
// clang-format on

namespace Audio {

class IOnlineAudioFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOnlineAudioFetcher() = default;

    virtual void start() = 0;

    virtual void update(::std::chrono::steady_clock::time_point currentTime) = 0;

    virtual void notifyReadPosition(uint64 offset) = 0;

    virtual void seekTo(uint64 offset) = 0;

    virtual void stop() = 0;

    virtual void notifyPlaybackStarted() = 0;

    virtual bool isFetching() const = 0;

    virtual uint64 getNextFetchOffset() const = 0;

    virtual uint64 getTotalBytesRequested() const = 0;

    virtual uint getTotalRetries() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingBeforePlaybackHistogram() const = 0;

    virtual ::Audio::OnlineAudioTimingHistogram const& getRequestTimingAfterPlaybackHistogram() const = 0;
    // NOLINTEND
};

} // namespace Audio
