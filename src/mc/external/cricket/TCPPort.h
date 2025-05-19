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
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Incoming();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    TCPPort();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::AsyncPacketSocket* GetIncoming(::rtc::SocketAddress const&, bool);

    MCNAPI void OnNewConnection(::rtc::AsyncListenSocket*, ::rtc::AsyncPacketSocket*);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCNAPI TCPPort(
        ::rtc::Thread*,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ushort,
        ushort,
        ::std::string_view,
        ::std::string_view,
        bool,
        ::webrtc::FieldTrialsView const*
    );

    MCNAPI void TryCreateServerSocket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ushort,
        ushort,
        ::std::string_view,
        ::std::string_view,
        bool,
        ::webrtc::FieldTrialsView const*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace cricket
