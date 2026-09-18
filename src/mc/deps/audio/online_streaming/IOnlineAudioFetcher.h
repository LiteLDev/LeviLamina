#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class IOnlineAudioFetcherUpdateHandle; }
namespace Audio { struct OnlineAudioFetcherSnapshot; }
// clang-format on

namespace Audio {

class IOnlineAudioFetcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOnlineAudioFetcher() = default;

    virtual void start() = 0;

    virtual void seekTo(uint64 offset) = 0;

    virtual void stop() = 0;

    virtual void notifyPlaybackStarted() = 0;

    virtual ::Audio::OnlineAudioFetcherSnapshot getSnapshot() const = 0;

    virtual ::std::shared_ptr<::Audio::IOnlineAudioFetcherUpdateHandle> getUpdateHandle() = 0;
    // NOLINTEND
};

} // namespace Audio
