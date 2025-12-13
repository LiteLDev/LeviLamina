#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SocketFactory.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class SocketServer : public ::rtc::SocketFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf76095;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketServer& operator=(SocketServer const&);
    SocketServer(SocketServer const&);
    SocketServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetMessageQueue(::rtc::Thread* queue);

    virtual bool Wait(::webrtc::TimeDelta, bool) = 0;

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
    MCNAPI void $SetMessageQueue(::rtc::Thread* queue);


    // NOLINTEND
};

} // namespace rtc
