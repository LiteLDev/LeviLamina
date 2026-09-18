#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class OnlineAudioFetcherUpdater {
public:
    // OnlineAudioFetcherUpdater inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // OnlineAudioFetcherUpdater inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk200990;
        ::ll::UntypedStorage<8, 16> mUnk4ed64b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk80ea89;
    ::ll::UntypedStorage<8, 24> mUnkdd3545;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioFetcherUpdater& operator=(OnlineAudioFetcherUpdater const&);
    OnlineAudioFetcherUpdater(OnlineAudioFetcherUpdater const&);
    OnlineAudioFetcherUpdater();
};

} // namespace Audio
