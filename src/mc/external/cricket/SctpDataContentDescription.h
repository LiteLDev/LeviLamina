#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaContentDescription.h"
#include "mc/external/cricket/MediaType.h"

namespace cricket {

class SctpDataContentDescription : public ::cricket::MediaContentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke369ca;
    ::ll::UntypedStorage<4, 4> mUnkfb4e23;
    ::ll::UntypedStorage<4, 4> mUnkec9141;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpDataContentDescription& operator=(SctpDataContentDescription const&);
    SctpDataContentDescription(SctpDataContentDescription const&);
    SctpDataContentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cricket::MediaType type() const /*override*/;

    virtual ::cricket::SctpDataContentDescription* as_sctp() /*override*/;

    virtual ::cricket::SctpDataContentDescription const* as_sctp() const /*override*/;

    virtual bool has_codecs() const /*override*/;

    virtual void set_protocol(::std::string_view protocol) /*override*/;

    virtual ::cricket::SctpDataContentDescription* CloneInternal() const /*override*/;

    virtual ~SctpDataContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::MediaType $type() const;

    MCNAPI ::cricket::SctpDataContentDescription* $as_sctp();

    MCNAPI ::cricket::SctpDataContentDescription const* $as_sctp() const;

    MCNAPI bool $has_codecs() const;

    MCNAPI void $set_protocol(::std::string_view protocol);

    MCNAPI ::cricket::SctpDataContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
