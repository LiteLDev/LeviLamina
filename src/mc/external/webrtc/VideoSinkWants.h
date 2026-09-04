#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct VideoSinkWants {
public:
    // VideoSinkWants inner types declare
    // clang-format off
    struct Aggregates;
    struct FrameSize;
    // clang-format on

    // VideoSinkWants inner types define
    struct Aggregates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk335e49;
        // NOLINTEND

    public:
        // prevent constructor by default
        Aggregates& operator=(Aggregates const&);
        Aggregates(Aggregates const&);
        Aggregates();
    };

    struct FrameSize {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk308baf;
        ::ll::UntypedStorage<4, 4> mUnk99ee9d;
        // NOLINTEND

    public:
        // prevent constructor by default
        FrameSize& operator=(FrameSize const&);
        FrameSize(FrameSize const&);
        FrameSize();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb2cb74;
    ::ll::UntypedStorage<1, 1>  mUnkab33ef;
    ::ll::UntypedStorage<4, 4>  mUnk531fb4;
    ::ll::UntypedStorage<4, 8>  mUnk4bf417;
    ::ll::UntypedStorage<4, 4>  mUnk4bce8d;
    ::ll::UntypedStorage<4, 4>  mUnkfe6409;
    ::ll::UntypedStorage<8, 24> mUnkc43920;
    ::ll::UntypedStorage<4, 12> mUnk83fd3a;
    ::ll::UntypedStorage<1, 1>  mUnk6df75a;
    ::ll::UntypedStorage<1, 2>  mUnkfa15ee;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSinkWants();

    MCNAPI VideoSinkWants(::webrtc::VideoSinkWants const&);

    MCNAPI ::webrtc::VideoSinkWants& operator=(::webrtc::VideoSinkWants const&);

    MCNAPI ~VideoSinkWants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::VideoSinkWants const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
