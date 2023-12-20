#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/DiffServCodePoint.h"
#include "mc/deps/webrtc/detail/Port.h"
#include "mc/deps/webrtc/detail/PortInterface.h"
#include "mc/deps/webrtc/detail/ProtocolType.h"
#include "mc/deps/webrtc/detail/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class Port; }
namespace cricket { class StunRequest; }
namespace cricket { class StunStats; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

class UDPPort : public ::cricket::Port {
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
        // NOLINTBEGIN
        // symbol:
        // ??0AddressResolver@UDPPort@cricket@@QEAA@PEAVPacketSocketFactory@rtc@@V?$function@$$A6AXAEBVSocketAddress@rtc@@H@Z@std@@@Z
        MCAPI
        AddressResolver(class rtc::PacketSocketFactory*, std::function<void(class rtc::SocketAddress const&, int)>);

        // symbol: ?GetResolvedAddress@AddressResolver@UDPPort@cricket@@QEBA_NAEBVSocketAddress@rtc@@HPEAV45@@Z
        MCAPI bool GetResolvedAddress(class rtc::SocketAddress const&, int, class rtc::SocketAddress*) const;

        // symbol: ?Resolve@AddressResolver@UDPPort@cricket@@QEAAXAEBVSocketAddress@rtc@@HAEBVFieldTrialsView@webrtc@@@Z
        MCAPI void Resolve(class rtc::SocketAddress const&, int, class webrtc::FieldTrialsView const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UDPPort& operator=(UDPPort const&);
    UDPPort(UDPPort const&);
    UDPPort();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CreateConnection@UDPPort@cricket@@UEAAPEAVConnection@2@AEBVCandidate@2@W4CandidateOrigin@PortInterface@2@@Z
    MCVAPI class cricket::Connection*
    CreateConnection(class cricket::Candidate const&, ::cricket::PortInterface::CandidateOrigin);

    // symbol: ?GetError@UDPPort@cricket@@UEAAHXZ
    MCVAPI int GetError();

    // symbol: ?GetOption@UDPPort@cricket@@UEAAHW4Option@Socket@rtc@@PEAH@Z
    MCVAPI int GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetProtocol@UDPPort@cricket@@UEBA?AW4ProtocolType@2@XZ
    MCVAPI ::cricket::ProtocolType GetProtocol() const;

    // symbol: ?GetStunStats@UDPPort@cricket@@UEAAXPEAV?$optional@VStunStats@cricket@@@std@@@Z
    MCVAPI void GetStunStats(std::optional<class cricket::StunStats>*);

    // symbol: ?HandleIncomingPacket@UDPPort@cricket@@UEAA_NPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@_J@Z
    MCVAPI bool
    HandleIncomingPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64);

    // symbol: ?OnSentPacket@UDPPort@cricket@@MEAAXPEAVAsyncPacketSocket@rtc@@AEBUSentPacket@4@@Z
    MCVAPI void OnSentPacket(class rtc::AsyncPacketSocket*, struct rtc::SentPacket const&);

    // symbol: ?PostAddAddress@UDPPort@cricket@@MEAAX_N@Z
    MCVAPI void PostAddAddress(bool);

    // symbol: ?PrepareAddress@UDPPort@cricket@@UEAAXXZ
    MCVAPI void PrepareAddress();

    // symbol: ?SendTo@UDPPort@cricket@@MEAAHPEBX_KAEBVSocketAddress@rtc@@AEBUPacketOptions@4@_N@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&, bool);

    // symbol: ?SetOption@UDPPort@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ?StunDscpValue@UDPPort@cricket@@MEBA?AW4DiffServCodePoint@rtc@@XZ
    MCVAPI ::rtc::DiffServCodePoint StunDscpValue() const;

    // symbol: ?SupportsProtocol@UDPPort@cricket@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI bool SupportsProtocol(std::string_view) const;

    // symbol: ?UpdateNetworkCost@UDPPort@cricket@@MEAAXXZ
    MCVAPI void UpdateNetworkCost();

    // symbol: ??1UDPPort@cricket@@UEAA@XZ
    MCVAPI ~UDPPort();

    // symbol: ?set_stun_keepalive_delay@UDPPort@cricket@@QEAAXAEBV?$optional@H@std@@@Z
    MCAPI void set_stun_keepalive_delay(std::optional<int> const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Init@UDPPort@cricket@@IEAA_NXZ
    MCAPI bool Init();

    // symbol: ?MaybePrepareStunCandidate@UDPPort@cricket@@IEAAXXZ
    MCAPI void MaybePrepareStunCandidate();

    // symbol: ?MaybeSetDefaultLocalAddress@UDPPort@cricket@@IEBA_NPEAVSocketAddress@rtc@@@Z
    MCAPI bool MaybeSetDefaultLocalAddress(class rtc::SocketAddress*) const;

    // symbol: ?OnLocalAddressReady@UDPPort@cricket@@IEAAXPEAVAsyncPacketSocket@rtc@@AEBVSocketAddress@4@@Z
    MCAPI void OnLocalAddressReady(class rtc::AsyncPacketSocket*, class rtc::SocketAddress const&);

    // symbol: ?OnReadPacket@UDPPort@cricket@@IEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCAPI void
    OnReadPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?OnReadyToSend@UDPPort@cricket@@IEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void OnReadyToSend(class rtc::AsyncPacketSocket*);

    // symbol: ?SendStunBindingRequests@UDPPort@cricket@@IEAAXXZ
    MCAPI void SendStunBindingRequests();

    // symbol:
    // ??0UDPPort@cricket@@IEAA@PEAVThread@rtc@@PEAVPacketSocketFactory@3@PEBVNetwork@3@PEAVAsyncPacketSocket@3@V?$basic_string_view@DU?$char_traits@D@std@@@std@@4_NPEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    UDPPort(class rtc::Thread*, class rtc::PacketSocketFactory*, class rtc::Network const*, class rtc::AsyncPacketSocket*, std::string_view, std::string_view, bool, class webrtc::FieldTrialsView const*);

    // symbol:
    // ??0UDPPort@cricket@@IEAA@PEAVThread@rtc@@PEAVPacketSocketFactory@3@PEBVNetwork@3@GGV?$basic_string_view@DU?$char_traits@D@std@@@std@@3_NPEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    UDPPort(class rtc::Thread*, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, bool, class webrtc::FieldTrialsView const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HasStunCandidateWithAddress@UDPPort@cricket@@AEBA_NAEBVSocketAddress@rtc@@@Z
    MCAPI bool HasStunCandidateWithAddress(class rtc::SocketAddress const&) const;

    // symbol: ?MaybeSetPortCompleteOrError@UDPPort@cricket@@AEAAXXZ
    MCAPI void MaybeSetPortCompleteOrError();

    // symbol: ?OnResolveResult@UDPPort@cricket@@AEAAXAEBVSocketAddress@rtc@@H@Z
    MCAPI void OnResolveResult(class rtc::SocketAddress const&, int);

    // symbol: ?OnSendPacket@UDPPort@cricket@@AEAAXPEBX_KPEAVStunRequest@2@@Z
    MCAPI void OnSendPacket(void const*, uint64, class cricket::StunRequest*);

    // symbol:
    // ?OnStunBindingOrResolveRequestFailed@UDPPort@cricket@@AEAAXAEBVSocketAddress@rtc@@HV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void OnStunBindingOrResolveRequestFailed(class rtc::SocketAddress const&, int, std::string_view);

    // symbol: ?OnStunBindingRequestSucceeded@UDPPort@cricket@@AEAAXHAEBVSocketAddress@rtc@@0@Z
    MCAPI void OnStunBindingRequestSucceeded(int, class rtc::SocketAddress const&, class rtc::SocketAddress const&);

    // symbol: ?ResolveStunAddress@UDPPort@cricket@@AEAAXAEBVSocketAddress@rtc@@@Z
    MCAPI void ResolveStunAddress(class rtc::SocketAddress const&);

    // symbol: ?SendStunBindingRequest@UDPPort@cricket@@AEAAXAEBVSocketAddress@rtc@@@Z
    MCAPI void SendStunBindingRequest(class rtc::SocketAddress const&);

    // NOLINTEND
};

}; // namespace cricket
