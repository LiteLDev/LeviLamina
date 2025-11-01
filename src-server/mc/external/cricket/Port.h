#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/cricket/PortInterface.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/rtc/DiffServCodePoint.h"
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class IceMessage; }
namespace cricket { class StunMessage; }
namespace cricket { class StunStats; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class ReceivedPacket; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketInfo; }
namespace rtc { struct ProxyInfo; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class Port : public ::cricket::PortInterface, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // Port inner types define
    enum class State : int {
        Init = 0,
        KeepAliveUntilPruned = 1,
        Pruned = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf8829f;
    ::ll::UntypedStorage<8, 48> mUnk32b903;
    ::ll::UntypedStorage<8, 48> mUnkfb6f17;
    ::ll::UntypedStorage<8, 48> mUnkd8690d;
    ::ll::UntypedStorage<8, 8> mUnk1f5d40;
    ::ll::UntypedStorage<8, 8> mUnkef78fb;
    ::ll::UntypedStorage<8, 16> mUnkee3bac;
    ::ll::UntypedStorage<4, 4> mUnk2e7652;
    ::ll::UntypedStorage<1, 1> mUnka1e9f2;
    ::ll::UntypedStorage<8, 8> mUnk6a65ff;
    ::ll::UntypedStorage<2, 2> mUnka89da2;
    ::ll::UntypedStorage<2, 2> mUnkd9b8ef;
    ::ll::UntypedStorage<8, 32> mUnk72604c;
    ::ll::UntypedStorage<4, 4> mUnk3fbd2d;
    ::ll::UntypedStorage<4, 4> mUnkf89ead;
    ::ll::UntypedStorage<8, 32> mUnk91f197;
    ::ll::UntypedStorage<8, 32> mUnk4c6b73;
    ::ll::UntypedStorage<8, 24> mUnkd50e06;
    ::ll::UntypedStorage<8, 16> mUnkd49eb3;
    ::ll::UntypedStorage<4, 4> mUnkd69d7a;
    ::ll::UntypedStorage<1, 1> mUnk54ba3b;
    ::ll::UntypedStorage<4, 4> mUnk63f381;
    ::ll::UntypedStorage<8, 8> mUnk1da110;
    ::ll::UntypedStorage<1, 1> mUnk2c9e2c;
    ::ll::UntypedStorage<8, 32> mUnk56e09d;
    ::ll::UntypedStorage<1, 1> mUnk74a12f;
    ::ll::UntypedStorage<2, 2> mUnk69b322;
    ::ll::UntypedStorage<4, 4> mUnkdb5cc3;
    ::ll::UntypedStorage<8, 8> mUnkde22e1;
    ::ll::UntypedStorage<4, 4> mUnkb0ecc0;
    ::ll::UntypedStorage<8, 32> mUnk637d1b;
    ::ll::UntypedStorage<8, 16> mUnk6b24c4;
    // NOLINTEND

public:
    // prevent constructor by default
    Port& operator=(Port const&);
    Port(Port const&);
    Port();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Port() /*override*/;

    // vIndex: 1
    virtual ::webrtc::IceCandidateType Type() const /*override*/;

    // vIndex: 2
    virtual ::rtc::Network const* Network() const /*override*/;

    // vIndex: 4
    virtual ::cricket::IceRole GetIceRole() const /*override*/;

    // vIndex: 3
    virtual void SetIceRole(::cricket::IceRole role) /*override*/;

    // vIndex: 5
    virtual void SetIceTiebreaker(uint64 tiebreaker) /*override*/;

    // vIndex: 6
    virtual uint64 IceTiebreaker() const /*override*/;

    // vIndex: 7
    virtual bool SharedSocket() const /*override*/;

    // vIndex: 25
    virtual ::webrtc::TaskQueueBase* thread() /*override*/;

    // vIndex: 26
    virtual ::rtc::PacketSocketFactory* socket_factory() const /*override*/;

    // vIndex: 32
    virtual ::std::string const& content_name() const /*override*/;

    // vIndex: 31
    virtual bool send_retransmit_count_attribute() const /*override*/;

    // vIndex: 29
    virtual uint generation() const /*override*/;

    // vIndex: 30
    virtual void set_generation(uint generation) /*override*/;

    // vIndex: 16
    virtual ::std::vector<::cricket::Candidate> const& Candidates() const /*override*/;

    // vIndex: 19
    virtual void SubscribePortDestroyed(::std::function<void(::cricket::PortInterface*)> callback) /*override*/;

    // vIndex: 10
    virtual ::cricket::Connection* GetConnection(::rtc::SocketAddress const& remote_addr) /*override*/;

    // vIndex: 23
    virtual void DestroyConnection(::cricket::Connection* conn) /*override*/;

    // vIndex: 24
    virtual void DestroyConnectionAsync(::cricket::Connection* conn) /*override*/;

    // vIndex: 41
    virtual bool HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    // vIndex: 42
    virtual bool CanHandleIncomingPacketsFrom(::rtc::SocketAddress const&) const;

    // vIndex: 18
    virtual void SendBindingErrorResponse(::cricket::StunMessage* message, ::rtc::SocketAddress const& addr, int error_code, ::std::string_view reason) /*override*/;

    // vIndex: 27
    virtual ::std::string const& user_agent() /*override*/;

    // vIndex: 28
    virtual ::rtc::ProxyInfo const& proxy() /*override*/;

    // vIndex: 20
    virtual void EnablePortPackets() /*override*/;

    // vIndex: 21
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 37
    virtual bool ParseStunUsername(::cricket::StunMessage const* stun_msg, ::std::string* local_ufrag, ::std::string* remote_ufrag) const /*override*/;

    // vIndex: 38
    virtual ::std::string CreateStunUsername(::std::string_view remote_username) const /*override*/;

    // vIndex: 39
    virtual bool MaybeIceRoleConflict(::rtc::SocketAddress const& addr, ::cricket::IceMessage* stun_msg, ::std::string_view remote_ufrag) /*override*/;

    // vIndex: 43
    virtual void OnSentPacket(::rtc::AsyncPacketSocket*, ::rtc::SentPacket const&) = 0;

    // vIndex: 33
    virtual void AddPrflxCandidate(::cricket::Candidate const& local) /*override*/;

    // vIndex: 40
    virtual short network_cost() const /*override*/;

    // vIndex: 22
    virtual void GetStunStats(::std::optional<::cricket::StunStats>* stats) /*override*/;

    // vIndex: 34
    virtual void UpdateNetworkCost() /*override*/;

    // vIndex: 44
    virtual void PostAddAddress(bool is_final);

    // vIndex: 36
    virtual bool GetStunMessage(char const* data, uint64 size, ::rtc::SocketAddress const& addr, ::std::unique_ptr<::cricket::IceMessage>* out_msg, ::std::string* out_username) /*override*/;

    // vIndex: 35
    virtual ::rtc::DiffServCodePoint StunDscpValue() const /*override*/;

    // vIndex: 45
    virtual void HandleConnectionDestroyed(::cricket::Connection* conn);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAddress(::rtc::SocketAddress const& address, ::rtc::SocketAddress const& base_address, ::rtc::SocketAddress const& related_address, ::std::string_view protocol, ::std::string_view relay_protocol, ::std::string_view tcptype, ::webrtc::IceCandidateType type, uint type_preference, uint relay_preference, ::std::string_view url, bool is_final);

    MCNAPI void AddOrReplaceConnection(::cricket::Connection* conn);

    MCNAPI void CancelPendingTasks();

    MCNAPI void CopyPortInformationToPacketInfo(::rtc::PacketInfo* info) const;

    MCNAPI void Destroy();

    MCNAPI void DestroyAllConnections();

    MCNAPI void DestroyConnectionInternal(::cricket::Connection* conn, bool async);

    MCNAPI void DestroyIfDead();

    MCNAPI void FinishAddingAddress(::cricket::Candidate const& c, bool is_final);

    MCNAPI bool IsCompatibleAddress(::rtc::SocketAddress const& addr);

    MCNAPI void KeepAliveUntilPruned();

    MCNAPI bool MaybeObfuscateAddress(::cricket::Candidate const& c, bool is_final);

    MCNAPI ::rtc::WeakPtr<::cricket::Port> NewWeakPtr();

    MCNAPI bool OnConnectionDestroyed(::cricket::Connection* conn);

    MCNAPI void OnNetworkTypeChanged(::rtc::Network const* network);

    MCNAPI void OnReadPacket(::rtc::ReceivedPacket const& packet, ::cricket::ProtocolType proto);

    MCNAPI void OnReadyToSend();

    MCNAPI Port(::webrtc::TaskQueueBase* thread, ::webrtc::IceCandidateType type, ::rtc::PacketSocketFactory* factory, ::rtc::Network const* network, ::std::string_view username_fragment, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials);

    MCNAPI Port(::webrtc::TaskQueueBase* thread, ::webrtc::IceCandidateType type, ::rtc::PacketSocketFactory* factory, ::rtc::Network const* network, ushort min_port, ushort max_port, ::std::string_view username_fragment, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials, bool shared_socket);

    MCNAPI void PostDestroyIfDead(bool delayed);

    MCNAPI void Prune();

    MCNAPI void SendPortDestroyed(::cricket::Port* port);

    MCNAPI void SendUnknownAttributesErrorResponse(::cricket::StunMessage* message, ::rtc::SocketAddress const& addr, ::std::vector<ushort> const& unknown_types);

    MCNAPI void SetIceParameters(int component, ::std::string_view username_fragment, ::std::string_view password);

    MCNAPI void set_content_name(::std::string_view content_name);

    MCNAPI ::std::string const& username_fragment() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::TaskQueueBase* thread, ::webrtc::IceCandidateType type, ::rtc::PacketSocketFactory* factory, ::rtc::Network const* network, ::std::string_view username_fragment, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials);

    MCNAPI void* $ctor(::webrtc::TaskQueueBase* thread, ::webrtc::IceCandidateType type, ::rtc::PacketSocketFactory* factory, ::rtc::Network const* network, ushort min_port, ushort max_port, ::std::string_view username_fragment, ::std::string_view password, ::webrtc::FieldTrialsView const* field_trials, bool shared_socket);
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

    MCNAPI ::rtc::Network const* $Network() const;

    MCNAPI ::cricket::IceRole $GetIceRole() const;

    MCNAPI void $SetIceRole(::cricket::IceRole role);

    MCNAPI void $SetIceTiebreaker(uint64 tiebreaker);

    MCNAPI uint64 $IceTiebreaker() const;

    MCNAPI bool $SharedSocket() const;

    MCNAPI ::webrtc::TaskQueueBase* $thread();

    MCNAPI ::rtc::PacketSocketFactory* $socket_factory() const;

    MCNAPI ::std::string const& $content_name() const;

    MCNAPI bool $send_retransmit_count_attribute() const;

    MCNAPI uint $generation() const;

    MCNAPI void $set_generation(uint generation);

    MCNAPI ::std::vector<::cricket::Candidate> const& $Candidates() const;

    MCNAPI void $SubscribePortDestroyed(::std::function<void(::cricket::PortInterface*)> callback);

    MCNAPI ::cricket::Connection* $GetConnection(::rtc::SocketAddress const& remote_addr);

    MCNAPI void $DestroyConnection(::cricket::Connection* conn);

    MCNAPI void $DestroyConnectionAsync(::cricket::Connection* conn);

    MCNAPI bool $HandleIncomingPacket(::rtc::AsyncPacketSocket* socket, ::rtc::ReceivedPacket const& packet);

    MCNAPI bool $CanHandleIncomingPacketsFrom(::rtc::SocketAddress const&) const;

    MCNAPI void $SendBindingErrorResponse(::cricket::StunMessage* message, ::rtc::SocketAddress const& addr, int error_code, ::std::string_view reason);

    MCNAPI ::std::string const& $user_agent();

    MCNAPI ::rtc::ProxyInfo const& $proxy();

    MCNAPI void $EnablePortPackets();

    MCNAPI ::std::string $ToString() const;

    MCNAPI bool $ParseStunUsername(::cricket::StunMessage const* stun_msg, ::std::string* local_ufrag, ::std::string* remote_ufrag) const;

    MCNAPI ::std::string $CreateStunUsername(::std::string_view remote_username) const;

    MCNAPI bool $MaybeIceRoleConflict(::rtc::SocketAddress const& addr, ::cricket::IceMessage* stun_msg, ::std::string_view remote_ufrag);

    MCNAPI void $AddPrflxCandidate(::cricket::Candidate const& local);

    MCNAPI short $network_cost() const;

    MCNAPI void $GetStunStats(::std::optional<::cricket::StunStats>* stats);

    MCNAPI void $UpdateNetworkCost();

    MCNAPI void $PostAddAddress(bool is_final);

    MCNAPI bool $GetStunMessage(char const* data, uint64 size, ::rtc::SocketAddress const& addr, ::std::unique_ptr<::cricket::IceMessage>* out_msg, ::std::string* out_username);

    MCNAPI ::rtc::DiffServCodePoint $StunDscpValue() const;

    MCNAPI void $HandleConnectionDestroyed(::cricket::Connection* conn);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForPortInterface();
    // NOLINTEND

};

}
