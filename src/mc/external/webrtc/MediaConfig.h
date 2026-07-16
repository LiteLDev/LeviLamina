#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct MediaConfig {
public:
    // MediaConfig inner types declare
    // clang-format off
    struct Audio;
    struct Video;
    // clang-format on

    // MediaConfig inner types define
    struct Audio {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkab5fdc;
        // NOLINTEND

    public:
        // prevent constructor by default
        Audio& operator=(Audio const&);
        Audio(Audio const&);
        Audio();
    };

    struct Video {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf3bcaa;
        ::ll::UntypedStorage<1, 1> mUnk807670;
        ::ll::UntypedStorage<1, 1> mUnk96316e;
        ::ll::UntypedStorage<1, 1> mUnkc3ae8c;
        ::ll::UntypedStorage<1, 1> mUnk9a841f;
        ::ll::UntypedStorage<4, 4> mUnk6eb573;
        ::ll::UntypedStorage<1, 1> mUnk301938;
        // NOLINTEND

    public:
        // prevent constructor by default
        Video& operator=(Video const&);
        Video(Video const&);
        Video();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4653af;
    ::ll::UntypedStorage<1, 1>  mUnk2227b0;
    ::ll::UntypedStorage<4, 16> mUnk606ff4;
    ::ll::UntypedStorage<4, 4>  mUnk3b8dc7;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaConfig& operator=(MediaConfig const&);
    MediaConfig(MediaConfig const&);
    MediaConfig();
};

} // namespace webrtc
