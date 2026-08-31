#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpStreamConfig {
public:
    // RtpStreamConfig inner types declare
    // clang-format off
    struct Rtx;
    // clang-format on

    // RtpStreamConfig inner types define
    struct Rtx {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3ae5c4;
        ::ll::UntypedStorage<4, 4> mUnk75289d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Rtx& operator=(Rtx const&);
        Rtx(Rtx const&);
        Rtx();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9b1bf0;
    ::ll::UntypedStorage<8, 32> mUnk805f60;
    ::ll::UntypedStorage<8, 32> mUnk81b74a;
    ::ll::UntypedStorage<4, 4>  mUnk5fd306;
    ::ll::UntypedStorage<1, 1>  mUnkdfd9ac;
    ::ll::UntypedStorage<4, 12> mUnk7178de;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpStreamConfig& operator=(RtpStreamConfig const&);
    RtpStreamConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpStreamConfig(::webrtc::RtpStreamConfig const&);

    MCNAPI ~RtpStreamConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpStreamConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
