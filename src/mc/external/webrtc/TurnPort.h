#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DiffServCodePoint.h"
#include "mc/external/webrtc/Port.h"
#include "mc/external/webrtc/PortInterface.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/Socket.h"
#include "mc/external/webrtc/TlsCertPolicy.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SSLCertificateVerifier; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunRequest; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { class TurnEntry; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct CreateRelayPortArgs; }
namespace webrtc { struct ProtocolAddress; }
namespace webrtc { struct RelayCredentials; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class TurnPort : public ::webrtc::Port {
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
        virtual ~CallbacksForTest() = default;

        virtual void OnTurnCreatePermissionResult(int) = 0;

        virtual void OnTurnRefreshResult(int) = 0;

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
    ::ll::UntypedStorage<8, 88> mUnk1e5b26;
    ::ll::UntypedStorage<8, 32> mUnk4c1c1d;
    ::ll::UntypedStorage<4, 4>  mUnkab5855;
    ::ll::UntypedStorage<8, 24> mUnkf377ac;
    ::ll::UntypedStorage<8, 24> mUnkd1849e;
    ::ll::UntypedStorage<8, 8>  mUnk16a38d;
    ::ll::UntypedStorage<8, 64> mUnka63854;
    ::ll::UntypedStorage<8, 16> mUnk7611ad;
    ::ll::UntypedStorage<8, 16> mUnk41bbee;
    ::ll::UntypedStorage<8, 16> mUnkfd66af;
    ::ll::UntypedStorage<8, 8>  mUnk7b3cc8;
    ::ll::UntypedStorage<4, 4>  mUnkfa2e71;
    ::ll::UntypedStorage<4, 4>  mUnkb19682;
    ::ll::UntypedStorage<8, 88> mUnka0cc86;
    ::ll::UntypedStorage<8, 32> mUnk9d57f1;
    ::ll::UntypedStorage<8, 32> mUnk15199a;
    ::ll::UntypedStorage<8, 32> mUnka7383a;
    ::ll::UntypedStorage<4, 4>  mUnk63fb59;
    ::ll::UntypedStorage<8, 24> mUnk41e4cc;
    ::ll::UntypedStorage<4, 4>  mUnk481b47;
    ::ll::UntypedStorage<4, 4>  mUnka8eb58;
    ::ll::UntypedStorage<8, 8>  mUnk853715;
    ::ll::UntypedStorage<8, 8>  mUnk34a40b;
    ::ll::UntypedStorage<8, 32> mUnk679471;
    ::ll::UntypedStorage<8, 8>  mUnk45686e;
    ::ll::UntypedStorage<8, 8>  mUnk75a415;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnPort& operator=(TurnPort const&);
    TurnPort(TurnPort const&);
    TurnPort();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TurnPort() /*override*/;

    virtual ::webrtc::ProtocolType GetProtocol() const /*override*/;

    virtual ::webrtc::TlsCertPolicy GetTlsCertPolicy() const;

    virtual void SetTlsCertPolicy(::webrtc::TlsCertPolicy tls_cert_policy);

    virtual ::std::vector<::std::string> GetTlsAlpnProtocols() const;

    virtual ::std::vector<::std::string> GetTlsEllipticCurves() const;

    virtual void PrepareAddress() /*override*/;

    virtual ::webrtc::Connection* CreateConnection(
        ::webrtc::Candidate const&               remote_candidate,
        ::webrtc::PortInterface::CandidateOrigin origin
    ) /*override*/;

    virtual int SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool                                      payload
    ) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool
    HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet) /*override*/;

    virtual bool CanHandleIncomingPacketsFrom(::webrtc::SocketAddress const& addr) const /*override*/;

    virtual void SendBindingErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        int                            error_code,
        ::std::string_view             reason
    ) /*override*/;

    virtual void OnReadPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    virtual void
    OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet) /*override*/;

    virtual void OnReadyToSend(::webrtc::AsyncPacketSocket* socket);

    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    virtual void HandleConnectionDestroyed(::webrtc::Connection* conn) /*override*/;

    virtual ::webrtc::DiffServCodePoint StunDscpValue() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRequestAuthInfo(::webrtc::StunMessage* msg);

    MCNAPI void Close();

    MCNAPI bool CreateOrRefreshEntry(::webrtc::Connection* conn, int channel_number);

    MCNAPI bool CreateTurnClientSocket();

    MCNAPI void DispatchPacket(
        char const*                    data,
        uint64                         size,
        ::webrtc::SocketAddress const& remote_addr,
        ::webrtc::ProtocolType         proto,
        int64                          packet_time_us
    );

    MCNAPI ::webrtc::TurnEntry* FindEntry(::webrtc::SocketAddress const& addr) const;

    MCNAPI ::webrtc::SocketAddress GetLocalAddress() const;

    MCNAPI void HandleChannelData(ushort channel_id, char const* data, uint64 size, int64 packet_time_us);

    MCNAPI void HandleDataIndication(char const* data, uint64 size, int64 packet_time_us);

    MCNAPI void OnAllocateError(int error_code, ::std::string_view reason);

    MCNAPI void OnAllocateMismatch();

    MCNAPI void OnLocalNetworkAccessPermissionGranted();

    MCNAPI void OnRefreshError();

    MCNAPI void OnSendStunPacket(void const* data, uint64 size, ::webrtc::StunRequest* request);

    MCNAPI void OnSocketConnect(::webrtc::AsyncPacketSocket* socket);

    MCNAPI ::std::string ReconstructServerUrl();

    MCNAPI void ResolveTurnAddress(::webrtc::SocketAddress const& address);

    MCNAPI bool ScheduleRefresh(uint lifetime);

    MCNAPI bool SetAlternateServer(::webrtc::SocketAddress const& address);

    MCNAPI void SetTurnLoggingId(::std::string_view turn_logging_id);

    MCNAPI TurnPort(
        ::webrtc::Port::PortParametersRef const&       args,
        ::std::shared_ptr<::webrtc::AsyncPacketSocket> socket,
        ::webrtc::ProtocolAddress const&               server_address,
        ::webrtc::RelayCredentials const&              credentials,
        int                                            server_priority,
        ::std::vector<::std::string> const&            tls_alpn_protocols,
        ::std::vector<::std::string> const&            tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                      customizer,
        ::webrtc::SSLCertificateVerifier*              tls_cert_verifier
    );

    MCNAPI TurnPort(
        ::webrtc::Port::PortParametersRef const& args,
        ushort                                   min_port,
        ushort                                   max_port,
        ::webrtc::ProtocolAddress const&         server_address,
        ::webrtc::RelayCredentials const&        credentials,
        int                                      server_priority,
        ::std::vector<::std::string> const&      tls_alpn_protocols,
        ::std::vector<::std::string> const&      tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                customizer,
        ::webrtc::SSLCertificateVerifier*        tls_cert_verifier
    );

    MCNAPI bool UpdateNonce(::webrtc::StunMessage* response);

    MCNAPI void set_nonce(::std::string_view nonce);

    MCNAPI void set_realm(::std::string_view realm);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool AllowedTurnPort(int port);

    MCNAPI static ::std::unique_ptr<::webrtc::TurnPort>
    Create(::webrtc::CreateRelayPortArgs const& args, ::std::shared_ptr<::webrtc::AsyncPacketSocket> socket);

    MCNAPI static ::std::unique_ptr<::webrtc::TurnPort>
    Create(::webrtc::CreateRelayPortArgs const& args, int min_port, int max_port);

    MCNAPI static bool Validate(::webrtc::CreateRelayPortArgs const& args);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const&       args,
        ::std::shared_ptr<::webrtc::AsyncPacketSocket> socket,
        ::webrtc::ProtocolAddress const&               server_address,
        ::webrtc::RelayCredentials const&              credentials,
        int                                            server_priority,
        ::std::vector<::std::string> const&            tls_alpn_protocols,
        ::std::vector<::std::string> const&            tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                      customizer,
        ::webrtc::SSLCertificateVerifier*              tls_cert_verifier
    );

    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const& args,
        ushort                                   min_port,
        ushort                                   max_port,
        ::webrtc::ProtocolAddress const&         server_address,
        ::webrtc::RelayCredentials const&        credentials,
        int                                      server_priority,
        ::std::vector<::std::string> const&      tls_alpn_protocols,
        ::std::vector<::std::string> const&      tls_elliptic_curves,
        ::webrtc::TurnCustomizer*                customizer,
        ::webrtc::SSLCertificateVerifier*        tls_cert_verifier
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
    MCNAPI ::webrtc::ProtocolType $GetProtocol() const;

    MCNAPI ::webrtc::TlsCertPolicy $GetTlsCertPolicy() const;

    MCNAPI void $SetTlsCertPolicy(::webrtc::TlsCertPolicy tls_cert_policy);

    MCNAPI ::std::vector<::std::string> $GetTlsAlpnProtocols() const;

    MCNAPI ::std::vector<::std::string> $GetTlsEllipticCurves() const;

    MCNAPI void $PrepareAddress();

    MCNAPI ::webrtc::Connection*
    $CreateConnection(::webrtc::Candidate const& remote_candidate, ::webrtc::PortInterface::CandidateOrigin origin);

    MCNAPI int $SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool                                      payload
    );

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $GetError();

    MCNAPI bool $HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI bool $CanHandleIncomingPacketsFrom(::webrtc::SocketAddress const& addr) const;

    MCNAPI void $SendBindingErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        int                            error_code,
        ::std::string_view             reason
    );

    MCNAPI void $OnReadPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void $OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI void $OnReadyToSend(::webrtc::AsyncPacketSocket* socket);

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI void $HandleConnectionDestroyed(::webrtc::Connection* conn);

    MCNAPI ::webrtc::DiffServCodePoint $StunDscpValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
