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
    virtual void set_protocol(::std::string_view protocol) /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::cricket::MediaType $type() const;

    MCNAPI ::cricket::VideoContentDescription* $as_video();

    MCNAPI ::cricket::VideoContentDescription const* $as_video() const;

    MCNAPI ::cricket::VideoContentDescription* $CloneInternal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
