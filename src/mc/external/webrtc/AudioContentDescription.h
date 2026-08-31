#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/RtpMediaContentDescription.h"

namespace webrtc {

class AudioContentDescription : public ::webrtc::RtpMediaContentDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void set_protocol(::std::string_view protocol) /*override*/;

    virtual ::webrtc::MediaType type() const /*override*/;

    virtual ::webrtc::AudioContentDescription const* as_audio() const /*override*/;

    virtual ::webrtc::AudioContentDescription* as_audio() /*override*/;

    virtual ::webrtc::AudioContentDescription* CloneInternal() const /*override*/;

    virtual ~AudioContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::webrtc::MediaType $type() const;

    MCNAPI ::webrtc::AudioContentDescription const* $as_audio() const;

    MCNAPI ::webrtc::AudioContentDescription* $as_audio();

    MCNAPI ::webrtc::AudioContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
