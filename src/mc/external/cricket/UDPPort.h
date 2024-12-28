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
        AddressResolver& operator=(AddressResolver const&);
        AddressResolver(AddressResolver const&);
        AddressResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AddressResolver(::rtc::PacketSocketFactory*, ::std::function<void(::rtc::SocketAddress const&, int)>);

        MCAPI bool GetResolvedAddress(::rtc::SocketAddress const&, int, ::rtc::SocketAddress*) const;

        MCAPI void Resolve(::rtc::SocketAddress const&, int, ::webrtc::FieldTrialsView const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::rtc::PacketSocketFactory*, ::std::function<void(::rtc::SocketAddress const&, int)>);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    UDPPort& operator=(UDPPort const&);
    UDPPort(UDPPort const&);
    UDPPort();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool HasStunCandidateWithAddress(::rtc::SocketAddress const&) const;

    MCAPI bool Init();

    MCAPI void MaybePrepareStunCandidate();

    MCAPI bool MaybeSetDefaultLocalAddress(::rtc::SocketAddress*) const;

    MCAPI void MaybeSetPortCompleteOrError();

    MCAPI void OnLocalAddressReady(::rtc::AsyncPacketSocket*, ::rtc::SocketAddress const&);

    MCAPI void OnReadPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCAPI void OnReadyToSend(::rtc::AsyncPacketSocket*);

    MCAPI void OnResolveResult(::rtc::SocketAddress const&, int);

    MCAPI void OnSendPacket(void const*, uint64, ::cricket::StunRequest*);

    MCAPI void OnStunBindingOrResolveRequestFailed(::rtc::SocketAddress const&, int, ::std::string_view);

    MCAPI void OnStunBindingRequestSucceeded(int, ::rtc::SocketAddress const&, ::rtc::SocketAddress const&);

    MCAPI void ResolveStunAddress(::rtc::SocketAddress const&);

    MCAPI void SendStunBindingRequest(::rtc::SocketAddress const&);

    MCAPI void SendStunBindingRequests();

    MCAPI
    UDPPort(::rtc::Thread*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);

    MCAPI
    UDPPort(::rtc::Thread*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);

    MCAPI void set_stun_keepalive_delay(::std::optional<int> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::Thread*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);

    MCAPI void*
    $ctor(::rtc::Thread*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, bool, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForPortInterface();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace cricket
