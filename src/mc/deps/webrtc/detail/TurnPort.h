#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/DiffServCodePoint.h"
#include "mc/deps/webrtc/detail/Port.h"
#include "mc/deps/webrtc/detail/PortInterface.h"
#include "mc/deps/webrtc/detail/ProtocolType.h"
#include "mc/deps/webrtc/detail/Socket.h"
#include "mc/deps/webrtc/detail/TlsCertPolicy.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class Port; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class TurnEntry; }
namespace cricket { struct CreateRelayPortArgs; }
namespace cricket { struct ProtocolAddress; }
namespace cricket { struct RelayCredentials; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class TurnPort : public ::cricket::Port {
public:
    // prevent constructor by default
    TurnPort& operator=(TurnPort const&);
    TurnPort(TurnPort const&);
    TurnPort();

public:
    // NOLINTBEGIN
    // symbol: ?CanHandleIncomingPacketsFrom@TurnPort@cricket@@UEBA_NAEBVSocketAddress@rtc@@@Z
    MCVAPI bool CanHandleIncomingPacketsFrom(class rtc::SocketAddress const&) const;

    // symbol:
    // ?CreateConnection@TurnPort@cricket@@UEAAPEAVConnection@2@AEBVCandidate@2@W4CandidateOrigin@PortInterface@2@@Z
    MCVAPI class cricket::Connection*
    CreateConnection(class cricket::Candidate const&, ::cricket::PortInterface::CandidateOrigin);

    // symbol: ?GetError@TurnPort@cricket@@UEAAHXZ
    MCVAPI int GetError();

    // symbol: ?GetOption@TurnPort@cricket@@UEAAHW4Option@Socket@rtc@@PEAH@Z
    MCVAPI int GetOption(::rtc::Socket::Option, int*);

    // symbol: ?GetProtocol@TurnPort@cricket@@UEBA?AW4ProtocolType@2@XZ
    MCVAPI ::cricket::ProtocolType GetProtocol() const;

    // symbol:
    // ?GetTlsAlpnProtocols@TurnPort@cricket@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> GetTlsAlpnProtocols() const;

    // symbol: ?GetTlsCertPolicy@TurnPort@cricket@@UEBA?AW4TlsCertPolicy@2@XZ
    MCVAPI ::cricket::TlsCertPolicy GetTlsCertPolicy() const;

    // symbol:
    // ?GetTlsEllipticCurves@TurnPort@cricket@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCVAPI std::vector<std::string> GetTlsEllipticCurves() const;

    // symbol: ?HandleConnectionDestroyed@TurnPort@cricket@@UEAAXPEAVConnection@2@@Z
    MCVAPI void HandleConnectionDestroyed(class cricket::Connection*);

    // symbol: ?HandleIncomingPacket@TurnPort@cricket@@UEAA_NPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@_J@Z
    MCVAPI bool
    HandleIncomingPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64);

    // symbol: ?OnReadPacket@TurnPort@cricket@@UEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCVAPI void
    OnReadPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?OnReadyToSend@TurnPort@cricket@@UEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCVAPI void OnReadyToSend(class rtc::AsyncPacketSocket*);

    // symbol: ?OnSentPacket@TurnPort@cricket@@UEAAXPEAVAsyncPacketSocket@rtc@@AEBUSentPacket@4@@Z
    MCVAPI void OnSentPacket(class rtc::AsyncPacketSocket*, struct rtc::SentPacket const&);

    // symbol: ?PrepareAddress@TurnPort@cricket@@UEAAXXZ
    MCVAPI void PrepareAddress();

    // symbol:
    // ?SendBindingErrorResponse@TurnPort@cricket@@UEAAXPEAVStunMessage@2@AEBVSocketAddress@rtc@@HV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void
    SendBindingErrorResponse(class cricket::StunMessage*, class rtc::SocketAddress const&, int, std::string_view);

    // symbol: ?SendTo@TurnPort@cricket@@UEAAHPEBX_KAEBVSocketAddress@rtc@@AEBUPacketOptions@4@_N@Z
    MCVAPI int SendTo(void const*, uint64, class rtc::SocketAddress const&, struct rtc::PacketOptions const&, bool);

    // symbol: ?SetOption@TurnPort@cricket@@UEAAHW4Option@Socket@rtc@@H@Z
    MCVAPI int SetOption(::rtc::Socket::Option, int);

    // symbol: ?SetTlsCertPolicy@TurnPort@cricket@@UEAAXW4TlsCertPolicy@2@@Z
    MCVAPI void SetTlsCertPolicy(::cricket::TlsCertPolicy);

    // symbol: ?StunDscpValue@TurnPort@cricket@@MEBA?AW4DiffServCodePoint@rtc@@XZ
    MCVAPI ::rtc::DiffServCodePoint StunDscpValue() const;

    // symbol: ?SupportsProtocol@TurnPort@cricket@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI bool SupportsProtocol(std::string_view) const;

    // symbol: ??1TurnPort@cricket@@UEAA@XZ
    MCVAPI ~TurnPort();

    // symbol: ?GetLocalAddress@TurnPort@cricket@@QEBA?AVSocketAddress@rtc@@XZ
    MCAPI class rtc::SocketAddress GetLocalAddress() const;

    // symbol: ?OnAllocateMismatch@TurnPort@cricket@@QEAAXXZ
    MCAPI void OnAllocateMismatch();

    // symbol: ?OnSocketClose@TurnPort@cricket@@QEAAXPEAVAsyncPacketSocket@rtc@@H@Z
    MCAPI void OnSocketClose(class rtc::AsyncPacketSocket*, int);

    // symbol: ?OnSocketConnect@TurnPort@cricket@@QEAAXPEAVAsyncPacketSocket@rtc@@@Z
    MCAPI void OnSocketConnect(class rtc::AsyncPacketSocket*);

    // symbol: ?Release@TurnPort@cricket@@QEAAXXZ
    MCAPI void Release();

    // symbol: ?SetTurnLoggingId@TurnPort@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void SetTurnLoggingId(std::string_view);

    // symbol: ?Validate@TurnPort@cricket@@SA_NAEBUCreateRelayPortArgs@2@@Z
    MCAPI static bool Validate(struct cricket::CreateRelayPortArgs const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?Close@TurnPort@cricket@@IEAAXXZ
    MCAPI void Close();

    // symbol: ?CreateOrRefreshEntry@TurnPort@cricket@@IEAA_NPEAVConnection@2@H@Z
    MCAPI bool CreateOrRefreshEntry(class cricket::Connection*, int);

    // symbol:
    // ??0TurnPort@cricket@@IEAA@PEAVTaskQueueBase@webrtc@@PEAVPacketSocketFactory@rtc@@PEBVNetwork@5@PEAVAsyncPacketSocket@5@V?$basic_string_view@DU?$char_traits@D@std@@@std@@4AEBUProtocolAddress@1@AEBURelayCredentials@1@HAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@9@7PEAVTurnCustomizer@3@PEAVSSLCertificateVerifier@5@PEBVFieldTrialsView@3@@Z
    MCAPI TurnPort(class webrtc::TaskQueueBase*, class rtc::PacketSocketFactory*, class rtc::Network const*, class rtc::AsyncPacketSocket*, std::string_view, std::string_view, struct cricket::ProtocolAddress const&, struct cricket::RelayCredentials const&, int, std::vector<std::string> const&, std::vector<std::string> const&, class webrtc::TurnCustomizer*, class rtc::SSLCertificateVerifier*, class webrtc::FieldTrialsView const*);

    // symbol:
    // ??0TurnPort@cricket@@IEAA@PEAVTaskQueueBase@webrtc@@PEAVPacketSocketFactory@rtc@@PEBVNetwork@5@GGV?$basic_string_view@DU?$char_traits@D@std@@@std@@3AEBUProtocolAddress@1@AEBURelayCredentials@1@HAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@8@6PEAVTurnCustomizer@3@PEAVSSLCertificateVerifier@5@PEBVFieldTrialsView@3@@Z
    MCAPI
    TurnPort(class webrtc::TaskQueueBase*, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, struct cricket::ProtocolAddress const&, struct cricket::RelayCredentials const&, int, std::vector<std::string> const&, std::vector<std::string> const&, class webrtc::TurnCustomizer*, class rtc::SSLCertificateVerifier*, class webrtc::FieldTrialsView const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddRequestAuthInfo@TurnPort@cricket@@AEAAXPEAVStunMessage@2@@Z
    MCAPI void AddRequestAuthInfo(class cricket::StunMessage*);

    // symbol: ?CreateTurnClientSocket@TurnPort@cricket@@AEAA_NXZ
    MCAPI bool CreateTurnClientSocket();

    // symbol: ?DispatchPacket@TurnPort@cricket@@AEAAXPEBD_KAEBVSocketAddress@rtc@@W4ProtocolType@2@_J@Z
    MCAPI void DispatchPacket(char const*, uint64, class rtc::SocketAddress const&, ::cricket::ProtocolType, int64);

    // symbol: ?FailAndPruneConnection@TurnPort@cricket@@AEAA_NAEBVSocketAddress@rtc@@@Z
    MCAPI bool FailAndPruneConnection(class rtc::SocketAddress const&);

    // symbol: ?FindEntry@TurnPort@cricket@@AEBAPEAVTurnEntry@2@AEBVSocketAddress@rtc@@@Z
    MCAPI class cricket::TurnEntry* FindEntry(class rtc::SocketAddress const&) const;

    // symbol: ?FindEntry@TurnPort@cricket@@AEBAPEAVTurnEntry@2@H@Z
    MCAPI class cricket::TurnEntry* FindEntry(int) const;

    // symbol: ?HandleChannelData@TurnPort@cricket@@AEAAXHPEBD_K_J@Z
    MCAPI void HandleChannelData(int, char const*, uint64, int64);

    // symbol: ?HandleDataIndication@TurnPort@cricket@@AEAAXPEBD_K_J@Z
    MCAPI void HandleDataIndication(char const*, uint64, int64);

    // symbol: ?HandleRefreshError@TurnPort@cricket@@AEAAXXZ
    MCAPI void HandleRefreshError();

    // symbol: ?HasPermission@TurnPort@cricket@@AEBA_NAEBVIPAddress@rtc@@@Z
    MCAPI bool HasPermission(class rtc::IPAddress const&) const;

    // symbol: ?MaybeAddTurnLoggingId@TurnPort@cricket@@AEAAXPEAVStunMessage@2@@Z
    MCAPI void MaybeAddTurnLoggingId(class cricket::StunMessage*);

    // symbol: ?OnAllocateError@TurnPort@cricket@@AEAAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void OnAllocateError(int, std::string_view);

    // symbol: ?OnAllocateRequestTimeout@TurnPort@cricket@@AEAAXXZ
    MCAPI void OnAllocateRequestTimeout();

    // symbol: ?OnAllocateSuccess@TurnPort@cricket@@AEAAXAEBVSocketAddress@rtc@@0@Z
    MCAPI void OnAllocateSuccess(class rtc::SocketAddress const&, class rtc::SocketAddress const&);

    // symbol: ?OnRefreshError@TurnPort@cricket@@AEAAXXZ
    MCAPI void OnRefreshError();

    // symbol: ?OnSendStunPacket@TurnPort@cricket@@AEAAXPEBX_KPEAVStunRequest@2@@Z
    MCAPI void OnSendStunPacket(void const*, uint64, class cricket::StunRequest*);

    // symbol:
    // ?ReconstructedServerUrl@TurnPort@cricket@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ReconstructedServerUrl();

    // symbol: ?ResetNonce@TurnPort@cricket@@AEAAXXZ
    MCAPI void ResetNonce();

    // symbol: ?ResolveTurnAddress@TurnPort@cricket@@AEAAXAEBVSocketAddress@rtc@@@Z
    MCAPI void ResolveTurnAddress(class rtc::SocketAddress const&);

    // symbol: ?ScheduleRefresh@TurnPort@cricket@@AEAA_NI@Z
    MCAPI bool ScheduleRefresh(uint);

    // symbol: ?Send@TurnPort@cricket@@AEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    MCAPI int Send(void const*, uint64, struct rtc::PacketOptions const&);

    // symbol: ?SendRequest@TurnPort@cricket@@AEAAXPEAVStunRequest@2@H@Z
    MCAPI void SendRequest(class cricket::StunRequest*, int);

    // symbol: ?SetAlternateServer@TurnPort@cricket@@AEAA_NAEBVSocketAddress@rtc@@@Z
    MCAPI bool SetAlternateServer(class rtc::SocketAddress const&);

    // symbol: ?TryAlternateServer@TurnPort@cricket@@AEAAXXZ
    MCAPI void TryAlternateServer();

    // symbol: ?TurnCustomizerAllowChannelData@TurnPort@cricket@@AEAA_NPEBX_K_N@Z
    MCAPI bool TurnCustomizerAllowChannelData(void const*, uint64, bool);

    // symbol: ?TurnCustomizerMaybeModifyOutgoingStunMessage@TurnPort@cricket@@AEAAXPEAVStunMessage@2@@Z
    MCAPI void TurnCustomizerMaybeModifyOutgoingStunMessage(class cricket::StunMessage*);

    // symbol: ?UpdateHash@TurnPort@cricket@@AEAAXXZ
    MCAPI void UpdateHash();

    // symbol: ?UpdateNonce@TurnPort@cricket@@AEAA_NPEAVStunMessage@2@@Z
    MCAPI bool UpdateNonce(class cricket::StunMessage*);

    // symbol: ?set_nonce@TurnPort@cricket@@AEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void set_nonce(std::string_view);

    // symbol: ?set_realm@TurnPort@cricket@@AEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void set_realm(std::string_view);

    // symbol: ?AllowedTurnPort@TurnPort@cricket@@CA_NHPEBVFieldTrialsView@webrtc@@@Z
    MCAPI static bool AllowedTurnPort(int, class webrtc::FieldTrialsView const*);

    // NOLINTEND
};

}; // namespace cricket
