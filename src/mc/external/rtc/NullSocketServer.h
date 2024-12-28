#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class NullSocketServer : public ::rtc::SocketServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka44e7a;
    // NOLINTEND

public:
    // prevent constructor by default
    NullSocketServer& operator=(NullSocketServer const&);
    NullSocketServer(NullSocketServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSocketServer() /*override*/;

    // vIndex: 3
    virtual bool Wait(::webrtc::TimeDelta, bool) /*override*/;

    // vIndex: 4
    virtual void WakeUp() /*override*/;

    // vIndex: 1
    virtual ::rtc::Socket* CreateSocket(int, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NullSocketServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $Wait(::webrtc::TimeDelta, bool);

    MCAPI void $WakeUp();

    MCAPI ::rtc::Socket* $CreateSocket(int, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
