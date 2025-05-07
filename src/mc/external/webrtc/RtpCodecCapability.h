#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpCodec.h"

namespace webrtc {

struct RtpCodecCapability : public ::webrtc::RtpCodec {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk5fda99;
    ::ll::UntypedStorage<8, 48> mUnk490082;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpCodecCapability& operator=(RtpCodecCapability const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtpCodecCapability() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpCodecCapability();

    MCNAPI RtpCodecCapability(::webrtc::RtpCodecCapability const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::RtpCodecCapability const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
