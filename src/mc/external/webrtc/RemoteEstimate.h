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
    // vIndex: 0
    virtual ~RemoteEstimate() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool ParseData();

    MCAPI explicit RemoteEstimate(::webrtc::rtcp::App&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::rtcp::App&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
