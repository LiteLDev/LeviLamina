#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/DiffServCodePoint.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/IceRole.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class Connection; }
namespace webrtc { class IceMessage; }
namespace webrtc { class Network; }
namespace webrtc { class PacketSocketFactory; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StunMessage; }
namespace webrtc { class StunStats; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct AsyncSocketPacketOptions; }
// clang-format on

namespace webrtc {

class PortInterface {
public:
    // PortInterface inner types define
    enum class CandidateOrigin : int {
        ThisPort  = 0,
        OtherPort = 1,
        Message   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkab312d;
    ::ll::UntypedStorage<8, 48> mUnkee30a4;
    ::ll::UntypedStorage<8, 48> mUnkc28818;
    ::ll::UntypedStorage<8, 48> mUnk730f28;
    // NOLINTEND

public:
    // prevent constructor by default
    PortInterface& operator=(PortInterface const&);
    PortInterface(PortInterface const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortInterface();

    virtual ::webrtc::IceCandidateType Type() const = 0;

    virtual ::webrtc::Network const* Network() const = 0;

    virtual void SetIceRole(::webrtc::IceRole role) = 0;

    virtual ::webrtc::IceRole GetIceRole() const = 0;

    virtual void SetIceTiebreaker(uint64 tiebreaker) = 0;

    virtual uint64 IceTiebreaker() const = 0;

    virtual bool SharedSocket() const = 0;

    virtual bool SupportsProtocol(::std::string_view protocol) const = 0;

    virtual void PrepareAddress() = 0;

    virtual ::webrtc::Connection* GetConnection(::webrtc::SocketAddress const& remote_addr) = 0;

    virtual ::webrtc::Connection*
    CreateConnection(::webrtc::Candidate const& address, ::webrtc::PortInterface::CandidateOrigin origin) = 0;

    virtual int SetOption(::webrtc::Socket::Option opt, int value) = 0;

    virtual int GetOption(::webrtc::Socket::Option opt, int* value) = 0;

    virtual int GetError() = 0;

    virtual ::webrtc::ProtocolType GetProtocol() const = 0;

    virtual ::std::vector<::webrtc::Candidate> const& Candidates() const = 0;

    virtual int SendTo(
        void const*                               data,
        uint64                                    size,
        ::webrtc::SocketAddress const&            addr,
        ::webrtc::AsyncSocketPacketOptions const& options,
        bool                                      payload
    ) = 0;

    virtual void SendBindingErrorResponse(
        ::webrtc::StunMessage*         message,
        ::webrtc::SocketAddress const& addr,
        int                            error_code,
        ::std::string_view             reason
    ) = 0;

    virtual void SubscribePortDestroyed(::std::function<void(::webrtc::PortInterface*)> callback) = 0;

    virtual void SubscribeRoleConflict(::absl::AnyInvocable<void()> callback) = 0;

    virtual void NotifyRoleConflict() = 0;

    virtual void EnablePortPackets() = 0;

    virtual ::std::string ToString() const = 0;

    virtual void GetStunStats(::std::optional<::webrtc::StunStats>* stats) = 0;

    virtual void DestroyConnection(::webrtc::Connection* conn) = 0;

    virtual void DestroyConnectionAsync(::webrtc::Connection* conn) = 0;

    virtual ::webrtc::TaskQueueBase* thread() = 0;

    virtual ::webrtc::PacketSocketFactory* socket_factory() const = 0;

    virtual uint generation() const = 0;

    virtual void set_generation(uint generation) = 0;

    virtual bool send_retransmit_count_attribute() const = 0;

    virtual ::std::string const& content_name() const = 0;

    virtual void AddPrflxCandidate(::webrtc::Candidate const& local) = 0;

    virtual void UpdateNetworkCost() = 0;

    virtual ::webrtc::DiffServCodePoint StunDscpValue() const = 0;

    virtual bool GetStunMessage(
        char const*                              data,
        uint64                                   size,
        ::webrtc::SocketAddress const&           addr,
        ::std::unique_ptr<::webrtc::IceMessage>* out_msg,
        ::std::string*                           out_username
    ) = 0;

    virtual bool ParseStunUsername(
        ::webrtc::StunMessage const* stun_msg,
        ::std::string*               local_ufrag,
        ::std::string*               remote_ufrag
    ) const = 0;

    virtual ::std::string CreateStunUsername(::std::string_view remote_username) const = 0;

    virtual bool MaybeIceRoleConflict(
        ::webrtc::SocketAddress const& addr,
        ::webrtc::IceMessage*          stun_msg,
        ::std::string_view             remote_ufrag
    ) = 0;

    virtual short network_cost() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PortInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
