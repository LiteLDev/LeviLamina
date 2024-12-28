#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/cricket/RtpMediaContentDescription.h"

namespace cricket {

class VideoContentDescription : public ::cricket::RtpMediaContentDescription {
public:
    // prevent constructor by default
    VideoContentDescription& operator=(VideoContentDescription const&);
    VideoContentDescription(VideoContentDescription const&);
    VideoContentDescription();

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
    virtual ~VideoContentDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $set_protocol(::std::string_view);

    MCAPI ::cricket::MediaType $type() const;

    MCAPI ::cricket::VideoContentDescription* $as_video();

    MCAPI ::cricket::VideoContentDescription const* $as_video() const;

    MCAPI ::cricket::VideoContentDescription* $CloneInternal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
