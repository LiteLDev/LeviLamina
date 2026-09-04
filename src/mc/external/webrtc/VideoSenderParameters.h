#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SenderParameters.h"

namespace webrtc {

struct VideoSenderParameters : public ::webrtc::SenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8c53e3;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoSenderParameters& operator=(VideoSenderParameters const&);
    VideoSenderParameters(VideoSenderParameters const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoSenderParameters() /*override*/;

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
