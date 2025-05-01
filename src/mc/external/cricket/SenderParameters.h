#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaChannelParameters.h"

namespace cricket {

struct SenderParameters : public ::cricket::MediaChannelParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6eaec3;
    ::ll::UntypedStorage<8, 32> mUnka5b48c;
    ::ll::UntypedStorage<1, 1>  mUnkce4355;
    // NOLINTEND

public:
    // prevent constructor by default
    SenderParameters& operator=(SenderParameters const&);
    SenderParameters(SenderParameters const&);
    SenderParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;

    // vIndex: 0
    virtual ~SenderParameters() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
