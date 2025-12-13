#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Port.h"
#include "mc/external/cricket/PortInterface.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/cricket/TlsCertPolicy.h"
#include "mc/external/rtc/DiffServCodePoint.h"
#include "mc/external/rtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
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
namespace rtc { class ReceivedPacket; }
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
    // TurnPort inner types declare
    // clang-format off
    class CallbacksForTest;
    // clang-format on

    // TurnPort inner types define
    enum class PortState : int {
        Connecting   = 0,
        Connected    = 1,
        Ready        = 2,
        Receiveonly  = 3,
        Disconnected = 4,
    };

    class CallbacksForTest {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~CallbacksForTest() = default;

        // vIndex: 1
        virtual void OnTurnCreatePermissionResult(int) = 0;

        // vIndex: 2
        virtual void OnTurnRefreshResult(int) = 0;

        // vIndex: 3
        virtual void OnTurnPortClosed() = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkd723ff;
    ::ll::UntypedStorage<8, 32> mUnka57938;
    ::ll::UntypedStorage<4, 4>  mUnkc0797c;
    ::ll::UntypedStorage<8, 24> mUnk2ccf8e;
    ::ll::UntypedStorage<8, 24> mUnk9438eb;
    ::ll::UntypedStorage<8, 8>  mUnke2e245;
    ::ll::UntypedStorage<8, 64> mUnkc5a0cb;
    ::ll::UntypedStorage<8, 16> mUnke47f49;
    ::ll::UntypedStorage<8, 16> mUnk192bee;
    ::ll::UntypedStorage<8, 16> mUnkd29c5b;
    ::ll::UntypedStorage<8, 8>  mUnk6c54d1;
    ::ll::UntypedStorage<4, 4>  mUnke2b901;
    ::ll::UntypedStorage<4, 4>  mUnk5455ec;
    ::ll::UntypedStorage<8, 88> mUnkc6ed9f;
    ::ll::UntypedStorage<8, 32> mUnk3f6826;
    ::ll::UntypedStorage<8, 32> mUnk339372;
    ::ll::UntypedStorage<8, 32> mUnka14dac;
    ::ll::UntypedStorage<4, 4>  mUnkc64656;
    ::ll::UntypedStorage<8, 24> mUnk4af9a5;
    ::ll::UntypedStorage<4, 4>  mUnkf1b1e6;
    ::ll::UntypedStorage<4, 4>  mUnk65e0d2;
    ::ll::UntypedStorage<8, 8>  mUnk51b81e;
    ::ll::UntypedStorage<8, 8>  mUnkcab8e3;
    ::ll::UntypedStorage<8, 32> mUnke82c96;
    ::ll::UntypedStorage<8, 8>  mUnk4bc6f5;
    ::ll::UntypedStorage<8, 8>  mUnk61b827;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnPort& operator=(TurnPort const&);
    TurnPort(TurnPort const&);
    TurnPort();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TurnPort() /*override*/;

    // vIndex: 15
    virtual ::cricket::ProtocolType GetProtocol() const /*override*/;

    // vIndex: 46
    virtual ::cricket::TlsCertPolicy GetTlsCertPolicy() const;

    // vIndex: 47
    virtual void SetTlsCertPolicy(::cricket::TlsCertPolicy tls_cert_policy);

    // vIndex: 48
    virtual ::std::vector<::std::string> GetTlsAlpnProtocols() const;

    // vIndex: 49
    virtual ::std::vector<::std::string> GetTlsEllipticCurves() const;

    // vIndex: 9
    virtual void PrepareAddress() /*override*/;

    // vIndex: 11
    virtual ::cricket::Connection* CreateConnection(
        ::cricket::Candidate const&               remote_candidate,
        ::cricket::PortInterface::CandidateOrigin origin
    ) /*override*/;

    // vIndex: 17
    virtual int SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    ) /*override*/;

    // vIndex: 12
    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    // vIndex: 13
    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    // vIndex: 14
    virtual int GetError() /*override*/;

    // vIndex: 41
    virtual bool
    HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet) /*override*/;

    // vIndex: 42
    virtual bool CanHandleIncomingPacketsFrom(::rtc::SocketAddress const& addr) const /*override*/;

    // vIndex: 18
    virtual void SendBindingErrorResponse(
        ::cricket::StunMessage*     message,
        ::rtc::SocketAddress const& addr,
        int                         error_code,
        ::std::string_view          reason
    ) /*override*/;

    // vIndex: 50
    virtual void OnReadPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    // vIndex: 43
    virtual void OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet) /*override*/;

    // vIndex: 51
    virtual void OnReadyToSend(::rtc::AsyncPacketSocket* socket);

    // vIndex: 8
    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    // vIndex: 45
    virtual void HandleConnectionDestroyed(::cricket::Connection* conn) /*override*/;

    // vIndex: 35
    virtual ::rtc::DiffServCodePoint StunDscpValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRequestAuthInfo(::cricket::StunMessage* msg);

    MCNAPI void Close();

    MCNAPI bool CreateOrRefreshEntry(::cricket::Connection* conn, int channel_number);

    MCNAPI bool CreateTurnClientSocket();

    MCNAPI void DispatchPacket(
        char const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& remote_addr,
        ::cricket::ProtocolType     proto,
        int64                       packet_time_us
    );

    MCNAPI bool FailAndPruneConnection(::rtc::SocketAddress const& address);

    MCNAPI ::cricket::TurnEntry* FindEntry(::rtc::SocketAddress const& addr) const;

    MCNAPI ::cricket::TurnEntry* FindEntry(int channel_id) const;

    MCNAPI ::rtc::SocketAddress GetLocalAddress() const;

    MCNAPI void HandleChannelData(int channel_id, char const* data, uint64 size, int64 packet_time_us);

    MCNAPI void HandleDataIndication(char const* data, uint64 size, int64 packet_time_us);

    MCNAPI void HandleRefreshError();

    MCNAPI bool HasPermission(::rtc::IPAddress const& ipaddr) const;

    MCNAPI void MaybeAddTurnLoggingId(::cricket::StunMessage* msg);

    MCNAPI void OnAllocateError(int error_code, ::std::string_view reason);

    MCNAPI void OnAllocateMismatch();

    MCNAPI void OnAllocateRequestTimeout();

    MCNAPI void OnAllocateSuccess(::rtc::SocketAddress const& address, ::rtc::SocketAddress const& stun_address);

    MCNAPI void OnRefreshError();

    MCNAPI void OnSendStunPacket(void const* data, uint64 size, ::cricket::StunRequest* request);

    MCNAPI void OnSocketClose(::rtc::AsyncPacketSocket* socket, int error);

    MCNAPI void OnSocketConnect(::rtc::AsyncPacketSocket* socket);

    MCNAPI ::std::string ReconstructServerUrl();

    MCNAPI void Release();

    MCNAPI void ResetNonce();

    MCNAPI void ResolveTurnAddress(::rtc::SocketAddress const& address);

    MCNAPI bool ScheduleRefresh(uint lifetime);

    MCNAPI int Send(void const* data, uint64 len, ::rtc::PacketOptions const& options);

    MCNAPI void SendRequest(::cricket::StunRequest* req, int delay);

    MCNAPI bool SetAlternateServer(::rtc::SocketAddress const& address);

    MCNAPI void SetTurnLoggingId(::std::string_view turn_logging_id);

    MCNAPI void TryAlternateServer();

    MCNAPI bool TurnCustomizerAllowChannelData(void const* data, uint64 size, bool payload);

    MCNAPI void TurnCustomizerMaybeModifyOutgoingStunMessage(::cricket::StunMessage* message);

    MCNAPI TurnPort(
        ::webrtc::TaskQueueBase*                    thread,
        ::rtc::PacketSocketFactory*                 factory,
        ::rtc::Network const*                       network,
        ::std::shared_ptr<::rtc::AsyncPacketSocket> socket,
        ::std::string_view                          username,
        ::std::string_view                          password,
        ::cricket::ProtocolAddress const&           server_address,
        ::cricket::RelayCredentials const&          credentials,
        int                                         server_priority,
        ::std::vector<::std::string> const&         tls_alpn_protocols,
        ::std::vector<::std::string> const&         tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                   customizer,
        ::rtc::SSLCertificateVerifier*              tls_cert_verifier,
        ::webrtc::FieldTrialsView const*            field_trials
    );

    MCNAPI TurnPort(
        ::webrtc::TaskQueueBase*            thread,
        ::rtc::PacketSocketFactory*         factory,
        ::rtc::Network const*               network,
        ushort                              min_port,
        ushort                              max_port,
        ::std::string_view                  username,
        ::std::string_view                  password,
        ::cricket::ProtocolAddress const&   server_address,
        ::cricket::RelayCredentials const&  credentials,
        int                                 server_priority,
        ::std::vector<::std::string> const& tls_alpn_protocols,
        ::std::vector<::std::string> const& tls_elliptic_curves,
        ::webrtc::TurnCustomizer*           customizer,
        ::rtc::SSLCertificateVerifier*      tls_cert_verifier,
        ::webrtc::FieldTrialsView const*    field_trials
    );

    MCNAPI void UpdateHash();

    MCNAPI bool UpdateNonce(::cricket::StunMessage* response);

    MCNAPI void set_nonce(::std::string_view nonce);

    MCNAPI void set_realm(::std::string_view realm);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool AllowedTurnPort(int port, ::webrtc::FieldTrialsView const* field_trials);

    MCNAPI static ::std::unique_ptr<::cricket::TurnPort>
    Create(::cricket::CreateRelayPortArgs const& args, ::std::shared_ptr<::rtc::AsyncPacketSocket> socket);

    MCNAPI static bool Validate(::cricket::CreateRelayPortArgs const& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                    thread,
        ::rtc::PacketSocketFactory*                 factory,
        ::rtc::Network const*                       network,
        ::std::shared_ptr<::rtc::AsyncPacketSocket> socket,
        ::std::string_view                          username,
        ::std::string_view                          password,
        ::cricket::ProtocolAddress const&           server_address,
        ::cricket::RelayCredentials const&          credentials,
        int                                         server_priority,
        ::std::vector<::std::string> const&         tls_alpn_protocols,
        ::std::vector<::std::string> const&         tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                   customizer,
        ::rtc::SSLCertificateVerifier*              tls_cert_verifier,
        ::webrtc::FieldTrialsView const*            field_trials
    );

    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*            thread,
        ::rtc::PacketSocketFactory*         factory,
        ::rtc::Network const*               network,
        ushort                              min_port,
        ushort                              max_port,
        ::std::string_view                  username,
        ::std::string_view                  password,
        ::cricket::ProtocolAddress const&   server_address,
        ::cricket::RelayCredentials const&  credentials,
        int                                 server_priority,
        ::std::vector<::std::string> const& tls_alpn_protocols,
        ::std::vector<::std::string> const& tls_elliptic_curves,
        ::webrtc::TurnCustomizer*           customizer,
        ::rtc::SSLCertificateVerifier*      tls_cert_verifier,
        ::webrtc::FieldTrialsView const*    field_trials
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cricket::ProtocolType $GetProtocol() const;

    MCNAPI ::cricket::TlsCertPolicy $GetTlsCertPolicy() const;

    MCNAPI void $SetTlsCertPolicy(::cricket::TlsCertPolicy tls_cert_policy);

    MCNAPI ::std::vector<::std::string> $GetTlsAlpnProtocols() const;

    MCNAPI ::std::vector<::std::string> $GetTlsEllipticCurves() const;

    MCNAPI void $PrepareAddress();

    MCNAPI ::cricket::Connection*
    $CreateConnection(::cricket::Candidate const& remote_candidate, ::cricket::PortInterface::CandidateOrigin origin);

    MCNAPI int $SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    );

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $GetError();

    MCNAPI bool $HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI bool $CanHandleIncomingPacketsFrom(::rtc::SocketAddress const& addr) const;

    MCNAPI void $SendBindingErrorResponse(
        ::cricket::StunMessage*     message,
        ::rtc::SocketAddress const& addr,
        int                         error_code,
        ::std::string_view          reason
    );

    MCNAPI void $OnReadPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI void $OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet);

    MCNAPI void $OnReadyToSend(::rtc::AsyncPacketSocket* socket);

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI void $HandleConnectionDestroyed(::cricket::Connection* conn);

    MCNAPI ::rtc::DiffServCodePoint $StunDscpValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
