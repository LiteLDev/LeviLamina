#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/cricket/RtpMediaContentDescription.h"

namespace cricket {

class VideoContentDescription : public ::cricket::RtpMediaContentDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual void set_protocol(::std::string_view) /*override*/;

    // vIndex: 1
    virtual ::cricket::MediaType type() const /*override*/;

    // vIndex: 5
    virtual ::cricket::VideoContentDescription* as_video() /*override*/;

    // vIndex: 4
    virtual ::cricket::VideoContentDescription const* as_video() const /*override*/;

    // vIndex: 12
    virtual ::cricket::VideoContentDescription* CloneInternal() const /*override*/;

    // vIndex: 0
    virtual ~VideoContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
