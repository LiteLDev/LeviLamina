#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/CandidatePairInterface.h"
#include "mc/external/webrtc/IceCandidatePairState.h"
#include "mc/external/webrtc/StunRequest.h"
#include "mc/external/webrtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class Environment; }
namespace webrtc { class IceCandidatePairDescription; }
namespace webrtc { class IceEventLog; }
namespace webrtc { class IceMessage; }
namespace webrtc { class Network; }
namespace webrtc { class PortInterface; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class StunByteStringAttribute; }
namespace webrtc { class StunMessage; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct ConnectionInfo; }
namespace webrtc { struct IceFieldTrials; }
namespace webrtc { struct IceParameters; }
// clang-format on

namespace webrtc {

class Connection : public ::webrtc::CandidatePairInterface {
public:
    // Connection inner types declare
    // clang-format off
    class ConnectionRequest;
    struct SentPing;
    // clang-format on

    // Connection inner types define
    enum class WriteState : int {
        Writable        = 0,
        WriteUnreliable = 1,
        WriteInit       = 2,
        WriteTimeout    = 3,
    };

    class ConnectionRequest : public ::webrtc::StunRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkf9696e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConnectionRequest& operator=(ConnectionRequest const&);
        ConnectionRequest(ConnectionRequest const&);
        ConnectionRequest();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnResponse(::webrtc::StunMessage* response) /*override*/;

        virtual void OnErrorResponse(::webrtc::StunMessage* response) /*override*/;

        virtual void OnTimeout() /*override*/;

        virtual void OnSent() /*override*/;

        virtual int resend_delay() /*override*/;

        virtual ~ConnectionRequest() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnResponse(::webrtc::StunMessage* response);

        MCNAPI void $OnErrorResponse(::webrtc::StunMessage* response);

        MCNAPI void $OnTimeout();

        MCNAPI void $OnSent();

        MCNAPI int $resend_delay();


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct SentPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkc82716;
        ::ll::UntypedStorage<8, 8>  mUnk1a9006;
        ::ll::UntypedStorage<4, 4>  mUnk9c1e19;
        // NOLINTEND

    public:
        // prevent constructor by default
        SentPing& operator=(SentPing const&);
        SentPing(SentPing const&);
        SentPing();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SentPing();
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
    ::ll::UntypedStorage<8, 48>   mUnk5dc422;
    ::ll::UntypedStorage<8, 48>   mUnk302e81;
    ::ll::UntypedStorage<8, 48>   mUnk331970;
    ::ll::UntypedStorage<8, 48>   mUnk829103;
    ::ll::UntypedStorage<8, 40>   mUnk415ba1;
    ::ll::UntypedStorage<8, 8>    mUnk3bedab;
    ::ll::UntypedStorage<4, 4>    mUnk673bc5;
    ::ll::UntypedStorage<8, 16>   mUnk448fdf;
    ::ll::UntypedStorage<8, 528>  mUnk7d7bc8;
    ::ll::UntypedStorage<8, 528>  mUnk650b6b;
    ::ll::UntypedStorage<8, 1264> mUnk308b74;
    ::ll::UntypedStorage<8, 64>   mUnk4ee8d7;
    ::ll::UntypedStorage<8, 64>   mUnkd02ae8;
    ::ll::UntypedStorage<8, 8>    mUnk3d9ee0;
    ::ll::UntypedStorage<4, 4>    mUnkf983f1;
    ::ll::UntypedStorage<1, 1>    mUnk1bfb02;
    ::ll::UntypedStorage<1, 1>    mUnk803ec6;
    ::ll::UntypedStorage<1, 1>    mUnk84c8ac;
    ::ll::UntypedStorage<1, 1>    mUnk23f606;
    ::ll::UntypedStorage<1, 1>    mUnkeb5de9;
    ::ll::UntypedStorage<4, 4>    mUnk4dafae;
    ::ll::UntypedStorage<4, 4>    mUnkae3315;
    ::ll::UntypedStorage<4, 4>    mUnk4355af;
    ::ll::UntypedStorage<8, 88>   mUnk47bff6;
    ::ll::UntypedStorage<8, 8>    mUnk1491d4;
    ::ll::UntypedStorage<4, 4>    mUnk2f910e;
    ::ll::UntypedStorage<8, 8>    mUnk1edadb;
    ::ll::UntypedStorage<8, 8>    mUnk447f49;
    ::ll::UntypedStorage<8, 16>   mUnke6a9e4;
    ::ll::UntypedStorage<8, 8>    mUnk4dc3b6;
    ::ll::UntypedStorage<8, 8>    mUnk688a81;
    ::ll::UntypedStorage<8, 8>    mUnke05152;
    ::ll::UntypedStorage<8, 8>    mUnk6e2acb;
    ::ll::UntypedStorage<8, 8>    mUnk8a82e7;
    ::ll::UntypedStorage<8, 24>   mUnkf5cd4e;
    ::ll::UntypedStorage<8, 40>   mUnk6fb81c;
    ::ll::UntypedStorage<8, 16>   mUnk67603c;
    ::ll::UntypedStorage<4, 8>    mUnk122678;
    ::ll::UntypedStorage<8, 16>   mUnk84eb8b;
    ::ll::UntypedStorage<4, 4>    mUnk6de527;
    ::ll::UntypedStorage<8, 16>   mUnkf7d89f;
    ::ll::UntypedStorage<8, 8>    mUnk129150;
    ::ll::UntypedStorage<8, 8>    mUnk8f03a8;
    ::ll::UntypedStorage<4, 4>    mUnkf22a9f;
    ::ll::UntypedStorage<4, 32>   mUnk7f7156;
    ::ll::UntypedStorage<8, 8>    mUnk456d2d;
    ::ll::UntypedStorage<1, 2>    mUnk5d0132;
    ::ll::UntypedStorage<8, 8>    mUnkf17e1d;
    ::ll::UntypedStorage<8, 8>    mUnk32942d;
    ::ll::UntypedStorage<8, 48>   mUnk21989a;
    ::ll::UntypedStorage<8, 72>   mUnkbdb7a1;
    ::ll::UntypedStorage<8, 72>   mUnkedcb3f;
    ::ll::UntypedStorage<8, 32>   mUnk8609c8;
    ::ll::UntypedStorage<8, 64>   mUnk15fb04;
    // NOLINTEND

public:
    // prevent constructor by default
    Connection& operator=(Connection const&);
    Connection(Connection const&);
    Connection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Connection() /*override*/;

    virtual ::webrtc::Candidate const& local_candidate() const /*override*/;

    virtual ::webrtc::Candidate const& remote_candidate() const /*override*/;

    virtual ::webrtc::Network const* network() const;

    virtual int generation() const;

    virtual uint64 priority() const;

    virtual int Send(void const* data, uint64 size, ::webrtc::AsyncSocketPacketOptions const& options) = 0;

    virtual int GetError() = 0;

    virtual void OnConnectionRequestResponse(::webrtc::StunRequest* request, ::webrtc::StunMessage* response);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::IceMessage>
    BuildPingRequest(::std::unique_ptr<::webrtc::StunByteStringAttribute> delta);

    MCNAPI uint ComputeNetworkCost() const;

    MCNAPI Connection(
        ::webrtc::Environment const&               env,
        ::webrtc::WeakPtr<::webrtc::PortInterface> port,
        uint64                                     index,
        ::webrtc::Candidate const&                 remote_candidate
    );

    MCNAPI void DeregisterDtlsPiggyback();

    MCNAPI void DeregisterReceivedPacketCallback();

    MCNAPI void Destroy();

    MCNAPI void FailAndPrune();

    MCNAPI void ForgetLearnedState();

    MCNAPI void HandlePiggybackCheckAcknowledgementIfAny(::webrtc::StunMessage* msg);

    MCNAPI void HandleStunBindingOrGoogPingRequest(::webrtc::IceMessage* msg);

    MCNAPI ::webrtc::Timestamp LastDataReceived() const;

    MCNAPI ::webrtc::Timestamp LastPingReceived() const;

    MCNAPI ::webrtc::Timestamp LastPingResponseReceived() const;

    MCNAPI ::webrtc::Timestamp LastPingSent() const;

    MCNAPI ::webrtc::Timestamp LastReceived() const;

    MCNAPI void MaybeAddDtlsPiggybackingAttributes(::webrtc::StunMessage* msg);

    MCNAPI void MaybeHandleDtlsPiggybackingAttributes(
        ::webrtc::StunMessage const* msg,
        ::webrtc::StunRequest const* original_request
    );

    MCNAPI void MaybeSetRemoteIceParametersAndGeneration(::webrtc::IceParameters const& ice_params, int generation);

    MCNAPI void MaybeUpdateLocalCandidate(::webrtc::StunRequest* request, ::webrtc::StunMessage* response);

    MCNAPI void MaybeUpdatePeerReflexiveCandidate(::webrtc::Candidate const& new_candidate);

    MCNAPI void
    OnConnectionRequestErrorResponse(::webrtc::Connection::ConnectionRequest* request, ::webrtc::StunMessage* response);

    MCNAPI void OnConnectionRequestSent(::webrtc::Connection::ConnectionRequest* request);

    MCNAPI void OnConnectionRequestTimeout(::webrtc::Connection::ConnectionRequest* request);

    MCNAPI void OnReadPacket(::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void OnReadyToSend();

    MCNAPI void OnSendStunPacket(void const* data, uint64 size, ::webrtc::StunRequest* req);

    MCNAPI void Ping(::webrtc::Timestamp now, ::std::unique_ptr<::webrtc::StunByteStringAttribute> delta);

    MCNAPI void PrintPingsSinceLastResponse(::std::string* s, uint64 max);

    MCNAPI void Prune();

    MCNAPI void ReceivedPing(::std::optional<::std::string> const& request_id);

    MCNAPI void
    ReceivedPingResponse(::webrtc::TimeDelta rtt, ::std::string_view, ::std::optional<uint> const& nomination);

    MCNAPI ::webrtc::Timestamp ReceivingUnchangedSince() const;

    MCNAPI void RegisterReceivedPacketCallback(
        ::absl::AnyInvocable<void(::webrtc::Connection*, ::webrtc::ReceivedIpPacket const&)> received_packet_callback
    );

    MCNAPI ::webrtc::TimeDelta Rtt() const;

    MCNAPI void SendResponseMessage(::webrtc::StunMessage const& response);

    MCNAPI void SendStunBindingResponse(::webrtc::StunMessage const* message);

    MCNAPI void SetIceFieldTrials(::webrtc::IceFieldTrials const* field_trials);

    MCNAPI void SetInactiveTimeout(::std::optional<::webrtc::TimeDelta> value);

    MCNAPI void SetLocalCandidateNetworkCost(ushort cost);

    MCNAPI void SetReceivingTimeout(::std::optional<::webrtc::TimeDelta> receiving_timeout);

    MCNAPI void SetUnwritableTimeout(::std::optional<::webrtc::TimeDelta> value);

    MCNAPI bool Shutdown();

    MCNAPI ::webrtc::IceCandidatePairDescription const& ToLogDescription();

    MCNAPI ::std::string ToString() const;

    MCNAPI bool TooManyOutstandingPings(::std::optional<int> const& max_outstanding_pings) const;

    MCNAPI void
    UpdateLocalIceParameters(int component, ::std::string_view username_fragment, ::std::string_view password);

    MCNAPI void UpdateReceiving(::webrtc::Timestamp now);

    MCNAPI void UpdateState(::webrtc::Timestamp now);

    MCNAPI bool active() const;

    MCNAPI bool connected() const;

    MCNAPI bool dead(::webrtc::Timestamp now) const;

    MCNAPI int64 last_data_received() const;

    MCNAPI int64 last_ping_received() const;

    MCNAPI int64 last_ping_sent() const;

    MCNAPI ::webrtc::TaskQueueBase* network_thread() const;

    MCNAPI bool nominated() const;

    MCNAPI int num_pings_sent() const;

    MCNAPI ::webrtc::PortInterface* port();

    MCNAPI bool receiving() const;

    MCNAPI int64 receiving_unchanged_since() const;

    MCNAPI uint remote_nomination() const;

    MCNAPI int rtt() const;

    MCNAPI int rtt_samples() const;

    MCNAPI void set_connected(bool value);

    MCNAPI void set_ice_event_log(::webrtc::IceEventLog* ice_event_log);

    MCNAPI void set_nomination(uint value);

    MCNAPI void set_selected(bool selected);

    MCNAPI void set_state(::webrtc::IceCandidatePairState state);

    MCNAPI void set_unwritable_min_checks(::std::optional<int> const& value);

    MCNAPI void set_use_candidate_attr(bool enable);

    MCNAPI void set_write_state(::webrtc::Connection::WriteState value);

    MCNAPI bool stable(::webrtc::Timestamp now) const;

    MCNAPI ::webrtc::IceCandidatePairState state() const;

    MCNAPI ::webrtc::ConnectionInfo stats();

    MCNAPI bool weak() const;

    MCNAPI bool writable() const;

    MCNAPI ::webrtc::Connection::WriteState write_state() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::Environment const&               env,
        ::webrtc::WeakPtr<::webrtc::PortInterface> port,
        uint64                                     index,
        ::webrtc::Candidate const&                 remote_candidate
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
    MCNAPI ::webrtc::Candidate const& $local_candidate() const;

    MCNAPI ::webrtc::Candidate const& $remote_candidate() const;

    MCNAPI ::webrtc::Network const* $network() const;

    MCNAPI int $generation() const;

    MCNAPI uint64 $priority() const;

    MCNAPI void $OnConnectionRequestResponse(::webrtc::StunRequest* request, ::webrtc::StunMessage* response);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
