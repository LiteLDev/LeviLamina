#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/cricket/PortInterface.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/rtc/DiffServCodePoint.h"
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/sigslot/has_slots.h"
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
namespace sigslot { class single_threaded; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class Port : public ::cricket::PortInterface, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // Port inner types define
    enum class State : int {
        Init                 = 0,
        KeepAliveUntilPruned = 1,
        Pruned               = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkf8829f;
    ::ll::UntypedStorage<8, 48> mUnk32b903;
    ::ll::UntypedStorage<8, 48> mUnkfb6f17;
    ::ll::UntypedStorage<8, 48> mUnkd8690d;
    ::ll::UntypedStorage<8, 8>  mUnk1f5d40;
    ::ll::UntypedStorage<8, 8>  mUnkef78fb;
    ::ll::UntypedStorage<8, 16> mUnkee3bac;
    ::ll::UntypedStorage<4, 4>  mUnk2e7652;
    ::ll::UntypedStorage<1, 1>  mUnka1e9f2;
    ::ll::UntypedStorage<8, 8>  mUnk6a65ff;
    ::ll::UntypedStorage<2, 2>  mUnka89da2;
    ::ll::UntypedStorage<2, 2>  mUnkd9b8ef;
    ::ll::UntypedStorage<8, 32> mUnk72604c;
    ::ll::UntypedStorage<4, 4>  mUnk3fbd2d;
    ::ll::UntypedStorage<4, 4>  mUnkf89ead;
    ::ll::UntypedStorage<8, 32> mUnk91f197;
    ::ll::UntypedStorage<8, 32> mUnk4c6b73;
    ::ll::UntypedStorage<8, 24> mUnkd50e06;
    ::ll::UntypedStorage<8, 16> mUnkd49eb3;
    ::ll::UntypedStorage<4, 4>  mUnkd69d7a;
    ::ll::UntypedStorage<1, 1>  mUnk54ba3b;
    ::ll::UntypedStorage<4, 4>  mUnk63f381;
    ::ll::UntypedStorage<8, 8>  mUnk1da110;
    ::ll::UntypedStorage<1, 1>  mUnk2c9e2c;
    ::ll::UntypedStorage<8, 32> mUnk56e09d;
    ::ll::UntypedStorage<1, 1>  mUnk74a12f;
    ::ll::UntypedStorage<2, 2>  mUnk69b322;
    ::ll::UntypedStorage<4, 4>  mUnkdb5cc3;
    ::ll::UntypedStorage<8, 8>  mUnkde22e1;
    ::ll::UntypedStorage<4, 4>  mUnkb0ecc0;
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
    virtual void SetIceRole(::cricket::IceRole) /*override*/;

    // vIndex: 5
    virtual void SetIceTiebreaker(uint64) /*override*/;

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
    virtual void set_generation(uint) /*override*/;

    // vIndex: 16
    virtual ::std::vector<::cricket::Candidate> const& Candidates() const /*override*/;

    // vIndex: 19
    virtual void SubscribePortDestroyed(::std::function<void(::cricket::PortInterface*)>) /*override*/;

    // vIndex: 10
    virtual ::cricket::Connection* GetConnection(::rtc::SocketAddress const&) /*override*/;

    // vIndex: 23
    virtual void DestroyConnection(::cricket::Connection*) /*override*/;

    // vIndex: 24
    virtual void DestroyConnectionAsync(::cricket::Connection*) /*override*/;

    // vIndex: 41
    virtual bool HandleIncomingPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    // vIndex: 42
    virtual bool CanHandleIncomingPacketsFrom(::rtc::SocketAddress const&) const;

    // vIndex: 18
    virtual void SendBindingErrorResponse(
        ::cricket::StunMessage*,
        ::rtc::SocketAddress const&,
        int,
        ::std::string_view
    ) /*override*/;

    // vIndex: 27
    virtual ::std::string const& user_agent() /*override*/;

    // vIndex: 28
    virtual ::rtc::ProxyInfo const& proxy() /*override*/;

    // vIndex: 20
    virtual void EnablePortPackets() /*override*/;

    // vIndex: 21
    virtual ::std::string ToString() const /*override*/;

    // vIndex: 37
    virtual bool ParseStunUsername(::cricket::StunMessage const*, ::std::string*, ::std::string*) const /*override*/;

    // vIndex: 38
    virtual ::std::string CreateStunUsername(::std::string_view) const /*override*/;

    // vIndex: 39
    virtual bool
    MaybeIceRoleConflict(::rtc::SocketAddress const&, ::cricket::IceMessage*, ::std::string_view) /*override*/;

    // vIndex: 43
    virtual void OnSentPacket(::rtc::AsyncPacketSocket*, ::rtc::SentPacket const&) = 0;

    // vIndex: 33
    virtual void AddPrflxCandidate(::cricket::Candidate const&) /*override*/;

    // vIndex: 40
    virtual short network_cost() const /*override*/;

    // vIndex: 22
    virtual void GetStunStats(::std::optional<::cricket::StunStats>*) /*override*/;

    // vIndex: 34
    virtual void UpdateNetworkCost() /*override*/;

    // vIndex: 44
    virtual void PostAddAddress(bool);

    // vIndex: 36
    virtual bool
    GetStunMessage(char const*, uint64, ::rtc::SocketAddress const&, ::std::unique_ptr<::cricket::IceMessage>*, ::std::string*) /*override*/
        ;

    // vIndex: 35
    virtual ::rtc::DiffServCodePoint StunDscpValue() const /*override*/;

    // vIndex: 45
    virtual void HandleConnectionDestroyed(::cricket::Connection*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddAddress(
        ::rtc::SocketAddress const&,
        ::rtc::SocketAddress const&,
        ::rtc::SocketAddress const&,
        ::std::string_view,
        ::std::string_view,
        ::std::string_view,
        ::webrtc::IceCandidateType,
        uint,
        uint,
        ::std::string_view,
        bool
    );

    MCAPI void AddOrReplaceConnection(::cricket::Connection*);

    MCAPI void CancelPendingTasks();

    MCAPI void CopyPortInformationToPacketInfo(::rtc::PacketInfo*) const;

    MCAPI void Destroy();

    MCAPI void DestroyAllConnections();

    MCAPI void DestroyConnectionInternal(::cricket::Connection*, bool);

    MCAPI void DestroyIfDead();

    MCAPI void FinishAddingAddress(::cricket::Candidate const&, bool);

    MCAPI bool IsCompatibleAddress(::rtc::SocketAddress const&);

    MCAPI void KeepAliveUntilPruned();

    MCAPI bool MaybeObfuscateAddress(::cricket::Candidate const&, bool);

    MCAPI ::rtc::WeakPtr<::cricket::Port> NewWeakPtr();

    MCAPI bool OnConnectionDestroyed(::cricket::Connection*);

    MCAPI void OnNetworkTypeChanged(::rtc::Network const*);

    MCAPI void OnReadPacket(::rtc::ReceivedPacket const&, ::cricket::ProtocolType);

    MCAPI void OnReadyToSend();

    MCAPI
    Port(::webrtc::TaskQueueBase*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::std::string_view, ::std::string_view, ::webrtc::FieldTrialsView const*);

    MCAPI Port(
        ::webrtc::TaskQueueBase*,
        ::webrtc::IceCandidateType,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ushort,
        ushort,
        ::std::string_view,
        ::std::string_view,
        ::webrtc::FieldTrialsView const*,
        bool
    );

    MCAPI void PostDestroyIfDead(bool);

    MCAPI void Prune();

    MCAPI void SendPortDestroyed(::cricket::Port*);

    MCAPI void
    SendUnknownAttributesErrorResponse(::cricket::StunMessage*, ::rtc::SocketAddress const&, ::std::vector<ushort> const&);

    MCAPI void SetIceParameters(int, ::std::string_view, ::std::string_view);

    MCAPI void set_content_name(::std::string_view);

    MCAPI ::std::string const& username_fragment() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::TaskQueueBase*, ::webrtc::IceCandidateType, ::rtc::PacketSocketFactory*, ::rtc::Network const*, ::std::string_view, ::std::string_view, ::webrtc::FieldTrialsView const*);

    MCAPI void* $ctor(
        ::webrtc::TaskQueueBase*,
        ::webrtc::IceCandidateType,
        ::rtc::PacketSocketFactory*,
        ::rtc::Network const*,
        ushort,
        ushort,
        ::std::string_view,
        ::std::string_view,
        ::webrtc::FieldTrialsView const*,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::webrtc::IceCandidateType $Type() const;

    MCAPI ::rtc::Network const* $Network() const;

    MCAPI ::cricket::IceRole $GetIceRole() const;

    MCAPI void $SetIceRole(::cricket::IceRole);

    MCAPI void $SetIceTiebreaker(uint64);

    MCAPI uint64 $IceTiebreaker() const;

    MCAPI bool $SharedSocket() const;

    MCAPI ::webrtc::TaskQueueBase* $thread();

    MCAPI ::rtc::PacketSocketFactory* $socket_factory() const;

    MCAPI ::std::string const& $content_name() const;

    MCAPI bool $send_retransmit_count_attribute() const;

    MCAPI uint $generation() const;

    MCAPI void $set_generation(uint);

    MCAPI ::std::vector<::cricket::Candidate> const& $Candidates() const;

    MCAPI void $SubscribePortDestroyed(::std::function<void(::cricket::PortInterface*)>);

    MCAPI ::cricket::Connection* $GetConnection(::rtc::SocketAddress const&);

    MCAPI void $DestroyConnection(::cricket::Connection*);

    MCAPI void $DestroyConnectionAsync(::cricket::Connection*);

    MCAPI bool $HandleIncomingPacket(::rtc::AsyncPacketSocket*, ::rtc::ReceivedPacket const&);

    MCAPI bool $CanHandleIncomingPacketsFrom(::rtc::SocketAddress const&) const;

    MCAPI void $SendBindingErrorResponse(::cricket::StunMessage*, ::rtc::SocketAddress const&, int, ::std::string_view);

    MCAPI ::std::string const& $user_agent();

    MCAPI ::rtc::ProxyInfo const& $proxy();

    MCAPI void $EnablePortPackets();

    MCAPI ::std::string $ToString() const;

    MCAPI bool $ParseStunUsername(::cricket::StunMessage const*, ::std::string*, ::std::string*) const;

    MCAPI ::std::string $CreateStunUsername(::std::string_view) const;

    MCAPI bool $MaybeIceRoleConflict(::rtc::SocketAddress const&, ::cricket::IceMessage*, ::std::string_view);

    MCAPI void $AddPrflxCandidate(::cricket::Candidate const&);

    MCAPI short $network_cost() const;

    MCAPI void $GetStunStats(::std::optional<::cricket::StunStats>*);

    MCAPI void $UpdateNetworkCost();

    MCAPI void $PostAddAddress(bool);

    MCAPI bool
    $GetStunMessage(char const*, uint64, ::rtc::SocketAddress const&, ::std::unique_ptr<::cricket::IceMessage>*, ::std::string*);

    MCAPI ::rtc::DiffServCodePoint $StunDscpValue() const;

    MCAPI void $HandleConnectionDestroyed(::cricket::Connection*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForPortInterface();
    // NOLINTEND
};

} // namespace cricket
