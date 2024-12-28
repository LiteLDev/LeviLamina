#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/cricket/RtpMediaContentDescription.h"

namespace cricket {

class AudioContentDescription : public ::cricket::RtpMediaContentDescription {
public:
    // prevent constructor by default
    AudioContentDescription& operator=(AudioContentDescription const&);
    AudioContentDescription(AudioContentDescription const&);
    AudioContentDescription();

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
    virtual ~AudioContentDescription() /*override*/;
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

    MCAPI ::cricket::AudioContentDescription* $as_audio();

    MCAPI ::cricket::AudioContentDescription const* $as_audio() const;

    MCAPI ::cricket::AudioContentDescription* $CloneInternal() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
