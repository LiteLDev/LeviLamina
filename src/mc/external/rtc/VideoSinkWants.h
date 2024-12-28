#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct VideoSinkWants {
public:
    // VideoSinkWants inner types declare
    // clang-format off
    struct Aggregates;
    struct FrameSize;
    // clang-format on

    // VideoSinkWants inner types define
    struct FrameSize {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk60a267;
        ::ll::UntypedStorage<4, 4> mUnk65ced0;
        // NOLINTEND

    public:
        // prevent constructor by default
        FrameSize& operator=(FrameSize const&);
        FrameSize(FrameSize const&);
        FrameSize();
    };

    struct Aggregates {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk81391a;
        // NOLINTEND

    public:
        // prevent constructor by default
        Aggregates& operator=(Aggregates const&);
        Aggregates(Aggregates const&);
        Aggregates();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk17125f;
    ::ll::UntypedStorage<1, 1>  mUnka58bae;
    ::ll::UntypedStorage<4, 4>  mUnk5ac72b;
    ::ll::UntypedStorage<4, 8>  mUnk681bd1;
    ::ll::UntypedStorage<4, 4>  mUnk86eeff;
    ::ll::UntypedStorage<4, 4>  mUnk32fe73;
    ::ll::UntypedStorage<8, 24> mUnkb6d0f2;
    ::ll::UntypedStorage<4, 12> mUnkeff28c;
    ::ll::UntypedStorage<1, 1>  mUnkea8620;
    ::ll::UntypedStorage<1, 2>  mUnk5b3606;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VideoSinkWants();

    MCAPI VideoSinkWants(::rtc::VideoSinkWants const&);

    MCAPI ::rtc::VideoSinkWants& operator=(::rtc::VideoSinkWants const&);

    MCAPI ~VideoSinkWants();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::rtc::VideoSinkWants const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
