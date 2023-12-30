#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class SocketFactory {
public:
    // prevent constructor by default
    SocketFactory& operator=(SocketFactory const&);
    SocketFactory(SocketFactory const&);
    SocketFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SocketFactory@rtc@@UEAA@XZ
    virtual ~SocketFactory() = default;

    // vIndex: 1, symbol: ?CreateSocket@NullSocketServer@rtc@@UEAAPEAVSocket@2@HH@Z
    virtual class rtc::Socket* CreateSocket(int, int) = 0;

    // vIndex: 2, symbol: ?SetMessageQueue@SocketServer@rtc@@UEAAXPEAVThread@2@@Z
    virtual void SetMessageQueue(class rtc::Thread*);

    // NOLINTEND
};

}; // namespace rtc
