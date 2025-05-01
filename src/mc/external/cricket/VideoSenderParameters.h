#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/SenderParameters.h"

namespace cricket {

struct VideoSenderParameters : public ::cricket::SenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk38cf50;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSenderParameters& operator=(VideoSenderParameters const&);
    VideoSenderParameters(VideoSenderParameters const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VideoSenderParameters() /*override*/ = default;

    // vIndex: 1
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoSenderParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
