#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class TCPPort {
public:
    // TCPPort inner types declare
    // clang-format off
    struct Incoming;
    // clang-format on

    // TCPPort inner types define
    struct Incoming {
    public:
        // prevent constructor by default
        Incoming& operator=(Incoming const&);
        Incoming(Incoming const&);
        Incoming();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Incoming();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TCPPort& operator=(TCPPort const&);
    TCPPort(TCPPort const&);
    TCPPort();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::AsyncPacketSocket* GetIncoming(::rtc::SocketAddress const&, bool);

    MCAPI void OnNewConnection(::rtc::AsyncListenSocket*, ::rtc::AsyncPacketSocket*);

    MCAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCAPI
    TCPPort(::rtc::Thread*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);

    MCAPI void TryCreateServerSocket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::Thread*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForPortInterface();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace cricket
