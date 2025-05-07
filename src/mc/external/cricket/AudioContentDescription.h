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
    // vIndex: 10
    virtual void set_protocol(::std::string_view) /*override*/;

    // vIndex: 1
    virtual ::cricket::MediaType type() const /*override*/;

    // vIndex: 3
    virtual ::cricket::AudioContentDescription* as_audio() /*override*/;

    // vIndex: 2
    virtual ::cricket::AudioContentDescription const* as_audio() const /*override*/;

    // vIndex: 12
    virtual ::cricket::AudioContentDescription* CloneInternal() const /*override*/;

    // vIndex: 0
    virtual ~AudioContentDescription() /*override*/ = default;
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
