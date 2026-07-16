#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SocketServer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Dispatcher; }
namespace webrtc { class Socket; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class PhysicalSocketServer : public ::webrtc::SocketServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6ec854;
    ::ll::UntypedStorage<8, 64> mUnk674f21;
    ::ll::UntypedStorage<8, 64> mUnkae9a13;
    ::ll::UntypedStorage<8, 24> mUnk93b169;
    ::ll::UntypedStorage<8, 8>  mUnk1c1f41;
    ::ll::UntypedStorage<8, 40> mUnka10274;
    ::ll::UntypedStorage<8, 8>  mUnkac15cd;
    ::ll::UntypedStorage<1, 1>  mUnk8eccc7;
    ::ll::UntypedStorage<1, 1>  mUnke75485;
    // NOLINTEND

public:
    // prevent constructor by default
    PhysicalSocketServer& operator=(PhysicalSocketServer const&);
    PhysicalSocketServer(PhysicalSocketServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PhysicalSocketServer() /*override*/ = default;

    virtual ::webrtc::Socket* CreateSocket(int family, int type) /*override*/;

    virtual ::webrtc::Socket* WrapSocket(uint64 s);

    virtual bool Wait(::webrtc::TimeDelta max_wait_duration, bool process_io) /*override*/;

    virtual void WakeUp() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::Dispatcher* pdispatcher);

    MCNAPI PhysicalSocketServer();

    MCNAPI void Remove(::webrtc::Dispatcher* pdispatcher);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::Socket* $CreateSocket(int family, int type);

    MCNAPI ::webrtc::Socket* $WrapSocket(uint64 s);

    MCNAPI bool $Wait(::webrtc::TimeDelta max_wait_duration, bool process_io);

    MCNAPI void $WakeUp();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
