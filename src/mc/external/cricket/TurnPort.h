#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
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
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class TurnPort {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRequestAuthInfo(::cricket::StunMessage*);

    MCNAPI void Close();

    MCNAPI bool CreateOrRefreshEntry(::cricket::Connection*, int);

    MCNAPI bool CreateTurnClientSocket();

    MCNAPI void DispatchPacket(char const*, uint64, ::rtc::SocketAddress const&, ::cricket::ProtocolType, int64);

    MCNAPI bool FailAndPruneConnection(::rtc::SocketAddress const&);

    MCNAPI ::cricket::TurnEntry* FindEntry(int) const;

    MCNAPI ::cricket::TurnEntry* FindEntry(::rtc::SocketAddress const&) const;

    MCNAPI ::rtc::SocketAddress GetLocalAddress() const;

    MCNAPI void HandleChannelData(int, char const*, uint64, int64);

    MCNAPI void HandleDataIndication(char const*, uint64, int64);

    MCNAPI void HandleRefreshError();

    MCNAPI bool HasPermission(::rtc::IPAddress const&) const;

    MCNAPI void MaybeAddTurnLoggingId(::cricket::StunMessage*);

    MCNAPI void OnAllocateError(int, ::std::string_view);

    MCNAPI void OnAllocateMismatch();

    MCNAPI void OnAllocateRequestTimeout();

    MCNAPI void OnAllocateSuccess(::rtc::SocketAddress const&, ::rtc::SocketAddress const&);

    MCNAPI void OnRefreshError();

    MCNAPI void OnSendStunPacket(void const*, uint64, ::cricket::StunRequest*);

    MCNAPI void OnSocketClose(::rtc::AsyncPacketSocket*, int);

    MCNAPI void OnSocketConnect(::rtc::AsyncPacketSocket*);

    MCNAPI ::std::string ReconstructServerUrl();

    MCNAPI void Release();

    MCNAPI void ResetNonce();

    MCNAPI void ResolveTurnAddress(::rtc::SocketAddress const&);

    MCNAPI bool ScheduleRefresh(uint);

    MCNAPI int Send(void const*, uint64, ::rtc::PacketOptions const&);

    MCNAPI void SendRequest(::cricket::StunRequest*, int);

    MCNAPI bool SetAlternateServer(::rtc::SocketAddress const&);

    MCNAPI void SetTurnLoggingId(::std::string_view);

    MCNAPI void TryAlternateServer();

    MCNAPI bool TurnCustomizerAllowChannelData(void const*, uint64, bool);

    MCNAPI void TurnCustomizerMaybeModifyOutgoingStunMessage(::cricket::StunMessage*);

    MCNAPI TurnPort(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCNAPI
    TurnPort(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCNAPI void UpdateHash();

    MCNAPI bool UpdateNonce(::cricket::StunMessage*);

    MCNAPI void set_nonce(::std::string_view);

    MCNAPI void set_realm(::std::string_view);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool AllowedTurnPort(int, ::webrtc::FieldTrialsView const*);

    MCNAPI static bool Validate(::cricket::CreateRelayPortArgs const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCNAPI void* $ctor(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
