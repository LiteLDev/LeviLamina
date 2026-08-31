#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DiffServCodePoint.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/Port.h"
#include "mc/external/webrtc/PortInterface.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunRequest; }
namespace webrtc { class StunStats; }
namespace webrtc { class TimeDelta; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class UDPPort : public ::webrtc::Port {
public:
    // UDPPort inner types declare
    // clang-format off
    class AddressResolver;
    // clang-format on

    // UDPPort inner types define
    class AddressResolver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkb42915;
        ::ll::UntypedStorage<8, 64> mUnk42b0f0;
        ::ll::UntypedStorage<8, 16> mUnk7bf41c;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddressResolver& operator=(AddressResolver const&);
        AddressResolver(AddressResolver const&);
        AddressResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Resolve(::webrtc::SocketAddress const& address, int family, ::webrtc::FieldTrialsView const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk95b28a;
    ::ll::UntypedStorage<8, 16> mUnk32be8d;
    ::ll::UntypedStorage<8, 16> mUnkf1233d;
    ::ll::UntypedStorage<8, 88> mUnk99c3e8;
    ::ll::UntypedStorage<8, 24> mUnkd3ffc3;
    ::ll::UntypedStorage<8, 16> mUnkda2674;
    ::ll::UntypedStorage<4, 4>  mUnk8fcf12;
    ::ll::UntypedStorage<4, 4>  mUnkd31f0e;
    ::ll::UntypedStorage<8, 8>  mUnkb53f98;
    ::ll::UntypedStorage<1, 1>  mUnkce4e55;
    ::ll::UntypedStorage<4, 4>  mUnk4bb120;
    ::ll::UntypedStorage<8, 8>  mUnkadc63b;
    ::ll::UntypedStorage<4, 4>  mUnk88f3c8;
    ::ll::UntypedStorage<8, 24> mUnk3caa77;
    ::ll::UntypedStorage<1, 1>  mUnk865d69;
    ::ll::UntypedStorage<1, 1>  mUnk9b90d7;
    // NOLINTEND

public:
    // prevent constructor by default
    UDPPort& operator=(UDPPort const&);
    UDPPort(UDPPort const&);
    UDPPort();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UDPPort() /*override*/;

    virtual void PrepareAddress() /*override*/;

    virtual ::webrtc::Connection*
    CreateConnection(::webrtc::Candidate const& address, ::webrtc::PortInterface::CandidateOrigin) /*override*/;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool
    HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet) /*override*/;

    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    virtual ::webrtc::ProtocolType GetProtocol() const /*override*/;

    virtual void GetStunStats(::std::optional<::webrtc::StunStats>* stats) /*override*/;

    virtual int SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool
    ) /*override*/;

    virtual void UpdateNetworkCost() /*override*/;

    virtual ::webrtc::DiffServCodePoint StunDscpValue() const /*override*/;

    virtual void PostAddAddress(bool is_final) /*override*/;

    virtual void OnSentPacket(::webrtc::AsyncPacketSocket*, ::webrtc::SentPacketInfo const& sent_packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Init();

    MCNAPI bool MaybeSetDefaultLocalAddress(::webrtc::SocketAddress* addr) const;

    MCNAPI void MaybeSetPortCompleteOrError();

    MCNAPI void OnLocalAddressReady(::webrtc::AsyncPacketSocket*, ::webrtc::SocketAddress const& address);

    MCNAPI void OnReadPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void OnReadyToSend(::webrtc::AsyncPacketSocket*);

    MCNAPI void OnResolveResult(::webrtc::SocketAddress const& input, int error);

    MCNAPI void OnSendPacket(void const* data, uint64 size, ::webrtc::StunRequest* req);

    MCNAPI void OnStunBindingOrResolveRequestFailed(
        ::webrtc::SocketAddress const& stun_server_addr,
        int                            error_code,
        ::std::string_view             reason
    );

    MCNAPI void OnStunBindingRequestSucceeded(
        ::webrtc::TimeDelta            rtt,
        ::webrtc::SocketAddress const& stun_server_addr,
        ::webrtc::SocketAddress const& stun_reflected_addr
    );

    MCNAPI void ResolveStunAddress(::webrtc::SocketAddress const& stun_addr);

    MCNAPI void SendStunBindingRequest(::webrtc::SocketAddress const& stun_addr);

    MCNAPI void SendStunBindingRequests();

    MCNAPI UDPPort(
        ::webrtc::Port::PortParametersRef const&       args,
        ::webrtc::IceCandidateType                     type,
        ::std::shared_ptr<::webrtc::AsyncPacketSocket> socket,
        bool                                           emit_local_for_anyaddress
    );

    MCNAPI UDPPort(
        ::webrtc::Port::PortParametersRef const& args,
        ::webrtc::IceCandidateType               type,
        ushort                                   min_port,
        ushort                                   max_port,
        bool                                     emit_local_for_anyaddress
    );

    MCNAPI void set_stun_keepalive_delay(::std::optional<int> const& delay);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const&       args,
        ::webrtc::IceCandidateType                     type,
        ::std::shared_ptr<::webrtc::AsyncPacketSocket> socket,
        bool                                           emit_local_for_anyaddress
    );

    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const& args,
        ::webrtc::IceCandidateType               type,
        ushort                                   min_port,
        ushort                                   max_port,
        bool                                     emit_local_for_anyaddress
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
    MCNAPI void $PrepareAddress();

    MCNAPI ::webrtc::Connection*
    $CreateConnection(::webrtc::Candidate const& address, ::webrtc::PortInterface::CandidateOrigin);

    MCNAPI int $SetOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $GetOption(::webrtc::Socket::Option opt, int* value);

    MCNAPI int $GetError();

    MCNAPI bool $HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI ::webrtc::ProtocolType $GetProtocol() const;

    MCNAPI void $GetStunStats(::std::optional<::webrtc::StunStats>* stats);

    MCNAPI int $SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool
    );

    MCNAPI void $UpdateNetworkCost();

    MCNAPI ::webrtc::DiffServCodePoint $StunDscpValue() const;

    MCNAPI void $PostAddAddress(bool is_final);

    MCNAPI void $OnSentPacket(::webrtc::AsyncPacketSocket*, ::webrtc::SentPacketInfo const& sent_packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
