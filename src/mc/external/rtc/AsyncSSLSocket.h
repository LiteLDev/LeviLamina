#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferedReadAdapter.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace rtc {

class AsyncSSLSocket : public ::rtc::BufferedReadAdapter {
public:
    // prevent constructor by default
    AsyncSSLSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual int Connect(::rtc::SocketAddress const& addr) /*override*/;

    // vIndex: 18
    virtual void OnConnectEvent(::rtc::Socket* socket) /*override*/;

    // vIndex: 22
    virtual void ProcessInput(char* data, uint64* len) /*override*/;

    // vIndex: 0
    virtual ~AsyncSSLSocket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsyncSSLSocket(::rtc::Socket* socket);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Socket* socket);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $Connect(::rtc::SocketAddress const& addr);

    MCNAPI void $OnConnectEvent(::rtc::Socket* socket);

    MCNAPI void $ProcessInput(char* data, uint64* len);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
