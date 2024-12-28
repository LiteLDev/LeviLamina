#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class Port; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class ReceivedPacket; }
// clang-format on

namespace cricket {

class TCPConnection {
public:
    // prevent constructor by default
    TCPConnection& operator=(TCPConnection const&);
    TCPConnection(TCPConnection const&);
    TCPConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ConnectSocketSignals(::rtc::AsyncPacketSocket*);

    MCAPI void CreateOutgoingTcpSocket();

    MCAPI void DisconnectSocketSignals(::rtc::AsyncPacketSocket*);

    MCAPI void MaybeReconnect();

    MCAPI void OnClose(::rtc::AsyncPacketSocket*, int);

    MCAPI void OnConnect(::rtc::AsyncPacketSocket*);

    MCAPI void OnDestroyed(::cricket::Connection*);

    MCAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCAPI TCPConnection(::rtc::WeakPtr<::cricket::Port>, ::cricket::Candidate const&, ::rtc::AsyncPacketSocket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::WeakPtr<::cricket::Port>, ::cricket::Candidate const&, ::rtc::AsyncPacketSocket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForConnection();
    // NOLINTEND
};

} // namespace cricket
