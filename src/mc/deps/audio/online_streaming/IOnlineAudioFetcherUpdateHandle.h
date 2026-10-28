#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Audio { struct OnlineAudioFetcherUpdateInput; }
namespace Audio { struct OnlineAudioFetcherUpdateOutput; }
// clang-format on

namespace Audio {

class IOnlineAudioFetcherUpdateHandle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOnlineAudioFetcherUpdateHandle() = default;

    virtual ::Audio::OnlineAudioFetcherUpdateOutput update(
        ::std::chrono::steady_clock::time_point       currentTime,
        ::Audio::OnlineAudioFetcherUpdateInput const& input
    ) = 0;
    // NOLINTEND
};

} // namespace Audio
