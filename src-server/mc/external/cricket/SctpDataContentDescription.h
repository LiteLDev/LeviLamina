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
    // vIndex: 1
    virtual ::cricket::MediaType type() const /*override*/;

    // vIndex: 7
    virtual ::cricket::SctpDataContentDescription* as_sctp() /*override*/;

    // vIndex: 6
    virtual ::cricket::SctpDataContentDescription const* as_sctp() const /*override*/;

    // vIndex: 11
    virtual bool has_codecs() const /*override*/;

    // vIndex: 10
    virtual void set_protocol(::std::string_view protocol) /*override*/;

    // vIndex: 12
    virtual ::cricket::SctpDataContentDescription* CloneInternal() const /*override*/;

    // vIndex: 0
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

}
