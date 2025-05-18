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
    TCPConnection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ConnectSocketSignals(::rtc::AsyncPacketSocket*);

    MCNAPI void CreateOutgoingTcpSocket();

    MCNAPI void DisconnectSocketSignals(::rtc::AsyncPacketSocket*);

    MCNAPI void MaybeReconnect();

    MCNAPI void OnClose(::rtc::AsyncPacketSocket*, int);

    MCNAPI void OnConnect(::rtc::AsyncPacketSocket*);

    MCNAPI void OnDestroyed(::cricket::Connection*);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCNAPI TCPConnection(::rtc::WeakPtr<::cricket::Port>, ::cricket::Candidate const&, ::rtc::AsyncPacketSocket*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::WeakPtr<::cricket::Port>, ::cricket::Candidate const&, ::rtc::AsyncPacketSocket*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForConnection();
    // NOLINTEND
};

} // namespace cricket
