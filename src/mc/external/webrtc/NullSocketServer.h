#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Socket; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class NullSocketServer : public ::webrtc::SocketServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk196cf1;
    // NOLINTEND

public:
    // prevent constructor by default
    NullSocketServer& operator=(NullSocketServer const&);
    NullSocketServer(NullSocketServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSocketServer() /*override*/ = default;

    virtual bool Wait(::webrtc::TimeDelta max_wait_duration, bool) /*override*/;

    virtual void WakeUp() /*override*/;

    virtual ::webrtc::Socket* CreateSocket(int, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NullSocketServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Wait(::webrtc::TimeDelta max_wait_duration, bool);

    MCNAPI void $WakeUp();

    MCNAPI ::webrtc::Socket* $CreateSocket(int, int);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
