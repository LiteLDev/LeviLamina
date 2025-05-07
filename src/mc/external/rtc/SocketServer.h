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
    // vIndex: 2
    virtual void SetMessageQueue(::rtc::Thread*);

    // vIndex: 3
    virtual bool Wait(::webrtc::TimeDelta, bool) = 0;

    // vIndex: 4
    virtual void WakeUp() = 0;

    // vIndex: 0
    virtual ~SocketServer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
