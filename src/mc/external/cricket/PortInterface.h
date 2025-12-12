#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRole.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/rtc/DiffServCodePoint.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/webrtc/IceCandidateType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class IceMessage; }
namespace cricket { class StunMessage; }
namespace cricket { class StunStats; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

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
    ::ll::UntypedStorage<8, 48> mUnkcfff39;
    ::ll::UntypedStorage<8, 48> mUnkc21d2f;
    ::ll::UntypedStorage<8, 48> mUnk233bda;
    ::ll::UntypedStorage<8, 48> mUnkb4c561;
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

    virtual ::rtc::Network const* Network() const = 0;

    virtual void SetIceRole(::cricket::IceRole) = 0;

    virtual ::cricket::IceRole GetIceRole() const = 0;

    virtual void SetIceTiebreaker(uint64) = 0;

    virtual uint64 IceTiebreaker() const = 0;

    virtual bool SharedSocket() const = 0;

    virtual bool SupportsProtocol(::std::string_view) const = 0;

    virtual void PrepareAddress() = 0;

    virtual ::cricket::Connection* GetConnection(::rtc::SocketAddress const&) = 0;

    virtual ::cricket::Connection*
    CreateConnection(::cricket::Candidate const&, ::cricket::PortInterface::CandidateOrigin) = 0;

    virtual int SetOption(::rtc::Socket::Option, int) = 0;

    virtual int GetOption(::rtc::Socket::Option opt, int* value) = 0;

    virtual int GetError() = 0;

    virtual ::cricket::ProtocolType GetProtocol() const = 0;

    virtual ::std::vector<::cricket::Candidate> const& Candidates() const = 0;

    virtual int SendTo(void const*, uint64, ::rtc::SocketAddress const&, ::rtc::PacketOptions const&, bool) = 0;

    virtual void
    SendBindingErrorResponse(::cricket::StunMessage*, ::rtc::SocketAddress const&, int, ::std::string_view) = 0;

    virtual void SubscribePortDestroyed(::std::function<void(::cricket::PortInterface*)>) = 0;

    virtual void EnablePortPackets() = 0;

    virtual ::std::string ToString() const = 0;

    virtual void GetStunStats(::std::optional<::cricket::StunStats>*) = 0;

    virtual void DestroyConnection(::cricket::Connection*) = 0;

    virtual void DestroyConnectionAsync(::cricket::Connection*) = 0;

    virtual ::webrtc::TaskQueueBase* thread() = 0;

    virtual ::rtc::PacketSocketFactory* socket_factory() const = 0;

    virtual ::std::string const& user_agent() = 0;

    virtual ::rtc::ProxyInfo const& proxy() = 0;

    virtual uint generation() const = 0;

    virtual void set_generation(uint generation) = 0;

    virtual bool send_retransmit_count_attribute() const = 0;

    virtual ::std::string const& content_name() const = 0;

    virtual void AddPrflxCandidate(::cricket::Candidate const&) = 0;

    virtual void UpdateNetworkCost() = 0;

    virtual ::rtc::DiffServCodePoint StunDscpValue() const = 0;

    virtual bool GetStunMessage(
        char const*,
        uint64,
        ::rtc::SocketAddress const&,
        ::std::unique_ptr<::cricket::IceMessage>*,
        ::std::string*
    ) = 0;

    virtual bool ParseStunUsername(::cricket::StunMessage const*, ::std::string*, ::std::string*) const = 0;

    virtual ::std::string CreateStunUsername(::std::string_view) const = 0;

    virtual bool MaybeIceRoleConflict(::rtc::SocketAddress const&, ::cricket::IceMessage*, ::std::string_view) = 0;

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

} // namespace cricket
