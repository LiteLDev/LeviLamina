#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct MediaConfig {
public:
    // MediaConfig inner types declare
    // clang-format off
    struct Audio;
    struct Video;
    // clang-format on

    // MediaConfig inner types define
    struct Video {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkf89b87;
        ::ll::UntypedStorage<1, 1> mUnk3c198a;
        ::ll::UntypedStorage<1, 1> mUnk9a7125;
        ::ll::UntypedStorage<1, 1> mUnk3c765d;
        ::ll::UntypedStorage<1, 1> mUnk8f7845;
        ::ll::UntypedStorage<4, 4> mUnk206b74;
        ::ll::UntypedStorage<1, 1> mUnk9e67ad;
        // NOLINTEND

    public:
        // prevent constructor by default
        Video& operator=(Video const&);
        Video(Video const&);
        Video();
    };

    struct Audio {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk7162c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Audio& operator=(Audio const&);
        Audio(Audio const&);
        Audio();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfe417c;
    ::ll::UntypedStorage<4, 16> mUnk4cc3c3;
    ::ll::UntypedStorage<4, 4>  mUnk4396c3;
    // NOLINTEND

public:
    // prevent constructor by default
    MediaConfig& operator=(MediaConfig const&);
    MediaConfig(MediaConfig const&);
    MediaConfig();
};

} // namespace cricket
