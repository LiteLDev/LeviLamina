#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RtpMediaContentDescription.h"

namespace webrtc {

class VideoContentDescription : public ::webrtc::RtpMediaContentDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void set_protocol(::std::string_view protocol) /*override*/;

    virtual ::webrtc::MediaType type() const /*override*/;

    virtual ::webrtc::VideoContentDescription const* as_video() const /*override*/;

    virtual ::webrtc::VideoContentDescription* as_video() /*override*/;

    virtual ::webrtc::VideoContentDescription* CloneInternal() const /*override*/;

    virtual ~VideoContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::webrtc::MediaType $type() const;

    MCNAPI ::webrtc::VideoContentDescription const* $as_video() const;

    MCNAPI ::webrtc::VideoContentDescription* $as_video();

    MCNAPI ::webrtc::VideoContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
