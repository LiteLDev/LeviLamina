#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpHeaderExtensionCapability {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6a3206;
    ::ll::UntypedStorage<4, 8> mUnk171596;
    ::ll::UntypedStorage<1, 1> mUnke13f99;
    ::ll::UntypedStorage<4, 4> mUnk52cf04;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpHeaderExtensionCapability& operator=(RtpHeaderExtensionCapability const&);
    RtpHeaderExtensionCapability(RtpHeaderExtensionCapability const&);
    RtpHeaderExtensionCapability();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtpHeaderExtensionCapability(::std::string_view uri);

    MCNAPI RtpHeaderExtensionCapability(::std::string_view uri, int preferred_id);

    MCNAPI ~RtpHeaderExtensionCapability();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view uri);

    MCNAPI void* $ctor(::std::string_view uri, int preferred_id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
