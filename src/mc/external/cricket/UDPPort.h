#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Port.h"
#include "mc/external/cricket/PortInterface.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/rtc/DiffServCodePoint.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/rtc/SocketAddress.h"
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class StunRequest; }
namespace cricket { class StunStats; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class Thread; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class AsyncDnsResolverInterface; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnka195d6;
        ::ll::UntypedStorage<8, 64> mUnk793108;
        ::ll::UntypedStorage<8, 16> mUnkb399b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddressResolver& operator=(AddressResolver const&);
        AddressResolver(AddressResolver const&);
        AddressResolver();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AddressResolver(
            ::rtc::PacketSocketFactory*                             factory,
            ::std::function<void(::rtc::SocketAddress const&, int)> done_callback
        );

        MCNAPI bool
        GetResolvedAddress(::rtc::SocketAddress const& input, int family, ::rtc::SocketAddress* output) const;

        MCNAPI void
        Resolve(::rtc::SocketAddress const& address, int family, ::webrtc::FieldTrialsView const& field_trials);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::rtc::PacketSocketFactory*                             factory,
            ::std::function<void(::rtc::SocketAddress const&, int)> done_callback
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk376c27;
    ::ll::UntypedStorage<8, 16> mUnk8aeaa5;
    ::ll::UntypedStorage<8, 16> mUnkfd4ead;
    ::ll::UntypedStorage<8, 88> mUnka4b56d;
    ::ll::UntypedStorage<8, 24> mUnkcaca4f;
    ::ll::UntypedStorage<8, 16> mUnk25aa4a;
    ::ll::UntypedStorage<4, 4>  mUnk2b5421;
    ::ll::UntypedStorage<4, 4>  mUnkd369e5;
    ::ll::UntypedStorage<8, 8>  mUnk97aa4e;
    ::ll::UntypedStorage<1, 1>  mUnk925be5;
    ::ll::UntypedStorage<4, 4>  mUnke81ffc;
    ::ll::UntypedStorage<4, 4>  mUnkcc71f3;
    ::ll::UntypedStorage<4, 4>  mUnk3072d4;
    ::ll::UntypedStorage<8, 24> mUnk6d7703;
    ::ll::UntypedStorage<1, 1>  mUnkb6d855;
    ::ll::UntypedStorage<1, 1>  mUnk6d449a;
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

    virtual ::cricket::Connection* CreateConnection(
        ::cricket::Candidate const&               address,
        ::cricket::PortInterface::CandidateOrigin origin
    ) /*override*/;

    virtual int SetOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual int GetOption(::rtc::Socket::Option opt, int* value) /*override*/;

    virtual int GetError() /*override*/;

    virtual bool
    HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet) /*override*/;

    virtual bool SupportsProtocol(::std::string_view protocol) const /*override*/;

    virtual ::cricket::ProtocolType GetProtocol() const /*override*/;

    virtual void GetStunStats(::std::optional<::cricket::StunStats>* stats) /*override*/;

    virtual int SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    ) /*override*/;

    virtual void UpdateNetworkCost() /*override*/;

    virtual ::rtc::DiffServCodePoint StunDscpValue() const /*override*/;

    virtual void PostAddAddress(bool is_final) /*override*/;

    virtual void OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool HasStunCandidateWithAddress(::rtc::SocketAddress const& addr) const;

    MCNAPI bool Init();

    MCNAPI void MaybePrepareStunCandidate();

    MCNAPI bool MaybeSetDefaultLocalAddress(::rtc::SocketAddress* addr) const;

    MCNAPI void MaybeSetPortCompleteOrError();

    MCNAPI void OnLocalAddressReady(::rtc::AsyncPacketSocket* socket, ::rtc::SocketAddress const& address);

    MCNAPI void OnReadPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI void OnReadyToSend(::rtc::AsyncPacketSocket* socket);

    MCNAPI void OnResolveResult(::rtc::SocketAddress const& input, int error);

    MCNAPI void OnSendPacket(void const* data, uint64 size, ::cricket::StunRequest* req);

    MCNAPI void OnStunBindingOrResolveRequestFailed(
        ::rtc::SocketAddress const& stun_server_addr,
        int                         error_code,
        ::std::string_view          reason
    );

    MCNAPI void OnStunBindingRequestSucceeded(
        int                         rtt_ms,
        ::rtc::SocketAddress const& stun_server_addr,
        ::rtc::SocketAddress const& stun_reflected_addr
    );

    MCNAPI void ResolveStunAddress(::rtc::SocketAddress const& stun_addr);

    MCNAPI void SendStunBindingRequest(::rtc::SocketAddress const& stun_addr);

    MCNAPI void SendStunBindingRequests();

    MCNAPI UDPPort(
        ::rtc::Thread*                              thread,
        ::webrtc::IceCandidateType                  type,
        ::rtc::PacketSocketFactory*                 factory,
        ::rtc::Network const*                       network,
        ::std::shared_ptr<::rtc::AsyncPacketSocket> socket,
        ::std::string_view                          username,
        ::std::string_view                          password,
        bool                                        emit_local_for_anyaddress,
        ::webrtc::FieldTrialsView const*            field_trials
    );

    MCNAPI UDPPort(
        ::rtc::Thread*                   thread,
        ::webrtc::IceCandidateType       type,
        ::rtc::PacketSocketFactory*      factory,
        ::rtc::Network const*            network,
        ushort                           min_port,
        ushort                           max_port,
        ::std::string_view               username,
        ::std::string_view               password,
        bool                             emit_local_for_anyaddress,
        ::webrtc::FieldTrialsView const* field_trials
    );

    MCNAPI void set_stun_keepalive_delay(::std::optional<int> const& delay);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::Thread*                              thread,
        ::webrtc::IceCandidateType                  type,
        ::rtc::PacketSocketFactory*                 factory,
        ::rtc::Network const*                       network,
        ::std::shared_ptr<::rtc::AsyncPacketSocket> socket,
        ::std::string_view                          username,
        ::std::string_view                          password,
        bool                                        emit_local_for_anyaddress,
        ::webrtc::FieldTrialsView const*            field_trials
    );

    MCNAPI void* $ctor(
        ::rtc::Thread*                   thread,
        ::webrtc::IceCandidateType       type,
        ::rtc::PacketSocketFactory*      factory,
        ::rtc::Network const*            network,
        ushort                           min_port,
        ushort                           max_port,
        ::std::string_view               username,
        ::std::string_view               password,
        bool                             emit_local_for_anyaddress,
        ::webrtc::FieldTrialsView const* field_trials
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

    MCNAPI ::cricket::Connection*
    $CreateConnection(::cricket::Candidate const& address, ::cricket::PortInterface::CandidateOrigin origin);

    MCNAPI int $SetOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $GetOption(::rtc::Socket::Option opt, int* value);

    MCNAPI int $GetError();

    MCNAPI bool $HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI bool $SupportsProtocol(::std::string_view protocol) const;

    MCNAPI ::cricket::ProtocolType $GetProtocol() const;

    MCNAPI void $GetStunStats(::std::optional<::cricket::StunStats>* stats);

    MCNAPI int $SendTo(
        void const*                 data,
        uint64                      size,
        ::rtc::SocketAddress const& addr,
        ::rtc::PacketOptions const& options,
        bool                        payload
    );

    MCNAPI void $UpdateNetworkCost();

    MCNAPI ::rtc::DiffServCodePoint $StunDscpValue() const;

    MCNAPI void $PostAddAddress(bool is_final);

    MCNAPI void $OnSentPacket(::rtc::AsyncPacketSocket* socket, ::rtc::SentPacket const& sent_packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace cricket
