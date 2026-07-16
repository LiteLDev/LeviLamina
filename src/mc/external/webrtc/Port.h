#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/DiffServCodePoint.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/LocalNetworkAccessPermissionStatus.h"
#include "mc/external/webrtc/PortInterface.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class IceMessage; }
namespace webrtc { class Network; }
namespace webrtc { class PacketSocketFactory; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunStats; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct IceCandidateErrorEvent; }
namespace webrtc { struct PacketInfo; }
namespace webrtc { struct SentPacketInfo; }
// clang-format on

namespace webrtc {

class Port : public ::webrtc::PortInterface, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // Port inner types declare
    // clang-format off
    struct PortParametersRef;
    // clang-format on

    // Port inner types define
    enum class State : int {
        Init                 = 0,
        KeepAliveUntilPruned = 1,
        Pruned               = 2,
    };

    struct PortParametersRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk18088c;
        ::ll::UntypedStorage<8, 8>  mUnk155c84;
        ::ll::UntypedStorage<8, 8>  mUnkf5c575;
        ::ll::UntypedStorage<8, 8>  mUnkdff11f;
        ::ll::UntypedStorage<8, 16> mUnk70b071;
        ::ll::UntypedStorage<8, 16> mUnk7f6724;
        ::ll::UntypedStorage<8, 8>  mUnk7c1d00;
        // NOLINTEND

    public:
        // prevent constructor by default
        PortParametersRef& operator=(PortParametersRef const&);
        PortParametersRef(PortParametersRef const&);
        PortParametersRef();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PortParametersRef();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk10cd62;
    ::ll::UntypedStorage<8, 48> mUnk8bc6d2;
    ::ll::UntypedStorage<8, 48> mUnk176f92;
    ::ll::UntypedStorage<8, 40> mUnkb98d1f;
    ::ll::UntypedStorage<8, 8>  mUnkf3d6ae;
    ::ll::UntypedStorage<8, 8>  mUnkefa93b;
    ::ll::UntypedStorage<8, 8>  mUnkf8b468;
    ::ll::UntypedStorage<4, 4>  mUnk7d7d30;
    ::ll::UntypedStorage<1, 1>  mUnk26c3d4;
    ::ll::UntypedStorage<8, 8>  mUnk26280e;
    ::ll::UntypedStorage<2, 2>  mUnk119d59;
    ::ll::UntypedStorage<2, 2>  mUnk26e908;
    ::ll::UntypedStorage<8, 32> mUnk1b549e;
    ::ll::UntypedStorage<4, 4>  mUnk356e65;
    ::ll::UntypedStorage<4, 4>  mUnkd8d269;
    ::ll::UntypedStorage<8, 32> mUnk9c0702;
    ::ll::UntypedStorage<8, 32> mUnkf80029;
    ::ll::UntypedStorage<8, 24> mUnk9c001a;
    ::ll::UntypedStorage<8, 16> mUnk8d0745;
    ::ll::UntypedStorage<4, 4>  mUnk1eeea2;
    ::ll::UntypedStorage<1, 1>  mUnk7f2c9b;
    ::ll::UntypedStorage<4, 4>  mUnk1f2e93;
    ::ll::UntypedStorage<8, 8>  mUnk86c2d7;
    ::ll::UntypedStorage<1, 1>  mUnkf2112c;
    ::ll::UntypedStorage<2, 2>  mUnkf945d8;
    ::ll::UntypedStorage<4, 4>  mUnk5f1f2e;
    ::ll::UntypedStorage<8, 8>  mUnkfaa855;
    ::ll::UntypedStorage<4, 4>  mUnk856df7;
    ::ll::UntypedStorage<8, 24> mUnk402059;
    ::ll::UntypedStorage<8, 32> mUnkc2162e;
    ::ll::UntypedStorage<8, 32> mUnk5ebf79;
    ::ll::UntypedStorage<8, 32> mUnk214c51;
    ::ll::UntypedStorage<8, 32> mUnk87b3ae;
    ::ll::UntypedStorage<8, 16> mUnke44f62;
    // NOLINTEND

public:
    // prevent constructor by default
    Port& operator=(Port const&);
    Port(Port const&);
    Port();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Port() /*override*/;

    virtual ::webrtc::IceCandidateType Type() const /*override*/;

    virtual ::webrtc::Network const* Network() const /*override*/;

    virtual ::webrtc::IceRole GetIceRole() const /*override*/;

    virtual void SetIceRole(::webrtc::IceRole role) /*override*/;

    virtual void SetIceTiebreaker(uint64 tiebreaker) /*override*/;

    virtual uint64 IceTiebreaker() const /*override*/;

    virtual bool SharedSocket() const /*override*/;

    virtual ::webrtc::TaskQueueBase* thread() /*override*/;

    virtual ::webrtc::PacketSocketFactory* socket_factory() const /*override*/;

    virtual ::std::string const& content_name() const /*override*/;

    virtual bool send_retransmit_count_attribute() const /*override*/;

    virtual uint generation() const /*override*/;

    virtual void set_generation(uint generation) /*override*/;

    virtual ::std::vector<::webrtc::Candidate> const& Candidates() const /*override*/;

    virtual void SubscribePortDestroyed(::std::function<void(::webrtc::PortInterface*)> callback) /*override*/;

    virtual ::webrtc::Connection* GetConnection(::webrtc::SocketAddress const& remote_addr) /*override*/;

    virtual void DestroyConnection(::webrtc::Connection* conn) /*override*/;

    virtual void DestroyConnectionAsync(::webrtc::Connection* conn) /*override*/;

    virtual bool HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    virtual bool CanHandleIncomingPacketsFrom(::webrtc::SocketAddress const& addr) const;

    virtual void SendBindingErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        int                            error_code,
        ::std::string_view             reason
    ) /*override*/;

    virtual void EnablePortPackets() /*override*/;

    virtual ::std::string ToString() const /*override*/;

    virtual bool ParseStunUsername(
        ::webrtc::StunMessage const* stun_msg,
        ::std::string*               local_ufrag,
        ::std::string*               remote_ufrag
    ) const /*override*/;

    virtual ::std::string CreateStunUsername(::std::string_view remote_username) const /*override*/;

    virtual bool MaybeIceRoleConflict(
        ::webrtc::SocketAddress const& addr,
        ::webrtc::IceMessage*          stun_msg,
        ::std::string_view             remote_ufrag
    ) /*override*/;

    virtual void OnSentPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::SentPacketInfo const& sent_packet) = 0;

    virtual void AddPrflxCandidate(::webrtc::Candidate const& local) /*override*/;

    virtual short network_cost() const /*override*/;

    virtual void GetStunStats(::std::optional<::webrtc::StunStats>* stats) /*override*/;

    virtual void SubscribeRoleConflict(::absl::AnyInvocable<void()> callback) /*override*/;

    virtual void NotifyRoleConflict() /*override*/;

    virtual void UpdateNetworkCost() /*override*/;

    virtual void PostAddAddress(bool is_final);

    virtual bool GetStunMessage(
        char const*                              data,
        uint64                                   size,
        ::webrtc::SocketAddress const&           addr,
        ::std::unique_ptr<::webrtc::IceMessage>* out_msg,
        ::std::string*                           out_username
    ) /*override*/;

    virtual ::webrtc::DiffServCodePoint StunDscpValue() const /*override*/;

    virtual void HandleConnectionDestroyed(::webrtc::Connection* conn);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAddress(
        ::webrtc::SocketAddress const& address,
        ::webrtc::SocketAddress const& base_address,
        ::webrtc::SocketAddress const& related_address,
        ::std::string_view             protocol,
        ::std::string_view             relay_protocol,
        ::std::string_view             tcptype,
        ::webrtc::IceCandidateType     type,
        uint                           type_preference,
        uint                           relay_preference,
        ::std::string_view             url,
        bool                           is_final
    );

    MCNAPI void AddOrReplaceConnection(::webrtc::Connection* conn);

    MCNAPI void CopyPortInformationToPacketInfo(::webrtc::PacketInfo* info) const;

    MCNAPI void Destroy();

    MCNAPI void DestroyAllConnections();

    MCNAPI void DestroyConnectionInternal(::webrtc::Connection* conn, bool async);

    MCNAPI void FinishAddingAddress(::webrtc::Candidate const& c, bool is_final);

    MCNAPI bool IsCompatibleAddress(::webrtc::SocketAddress const& addr);

    MCNAPI void KeepAliveUntilPruned();

    MCNAPI bool MaybeObfuscateAddress(::webrtc::Candidate const& c, bool is_final);

    MCNAPI void MaybeRequestLocalNetworkAccessPermission(
        ::webrtc::SocketAddress const&                                           address,
        ::absl::AnyInvocable<void(::webrtc::LocalNetworkAccessPermissionStatus)> callback
    );

    MCNAPI ::webrtc::WeakPtr<::webrtc::Port> NewWeakPtr();

    MCNAPI void OnNetworkTypeChanged(::webrtc::Network const* network);

    MCNAPI void OnReadPacket(::webrtc::ReceivedIpPacket const& packet, ::webrtc::ProtocolType proto);

    MCNAPI void OnReadyToSend();

    MCNAPI Port(::webrtc::Port::PortParametersRef const& args, ::webrtc::IceCandidateType type);

    MCNAPI Port(
        ::webrtc::Port::PortParametersRef const& args,
        ::webrtc::IceCandidateType               type,
        ushort                                   min_port,
        ushort                                   max_port,
        bool                                     shared_socket
    );

    MCNAPI void PostDestroyIfDead(bool delayed);

    MCNAPI void Prune();

    MCNAPI void SendCandidateError(::webrtc::IceCandidateErrorEvent const& event);

    MCNAPI void SendCandidateReady(::webrtc::Candidate const& candidate);

    MCNAPI void SendCandidateReadyCallbackList(::webrtc::Port*, ::webrtc::Candidate const& candidate);

    MCNAPI void SendUnknownAttributesErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        ::std::vector<ushort> const&   unknown_types
    );

    MCNAPI void SetIceParameters(int component, ::std::string_view username_fragment, ::std::string_view password);

    MCNAPI void
    SubscribeCandidateError(::std::function<void(::webrtc::Port*, ::webrtc::IceCandidateErrorEvent const&)> callback);

    MCNAPI void
    SubscribeCandidateReadyCallback(::absl::AnyInvocable<void(::webrtc::Port*, ::webrtc::Candidate const&)> callback);

    MCNAPI void set_content_name(::std::string_view content_name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Port::PortParametersRef const& args, ::webrtc::IceCandidateType type);

    MCNAPI void* $ctor(
        ::webrtc::Port::PortParametersRef const& args,
        ::webrtc::IceCandidateType               type,
        ushort                                   min_port,
        ushort                                   max_port,
        bool                                     shared_socket
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
    MCNAPI ::webrtc::IceCandidateType $Type() const;

    MCNAPI ::webrtc::Network const* $Network() const;

    MCNAPI ::webrtc::IceRole $GetIceRole() const;

    MCNAPI void $SetIceRole(::webrtc::IceRole role);

    MCNAPI void $SetIceTiebreaker(uint64 tiebreaker);

    MCNAPI uint64 $IceTiebreaker() const;

    MCNAPI bool $SharedSocket() const;

    MCNAPI ::webrtc::TaskQueueBase* $thread();

    MCNAPI ::webrtc::PacketSocketFactory* $socket_factory() const;

    MCNAPI ::std::string const& $content_name() const;

    MCNAPI bool $send_retransmit_count_attribute() const;

    MCNAPI uint $generation() const;

    MCNAPI void $set_generation(uint generation);

    MCNAPI ::std::vector<::webrtc::Candidate> const& $Candidates() const;

    MCNAPI void $SubscribePortDestroyed(::std::function<void(::webrtc::PortInterface*)> callback);

    MCNAPI ::webrtc::Connection* $GetConnection(::webrtc::SocketAddress const& remote_addr);

    MCNAPI void $DestroyConnection(::webrtc::Connection* conn);

    MCNAPI void $DestroyConnectionAsync(::webrtc::Connection* conn);

    MCNAPI bool $HandleIncomingPacket(::webrtc::AsyncPacketSocket* socket, ::webrtc::ReceivedIpPacket const& packet);

    MCNAPI bool $CanHandleIncomingPacketsFrom(::webrtc::SocketAddress const& addr) const;

    MCNAPI void $SendBindingErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        int                            error_code,
        ::std::string_view             reason
    );

    MCNAPI void $EnablePortPackets();

    MCNAPI ::std::string $ToString() const;

    MCNAPI bool $ParseStunUsername(
        ::webrtc::StunMessage const* stun_msg,
        ::std::string*               local_ufrag,
        ::std::string*               remote_ufrag
    ) const;

    MCNAPI ::std::string $CreateStunUsername(::std::string_view remote_username) const;

    MCNAPI bool $MaybeIceRoleConflict(
        ::webrtc::SocketAddress const& addr,
        ::webrtc::IceMessage*          stun_msg,
        ::std::string_view             remote_ufrag
    );

    MCNAPI void $AddPrflxCandidate(::webrtc::Candidate const& local);

    MCNAPI short $network_cost() const;

    MCNAPI void $GetStunStats(::std::optional<::webrtc::StunStats>* stats);

    MCNAPI void $SubscribeRoleConflict(::absl::AnyInvocable<void()> callback);

    MCNAPI void $NotifyRoleConflict();

    MCNAPI void $UpdateNetworkCost();

    MCNAPI void $PostAddAddress(bool is_final);

    MCNAPI bool $GetStunMessage(
        char const*                              data,
        uint64                                   size,
        ::webrtc::SocketAddress const&           addr,
        ::std::unique_ptr<::webrtc::IceMessage>* out_msg,
        ::std::string*                           out_username
    );

    MCNAPI ::webrtc::DiffServCodePoint $StunDscpValue() const;

    MCNAPI void $HandleConnectionDestroyed(::webrtc::Connection* conn);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPortInterface();

    MCNAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace webrtc
