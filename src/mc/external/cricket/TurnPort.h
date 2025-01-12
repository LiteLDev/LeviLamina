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
    MCAPI void AddRequestAuthInfo(::cricket::StunMessage*);

    MCAPI void Close();

    MCAPI bool CreateOrRefreshEntry(::cricket::Connection*, int);

    MCAPI bool CreateTurnClientSocket();

    MCAPI void DispatchPacket(char const*, uint64, ::rtc::SocketAddress const&, ::cricket::ProtocolType, int64);

    MCAPI bool FailAndPruneConnection(::rtc::SocketAddress const&);

    MCAPI ::cricket::TurnEntry* FindEntry(int) const;

    MCAPI ::cricket::TurnEntry* FindEntry(::rtc::SocketAddress const&) const;

    MCAPI ::rtc::SocketAddress GetLocalAddress() const;

    MCAPI void HandleChannelData(int, char const*, uint64, int64);

    MCAPI void HandleDataIndication(char const*, uint64, int64);

    MCAPI void HandleRefreshError();

    MCAPI bool HasPermission(::rtc::IPAddress const&) const;

    MCAPI void MaybeAddTurnLoggingId(::cricket::StunMessage*);

    MCAPI void OnAllocateError(int, ::std::string_view);

    MCAPI void OnAllocateMismatch();

    MCAPI void OnAllocateRequestTimeout();

    MCAPI void OnAllocateSuccess(::rtc::SocketAddress const&, ::rtc::SocketAddress const&);

    MCAPI void OnRefreshError();

    MCAPI void OnSendStunPacket(void const*, uint64, ::cricket::StunRequest*);

    MCAPI void OnSocketClose(::rtc::AsyncPacketSocket*, int);

    MCAPI void OnSocketConnect(::rtc::AsyncPacketSocket*);

    MCAPI ::std::string ReconstructServerUrl();

    MCAPI void Release();

    MCAPI void ResetNonce();

    MCAPI void ResolveTurnAddress(::rtc::SocketAddress const&);

    MCAPI bool ScheduleRefresh(uint);

    MCAPI int Send(void const*, uint64, ::rtc::PacketOptions const&);

    MCAPI void SendRequest(::cricket::StunRequest*, int);

    MCAPI bool SetAlternateServer(::rtc::SocketAddress const&);

    MCAPI void SetTurnLoggingId(::std::string_view);

    MCAPI void TryAlternateServer();

    MCAPI bool TurnCustomizerAllowChannelData(void const*, uint64, bool);

    MCAPI void TurnCustomizerMaybeModifyOutgoingStunMessage(::cricket::StunMessage*);

    MCAPI
    TurnPort(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCAPI TurnPort(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCAPI void UpdateHash();

    MCAPI bool UpdateNonce(::cricket::StunMessage*);

    MCAPI void set_nonce(::std::string_view);

    MCAPI void set_realm(::std::string_view);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool AllowedTurnPort(int, ::webrtc::FieldTrialsView const*);

    MCAPI static bool Validate(::cricket::CreateRelayPortArgs const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::rtc::AsyncPacketSocket*, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);

    MCAPI void*
    $ctor(::webrtc::TaskQueueBase*, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ushort, ushort, ::std::string_view, ::std::string_view, ::cricket::ProtocolAddress const&, ::cricket::RelayCredentials const&, int, ::std::vector<::std::string> const&, ::std::vector<::std::string> const&, ::webrtc::TurnCustomizer*, ::rtc::SSLCertificateVerifier*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
