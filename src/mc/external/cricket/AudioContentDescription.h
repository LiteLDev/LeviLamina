#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/cricket/RtpMediaContentDescription.h"

namespace cricket {

class AudioContentDescription : public ::cricket::RtpMediaContentDescription {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void set_protocol(::std::string_view protocol) /*override*/;

    virtual ::cricket::MediaType type() const /*override*/;

    virtual ::cricket::AudioContentDescription* as_audio() /*override*/;

    virtual ::cricket::AudioContentDescription const* as_audio() const /*override*/;

    virtual ::cricket::AudioContentDescription* CloneInternal() const /*override*/;

    virtual ~AudioContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::cricket::MediaType $type() const;

    MCNAPI ::cricket::AudioContentDescription* $as_audio();

    MCNAPI ::cricket::AudioContentDescription const* $as_audio() const;

    MCNAPI ::cricket::AudioContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
