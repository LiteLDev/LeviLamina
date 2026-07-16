#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaChannelParameters.h"

namespace webrtc {

struct SenderParameters : public ::webrtc::MediaChannelParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd975b8;
    ::ll::UntypedStorage<1, 1> mUnk298d44;
    // NOLINTEND

public:
    // prevent constructor by default
    SenderParameters& operator=(SenderParameters const&);
    SenderParameters(SenderParameters const&);
    SenderParameters();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;

    virtual ~SenderParameters() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::map<::std::string, ::std::string> $ToStringMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
