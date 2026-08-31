#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaContentDescription.h"
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class UnsupportedContentDescription : public ::webrtc::MediaContentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk263c21;
    // NOLINTEND

public:
    // prevent constructor by default
    UnsupportedContentDescription& operator=(UnsupportedContentDescription const&);
    UnsupportedContentDescription(UnsupportedContentDescription const&);
    UnsupportedContentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::MediaType type() const /*override*/;

    virtual ::webrtc::UnsupportedContentDescription const* as_unsupported() const /*override*/;

    virtual ::webrtc::UnsupportedContentDescription* as_unsupported() /*override*/;

    virtual bool has_codecs() const /*override*/;

    virtual ::webrtc::UnsupportedContentDescription* CloneInternal() const /*override*/;

    virtual ~UnsupportedContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaType $type() const;

    MCNAPI ::webrtc::UnsupportedContentDescription const* $as_unsupported() const;

    MCNAPI ::webrtc::UnsupportedContentDescription* $as_unsupported();

    MCNAPI bool $has_codecs() const;

    MCNAPI ::webrtc::UnsupportedContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
