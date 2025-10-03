#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpEncodingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnke73a32;
    ::ll::UntypedStorage<8, 8>   mUnkd66622;
    ::ll::UntypedStorage<4, 4>   mUnk7fb196;
    ::ll::UntypedStorage<4, 8>   mUnk2ab41c;
    ::ll::UntypedStorage<4, 8>   mUnkcd700c;
    ::ll::UntypedStorage<8, 16>  mUnk9c0669;
    ::ll::UntypedStorage<4, 8>   mUnk4096b0;
    ::ll::UntypedStorage<8, 16>  mUnk1f81a5;
    ::ll::UntypedStorage<8, 40>  mUnke86cc9;
    ::ll::UntypedStorage<4, 12>  mUnk418029;
    ::ll::UntypedStorage<1, 1>   mUnkde5a68;
    ::ll::UntypedStorage<8, 32>  mUnk32ca03;
    ::ll::UntypedStorage<1, 1>   mUnkbfe0a3;
    ::ll::UntypedStorage<1, 1>   mUnke01a31;
    ::ll::UntypedStorage<8, 112> mUnk15a933;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpEncodingParameters& operator=(RtpEncodingParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpEncodingParameters();

    MCNAPI RtpEncodingParameters(::webrtc::RtpEncodingParameters const&);

    MCNAPI ~RtpEncodingParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtpEncodingParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
