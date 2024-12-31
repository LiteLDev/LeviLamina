#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
namespace sigslot { class single_threaded; }
// clang-format on

namespace rtc {

class AsyncListenSocket : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // AsyncListenSocket inner types define
    enum class State : int {
        KClosed = 0,
        KBound  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc96822;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncListenSocket& operator=(AsyncListenSocket const&);
    AsyncListenSocket(AsyncListenSocket const&);
    AsyncListenSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::rtc::AsyncListenSocket::State GetState() const = 0;

    // vIndex: 2
    virtual ::rtc::SocketAddress GetLocalAddress() const = 0;

    // vIndex: 0
    virtual ~AsyncListenSocket() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
