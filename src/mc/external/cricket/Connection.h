#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/cricket/CandidatePairInterface.h"
#include "mc/external/cricket/IceCandidatePairState.h"
#include "mc/external/rtc/WeakPtr.h"
#include "mc/external/webrtc/IceCandidatePairConfigType.h"
#include "mc/external/webrtc/IceCandidatePairEventType.h"
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class IceMessage; }
namespace cricket { class PortInterface; }
namespace cricket { class StunAttribute; }
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class StunRequestManager; }
namespace cricket { class StunUInt64Attribute; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct IceFieldTrials; }
namespace cricket { struct IceParameters; }
namespace rtc { class Network; }
namespace rtc { class ReceivedPacket; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class IceCandidatePairDescription; }
namespace webrtc { class IceEventLog; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class Connection : public ::cricket::CandidatePairInterface {
public:
    // Connection inner types declare
    // clang-format off
    class ConnectionRequest;
    struct SentPing;
    // clang-format on

    // Connection inner types define
    struct SentPing {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk3678cf;
        ::ll::UntypedStorage<8, 8>  mUnkb88b47;
        ::ll::UntypedStorage<4, 4>  mUnkdf6945;
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

    enum class WriteState : int {
        Writable        = 0,
        WriteUnreliable = 1,
        WriteInit       = 2,
        WriteTimeout    = 3,
    };

    class ConnectionRequest {
    public:
        // prevent constructor by default
        ConnectionRequest();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI
        ConnectionRequest(::cricket::StunRequestManager&, ::cricket::Connection*, ::std::unique_ptr<::cricket::IceMessage>);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::cricket::StunRequestManager&, ::cricket::Connection*, ::std::unique_ptr<::cricket::IceMessage>);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>   mUnk3f0a0b;
    ::ll::UntypedStorage<8, 48>   mUnk5c9268;
    ::ll::UntypedStorage<8, 48>   mUnk5a1415;
    ::ll::UntypedStorage<8, 48>   mUnke47184;
    ::ll::UntypedStorage<8, 8>    mUnk3ccaad;
    ::ll::UntypedStorage<4, 4>    mUnka4e8b3;
    ::ll::UntypedStorage<8, 16>   mUnk4b5d48;
    ::ll::UntypedStorage<8, 528>  mUnkfd2318;
    ::ll::UntypedStorage<8, 528>  mUnke86cd7;
    ::ll::UntypedStorage<8, 1264> mUnk9bba3d;
    ::ll::UntypedStorage<8, 64>   mUnk11421d;
    ::ll::UntypedStorage<8, 64>   mUnk45bb40;
    ::ll::UntypedStorage<8, 8>    mUnkf2e0f7;
    ::ll::UntypedStorage<4, 4>    mUnkd84a4f;
    ::ll::UntypedStorage<1, 1>    mUnka7b348;
    ::ll::UntypedStorage<1, 1>    mUnk8063e7;
    ::ll::UntypedStorage<1, 1>    mUnk2a3bb6;
    ::ll::UntypedStorage<1, 1>    mUnk86144b;
    ::ll::UntypedStorage<1, 1>    mUnkc42684;
    ::ll::UntypedStorage<4, 4>    mUnk31ab71;
    ::ll::UntypedStorage<4, 4>    mUnkad8260;
    ::ll::UntypedStorage<4, 4>    mUnk9e0f85;
    ::ll::UntypedStorage<8, 88>   mUnka2cf48;
    ::ll::UntypedStorage<4, 4>    mUnk505d39;
    ::ll::UntypedStorage<4, 4>    mUnkadc045;
    ::ll::UntypedStorage<8, 8>    mUnk88f318;
    ::ll::UntypedStorage<8, 8>    mUnk5462c6;
    ::ll::UntypedStorage<4, 8>    mUnkf61de6;
    ::ll::UntypedStorage<8, 8>    mUnkb7f01c;
    ::ll::UntypedStorage<8, 8>    mUnk493c56;
    ::ll::UntypedStorage<8, 8>    mUnk229f6a;
    ::ll::UntypedStorage<8, 8>    mUnkfe8645;
    ::ll::UntypedStorage<8, 8>    mUnke55350;
    ::ll::UntypedStorage<8, 24>   mUnka4e57f;
    ::ll::UntypedStorage<8, 40>   mUnk3637f3;
    ::ll::UntypedStorage<4, 8>    mUnka9dcaa;
    ::ll::UntypedStorage<4, 8>    mUnk3b3c10;
    ::ll::UntypedStorage<4, 8>    mUnk31a8d0;
    ::ll::UntypedStorage<4, 4>    mUnk2826e3;
    ::ll::UntypedStorage<4, 8>    mUnke7b4da;
    ::ll::UntypedStorage<8, 8>    mUnk576994;
    ::ll::UntypedStorage<8, 8>    mUnkddf605;
    ::ll::UntypedStorage<4, 4>    mUnk9009ab;
    ::ll::UntypedStorage<4, 32>   mUnk458f0c;
    ::ll::UntypedStorage<8, 8>    mUnk8ee217;
    ::ll::UntypedStorage<1, 2>    mUnk8ecc94;
    ::ll::UntypedStorage<8, 8>    mUnk71a997;
    ::ll::UntypedStorage<8, 8>    mUnk2c3072;
    ::ll::UntypedStorage<8, 48>   mUnk61f319;
    ::ll::UntypedStorage<8, 72>   mUnk327e9d;
    ::ll::UntypedStorage<8, 72>   mUnke0cb71;
    ::ll::UntypedStorage<1, 32>   mUnk412384;
    // NOLINTEND

public:
    // prevent constructor by default
    Connection& operator=(Connection const&);
    Connection(Connection const&);
    Connection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Connection() /*override*/ = default;

    // vIndex: 1
    virtual ::cricket::Candidate const& local_candidate() const /*override*/;

    // vIndex: 2
    virtual ::cricket::Candidate const& remote_candidate() const /*override*/;

    // vIndex: 3
    virtual ::rtc::Network const* network() const;

    // vIndex: 4
    virtual int generation() const;

    // vIndex: 5
    virtual uint64 priority() const;

    // vIndex: 6
    virtual int Send(void const*, uint64, ::rtc::PacketOptions const&) = 0;

    // vIndex: 7
    virtual int GetError() = 0;

    // vIndex: 8
    virtual void OnConnectionRequestResponse(::cricket::StunRequest*, ::cricket::StunMessage*);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::cricket::IceMessage>
        BuildPingRequest(::std::unique_ptr<::cricket::StunByteStringAttribute>);

    MCNAPI uint ComputeNetworkCost() const;

    MCNAPI Connection(::rtc::WeakPtr<::cricket::PortInterface>, uint64, ::cricket::Candidate const&);

    MCNAPI void DeregisterReceivedPacketCallback();

    MCNAPI void Destroy();

    MCNAPI void FailAndPrune();

    MCNAPI void ForgetLearnedState();

    MCNAPI void HandlePiggybackCheckAcknowledgementIfAny(::cricket::StunMessage*);

    MCNAPI void HandleStunBindingOrGoogPingRequest(::cricket::IceMessage*);

    MCNAPI void LogCandidatePairConfig(::webrtc::IceCandidatePairConfigType);

    MCNAPI void LogCandidatePairEvent(::webrtc::IceCandidatePairEventType, uint);

    MCNAPI void MaybeSetRemoteIceParametersAndGeneration(::cricket::IceParameters const&, int);

    MCNAPI void MaybeUpdateLocalCandidate(::cricket::StunRequest*, ::cricket::StunMessage*);

    MCNAPI void MaybeUpdatePeerReflexiveCandidate(::cricket::Candidate const&);

    MCNAPI void OnConnectionRequestErrorResponse(::cricket::Connection::ConnectionRequest*, ::cricket::StunMessage*);

    MCNAPI void OnConnectionRequestSent(::cricket::Connection::ConnectionRequest*);

    MCNAPI void OnConnectionRequestTimeout(::cricket::Connection::ConnectionRequest*);

    MCNAPI void OnReadPacket(::rtc::ReceivedPacket const&);

    MCNAPI void OnReadyToSend();

    MCNAPI void OnSendStunPacket(void const*, uint64, ::cricket::StunRequest*);

    MCNAPI void Ping(int64, ::std::unique_ptr<::cricket::StunByteStringAttribute>);

    MCNAPI void PrintPingsSinceLastResponse(::std::string*, uint64);

    MCNAPI void Prune();

    MCNAPI void ReceivedPing(::std::optional<::std::string> const&);

    MCNAPI void ReceivedPingResponse(int, ::std::string_view, ::std::optional<uint> const&);

    MCNAPI void RegisterReceivedPacketCallback(::absl::AnyInvocable<
                                               void(::cricket::Connection*, ::rtc::ReceivedPacket const&)>);

    MCNAPI void SendGoogPingResponse(::cricket::StunMessage const*);

    MCNAPI void SendResponseMessage(::cricket::StunMessage const&);

    MCNAPI void SendStunBindingResponse(::cricket::StunMessage const*);

    MCNAPI void SetIceFieldTrials(::cricket::IceFieldTrials const*);

    MCNAPI void SetLocalCandidateNetworkCost(ushort);

    MCNAPI void
        SetStunDictConsumer(::std::function<::std::unique_ptr<::cricket::StunAttribute>(::cricket::StunByteStringAttribute const*)>, ::std::function<void(::webrtc::RTCErrorOr<::cricket::StunUInt64Attribute const*>)>);

    MCNAPI bool ShouldSendGoogPing(::cricket::StunMessage const*);

    MCNAPI bool Shutdown();

    MCNAPI ::std::string ToDebugId() const;

    MCNAPI ::webrtc::IceCandidatePairDescription const& ToLogDescription();

    MCNAPI ::std::string ToString() const;

    MCNAPI bool TooManyOutstandingPings(::std::optional<int> const&) const;

    MCNAPI void UpdateLocalIceParameters(int, ::std::string_view, ::std::string_view);

    MCNAPI void UpdateReceiving(int64);

    MCNAPI void UpdateState(int64);

    MCNAPI uint acked_nomination() const;

    MCNAPI bool active() const;

    MCNAPI bool connected() const;

    MCNAPI bool dead(int64) const;

    MCNAPI int inactive_timeout() const;

    MCNAPI int64 last_data_received() const;

    MCNAPI int64 last_ping_received() const;

    MCNAPI int64 last_ping_response_received() const;

    MCNAPI int64 last_ping_sent() const;

    MCNAPI int64 last_received() const;

    MCNAPI bool missing_responses(int64) const;

    MCNAPI ::webrtc::TaskQueueBase* network_thread() const;

    MCNAPI bool nominated() const;

    MCNAPI int num_pings_sent() const;

    MCNAPI ::cricket::PortInterface* port();

    MCNAPI uint prflx_priority() const;

    MCNAPI bool receiving() const;

    MCNAPI int receiving_timeout() const;

    MCNAPI int64 receiving_unchanged_since() const;

    MCNAPI uint remote_nomination() const;

    MCNAPI int rtt() const;

    MCNAPI bool rtt_converged() const;

    MCNAPI int rtt_samples() const;

    MCNAPI void set_connected(bool);

    MCNAPI void set_ice_event_log(::webrtc::IceEventLog*);

    MCNAPI void set_inactive_timeout(::std::optional<int> const&);

    MCNAPI void set_nomination(uint);

    MCNAPI void set_receiving_timeout(::std::optional<int>);

    MCNAPI void set_remote_nomination(uint);

    MCNAPI void set_selected(bool);

    MCNAPI void set_state(::cricket::IceCandidatePairState);

    MCNAPI void set_unwritable_min_checks(::std::optional<int> const&);

    MCNAPI void set_unwritable_timeout(::std::optional<int> const&);

    MCNAPI void set_use_candidate_attr(bool);

    MCNAPI void set_write_state(::cricket::Connection::WriteState);

    MCNAPI bool stable(int64) const;

    MCNAPI ::cricket::IceCandidatePairState state() const;

    MCNAPI ::cricket::ConnectionInfo stats();

    MCNAPI int unwritable_min_checks() const;

    MCNAPI int unwritable_timeout() const;

    MCNAPI bool use_candidate_attr() const;

    MCNAPI bool weak() const;

    MCNAPI bool writable() const;

    MCNAPI ::cricket::Connection::WriteState write_state() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::WeakPtr<::cricket::PortInterface>, uint64, ::cricket::Candidate const&);
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
