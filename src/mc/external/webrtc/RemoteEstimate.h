#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/App.h"

namespace webrtc::rtcp {

class RemoteEstimate : public ::webrtc::rtcp::App {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnka2c8a6;
    ::ll::UntypedStorage<8, 8>   mUnk268ea1;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoteEstimate& operator=(RemoteEstimate const&);
    RemoteEstimate(RemoteEstimate const&);
    RemoteEstimate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemoteEstimate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool ParseData();

    MCNAPI explicit RemoteEstimate(::webrtc::rtcp::App&& app);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::rtcp::App&& app);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
