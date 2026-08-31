#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaContentDescription.h"
#include "mc/external/webrtc/MediaType.h"

namespace webrtc {

class SctpDataContentDescription : public ::webrtc::MediaContentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd4b697;
    ::ll::UntypedStorage<4, 4> mUnk49eb35;
    ::ll::UntypedStorage<4, 4> mUnke8d6a7;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpDataContentDescription& operator=(SctpDataContentDescription const&);
    SctpDataContentDescription(SctpDataContentDescription const&);
    SctpDataContentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::MediaType type() const /*override*/;

    virtual ::webrtc::SctpDataContentDescription const* as_sctp() const /*override*/;

    virtual ::webrtc::SctpDataContentDescription* as_sctp() /*override*/;

    virtual bool has_codecs() const /*override*/;

    virtual void set_protocol(::std::string_view protocol) /*override*/;

    virtual ::webrtc::SctpDataContentDescription* CloneInternal() const /*override*/;

    virtual ~SctpDataContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::MediaType $type() const;

    MCNAPI ::webrtc::SctpDataContentDescription const* $as_sctp() const;

    MCNAPI ::webrtc::SctpDataContentDescription* $as_sctp();

    MCNAPI bool $has_codecs() const;

    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::webrtc::SctpDataContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
