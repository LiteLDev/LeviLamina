#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpCodec.h"

namespace webrtc {

struct RtpCodecParameters : public ::webrtc::RtpCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkca697c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpCodecParameters& operator=(RtpCodecParameters const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpCodecParameters() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpCodecParameters();

    MCNAPI RtpCodecParameters(::webrtc::RtpCodecParameters const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtpCodecParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
