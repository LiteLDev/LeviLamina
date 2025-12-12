#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaContentDescription.h"
#include "mc/external/cricket/MediaType.h"

namespace cricket {

class UnsupportedContentDescription : public ::cricket::MediaContentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke02318;
    // NOLINTEND

public:
    // prevent constructor by default
    UnsupportedContentDescription& operator=(UnsupportedContentDescription const&);
    UnsupportedContentDescription(UnsupportedContentDescription const&);
    UnsupportedContentDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cricket::MediaType type() const /*override*/;

    virtual ::cricket::UnsupportedContentDescription* as_unsupported() /*override*/;

    virtual ::cricket::UnsupportedContentDescription const* as_unsupported() const /*override*/;

    virtual bool has_codecs() const /*override*/;

    virtual ::cricket::UnsupportedContentDescription* CloneInternal() const /*override*/;

    virtual ~UnsupportedContentDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::MediaType $type() const;

    MCNAPI ::cricket::UnsupportedContentDescription* $as_unsupported();

    MCNAPI ::cricket::UnsupportedContentDescription const* $as_unsupported() const;

    MCNAPI bool $has_codecs() const;

    MCNAPI ::cricket::UnsupportedContentDescription* $CloneInternal() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
