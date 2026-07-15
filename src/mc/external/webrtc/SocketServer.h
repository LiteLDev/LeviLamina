#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Thread; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class SocketServer : public ::webrtc::SocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7207ad;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketServer& operator=(SocketServer const&);
    SocketServer(SocketServer const&);
    SocketServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetMessageQueue(::webrtc::Thread*);

    virtual bool Wait(::webrtc::TimeDelta max_wait_duration, bool process_io) = 0;

    virtual void WakeUp() = 0;

    virtual ~SocketServer() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetMessageQueue(::webrtc::Thread*);


    // NOLINTEND
};

} // namespace webrtc
