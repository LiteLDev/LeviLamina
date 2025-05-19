#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunRequest; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class UDPPort {
public:
    // UDPPort inner types declare
    // clang-format off
    class AddressResolver;
    // clang-format on

    // UDPPort inner types define
    class AddressResolver {
    public:
        // prevent constructor by default
        AddressResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AddressResolver(::rtc::PacketSocketFactory*, ::std::function<void(::rtc::SocketAddress const&, int)>);

        MCNAPI bool GetResolvedAddress(::rtc::SocketAddress const&, int, ::rtc::SocketAddress*) const;

        MCNAPI void Resolve(::rtc::SocketAddress const&, int, ::webrtc::FieldTrialsView const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::rtc::PacketSocketFactory*, ::std::function<void(::rtc::SocketAddress const&, int)>);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    UDPPort();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasStunCandidateWithAddress(::rtc::SocketAddress const&) const;

    MCNAPI bool Init();

    MCNAPI void MaybePrepareStunCandidate();

    MCNAPI bool MaybeSetDefaultLocalAddress(::rtc::SocketAddress*) const;

    MCNAPI void MaybeSetPortCompleteOrError();

    MCNAPI void OnLocalAddressReady(::rtc::AsyncPacketSocket*, ::rtc::SocketAddress const&);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCNAPI void OnResolveResult(::rtc::SocketAddress const&, int);

    MCNAPI void OnSendPacket(void const*, uint64, ::cricket::StunRequest*);

    MCNAPI void OnStunBindingOrResolveRequestFailed(::rtc::SocketAddress const&, int, ::std::string_view);

    MCNAPI void OnStunBindingRequestSucceeded(int, ::rtc::SocketAddress const&, ::rtc::SocketAddress const&);

    MCNAPI void ResolveStunAddress(::rtc::SocketAddress const&);

    MCNAPI void SendStunBindingRequest(::rtc::SocketAddress const&);

    MCNAPI void SendStunBindingRequests();

    MCNAPI UDPPort(
        ::rtc::Thread*,
        ::webrtc::IceCandidateType,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ::rtc::AsyncPacketSocket*,
        ::std::string_view,
        ::std::string_view,
        bool,
        ::webrtc::FieldTrialsView const*
    );

    MCNAPI UDPPort(
        ::rtc::Thread*,
        ::webrtc::IceCandidateType,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ushort,
        ushort,
        ::std::string_view,
        ::std::string_view,
        bool,
        ::webrtc::FieldTrialsView const*
    );

    MCNAPI void set_stun_keepalive_delay(::std::optional<int> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*,
        ::webrtc::IceCandidateType,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ::rtc::AsyncPacketSocket*,
        ::std::string_view,
        ::std::string_view,
        bool,
        ::webrtc::FieldTrialsView const*
    );

    MCNAPI void* $ctor(
        ::rtc::Thread*,
        ::webrtc::IceCandidateType,
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
