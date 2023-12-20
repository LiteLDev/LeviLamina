#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/IceCandidatePairEventType.h"
#include "mc/deps/webrtc/detail/CandidatePairInterface.h"
#include "mc/deps/webrtc/detail/IceCandidatePairState.h"
#include "mc/deps/webrtc/detail/StunRequest.h"
#include "mc/deps/webrtc/detail/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidatePairInterface; }
namespace cricket { class IceMessage; }
namespace cricket { class Port; }
namespace cricket { class StunMessage; }
namespace cricket { class StunRequest; }
namespace cricket { class StunRequestManager; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct IceFieldTrials; }
namespace cricket { struct IceParameters; }
namespace rtc { class Network; }
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
    enum class WriteState {};

    class ConnectionRequest : public ::cricket::StunRequest {
    public:
        // prevent constructor by default
        ConnectionRequest& operator=(ConnectionRequest const&);
        ConnectionRequest(ConnectionRequest const&);
        ConnectionRequest();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1ConnectionRequest@Connection@cricket@@UEAA@XZ
        virtual ~ConnectionRequest() = default;

        // vIndex: 1, symbol: ?OnResponse@ConnectionRequest@Connection@cricket@@UEAAXPEAVStunMessage@3@@Z
        virtual void OnResponse(class cricket::StunMessage*);

        // vIndex: 2, symbol: ?OnErrorResponse@ConnectionRequest@Connection@cricket@@UEAAXPEAVStunMessage@3@@Z
        virtual void OnErrorResponse(class cricket::StunMessage*);

        // vIndex: 3, symbol: ?OnTimeout@ConnectionRequest@Connection@cricket@@UEAAXXZ
        virtual void OnTimeout();

        // vIndex: 4, symbol: ?OnSent@ConnectionRequest@Connection@cricket@@UEAAXXZ
        virtual void OnSent();

        // vIndex: 5, symbol: ?resend_delay@ConnectionRequest@Connection@cricket@@UEAAHXZ
        virtual int resend_delay();

        // symbol:
        // ??0ConnectionRequest@Connection@cricket@@QEAA@AEAVStunRequestManager@2@PEAV12@V?$unique_ptr@VIceMessage@cricket@@U?$default_delete@VIceMessage@cricket@@@std@@@std@@@Z
        MCAPI
        ConnectionRequest(class cricket::StunRequestManager&, class cricket::Connection*, std::unique_ptr<class cricket::IceMessage>);

        // NOLINTEND
    };

    struct SentPing {
    public:
        // prevent constructor by default
        SentPing& operator=(SentPing const&);
        SentPing(SentPing const&);
        SentPing();

    public:
        // NOLINTBEGIN
        // symbol: ??1SentPing@Connection@cricket@@QEAA@XZ
        MCAPI ~SentPing();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Connection& operator=(Connection const&);
    Connection(Connection const&);
    Connection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Connection@cricket@@UEAA@XZ
    virtual ~Connection();

    // vIndex: 1, symbol: ?local_candidate@Connection@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& local_candidate() const;

    // vIndex: 2, symbol: ?remote_candidate@Connection@cricket@@UEBAAEBVCandidate@2@XZ
    virtual class cricket::Candidate const& remote_candidate() const;

    // vIndex: 3, symbol: ?network@Connection@cricket@@UEBAPEBVNetwork@rtc@@XZ
    virtual class rtc::Network const* network() const;

    // vIndex: 4, symbol: ?generation@Connection@cricket@@UEBAHXZ
    virtual int generation() const;

    // vIndex: 5, symbol: ?priority@Connection@cricket@@UEBA_KXZ
    virtual uint64 priority() const;

    // vIndex: 6, symbol: ?Send@ProxyConnection@cricket@@UEAAHPEBX_KAEBUPacketOptions@rtc@@@Z
    virtual int Send(void const*, uint64, struct rtc::PacketOptions const&) = 0;

    // vIndex: 7, symbol: ?GetError@ProxyConnection@cricket@@UEAAHXZ
    virtual int GetError() = 0;

    // vIndex: 8, symbol: ?OnConnectionRequestResponse@Connection@cricket@@MEAAXPEAVStunRequest@2@PEAVStunMessage@2@@Z
    virtual void OnConnectionRequestResponse(class cricket::StunRequest*, class cricket::StunMessage*);

    // symbol:
    // ?BuildPingRequest@Connection@cricket@@QEAA?AV?$unique_ptr@VIceMessage@cricket@@U?$default_delete@VIceMessage@cricket@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class cricket::IceMessage> BuildPingRequest();

    // symbol: ?ComputeNetworkCost@Connection@cricket@@QEBAIXZ
    MCAPI uint ComputeNetworkCost() const;

    // symbol: ?Destroy@Connection@cricket@@QEAAXXZ
    MCAPI void Destroy();

    // symbol: ?FailAndPrune@Connection@cricket@@QEAAXXZ
    MCAPI void FailAndPrune();

    // symbol: ?ForgetLearnedState@Connection@cricket@@QEAAXXZ
    MCAPI void ForgetLearnedState();

    // symbol: ?HandlePiggybackCheckAcknowledgementIfAny@Connection@cricket@@QEAAXPEAVStunMessage@2@@Z
    MCAPI void HandlePiggybackCheckAcknowledgementIfAny(class cricket::StunMessage*);

    // symbol: ?HandleStunBindingOrGoogPingRequest@Connection@cricket@@QEAAXPEAVIceMessage@2@@Z
    MCAPI void HandleStunBindingOrGoogPingRequest(class cricket::IceMessage*);

    // symbol: ?MaybeSetRemoteIceParametersAndGeneration@Connection@cricket@@QEAAXAEBUIceParameters@2@H@Z
    MCAPI void MaybeSetRemoteIceParametersAndGeneration(struct cricket::IceParameters const&, int);

    // symbol: ?MaybeUpdatePeerReflexiveCandidate@Connection@cricket@@QEAAXAEBVCandidate@2@@Z
    MCAPI void MaybeUpdatePeerReflexiveCandidate(class cricket::Candidate const&);

    // symbol: ?OnReadPacket@Connection@cricket@@QEAAXPEBD_K_J@Z
    MCAPI void OnReadPacket(char const*, uint64, int64);

    // symbol: ?OnReadyToSend@Connection@cricket@@QEAAXXZ
    MCAPI void OnReadyToSend();

    // symbol: ?Ping@Connection@cricket@@QEAAX_J@Z
    MCAPI void Ping(int64);

    // symbol:
    // ?PrintPingsSinceLastResponse@Connection@cricket@@QEAAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI void PrintPingsSinceLastResponse(std::string*, uint64);

    // symbol: ?Prune@Connection@cricket@@QEAAXXZ
    MCAPI void Prune();

    // symbol:
    // ?ReceivedPing@Connection@cricket@@QEAAXAEBV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI void ReceivedPing(std::optional<std::string> const&);

    // symbol:
    // ?ReceivedPingResponse@Connection@cricket@@QEAAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$optional@I@4@@Z
    MCAPI void ReceivedPingResponse(int, std::string_view, std::optional<uint> const&);

    // symbol: ?SendGoogPingResponse@Connection@cricket@@QEAAXPEBVStunMessage@2@@Z
    MCAPI void SendGoogPingResponse(class cricket::StunMessage const*);

    // symbol: ?SendResponseMessage@Connection@cricket@@QEAAXAEBVStunMessage@2@@Z
    MCAPI void SendResponseMessage(class cricket::StunMessage const&);

    // symbol: ?SendStunBindingResponse@Connection@cricket@@QEAAXPEBVStunMessage@2@@Z
    MCAPI void SendStunBindingResponse(class cricket::StunMessage const*);

    // symbol: ?SetIceFieldTrials@Connection@cricket@@QEAAXPEBUIceFieldTrials@2@@Z
    MCAPI void SetIceFieldTrials(struct cricket::IceFieldTrials const*);

    // symbol: ?SetLocalCandidateNetworkCost@Connection@cricket@@QEAAXG@Z
    MCAPI void SetLocalCandidateNetworkCost(ushort);

    // symbol: ?Shutdown@Connection@cricket@@QEAA_NXZ
    MCAPI bool Shutdown();

    // symbol: ?ToDebugId@Connection@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToDebugId() const;

    // symbol: ?ToLogDescription@Connection@cricket@@QEAAAEBVIceCandidatePairDescription@webrtc@@XZ
    MCAPI class webrtc::IceCandidatePairDescription const& ToLogDescription();

    // symbol: ?ToString@Connection@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ?TooManyOutstandingPings@Connection@cricket@@QEBA_NAEBV?$optional@H@std@@@Z
    MCAPI bool TooManyOutstandingPings(std::optional<int> const&) const;

    // symbol: ?UpdateLocalIceParameters@Connection@cricket@@QEAAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    MCAPI void UpdateLocalIceParameters(int, std::string_view, std::string_view);

    // symbol: ?UpdateState@Connection@cricket@@QEAAX_J@Z
    MCAPI void UpdateState(int64);

    // symbol: ?acked_nomination@Connection@cricket@@QEBAIXZ
    MCAPI uint acked_nomination() const;

    // symbol: ?active@Connection@cricket@@QEBA_NXZ
    MCAPI bool active() const;

    // symbol: ?connected@Connection@cricket@@QEBA_NXZ
    MCAPI bool connected() const;

    // symbol: ?dead@Connection@cricket@@QEBA_N_J@Z
    MCAPI bool dead(int64) const;

    // symbol: ?inactive_timeout@Connection@cricket@@QEBAHXZ
    MCAPI int inactive_timeout() const;

    // symbol: ?last_data_received@Connection@cricket@@QEBA_JXZ
    MCAPI int64 last_data_received() const;

    // symbol: ?last_ping_received@Connection@cricket@@QEBA_JXZ
    MCAPI int64 last_ping_received() const;

    // symbol: ?last_ping_response_received@Connection@cricket@@QEBA_JXZ
    MCAPI int64 last_ping_response_received() const;

    // symbol: ?last_ping_sent@Connection@cricket@@QEBA_JXZ
    MCAPI int64 last_ping_sent() const;

    // symbol: ?last_received@Connection@cricket@@QEBA_JXZ
    MCAPI int64 last_received() const;

    // symbol: ?network_thread@Connection@cricket@@QEBAPEAVTaskQueueBase@webrtc@@XZ
    MCAPI class webrtc::TaskQueueBase* network_thread() const;

    // symbol: ?nominated@Connection@cricket@@QEBA_NXZ
    MCAPI bool nominated() const;

    // symbol: ?num_pings_sent@Connection@cricket@@QEBAHXZ
    MCAPI int num_pings_sent() const;

    // symbol: ?prflx_priority@Connection@cricket@@QEBAIXZ
    MCAPI uint prflx_priority() const;

    // symbol: ?receiving@Connection@cricket@@QEBA_NXZ
    MCAPI bool receiving() const;

    // symbol: ?receiving_timeout@Connection@cricket@@QEBAHXZ
    MCAPI int receiving_timeout() const;

    // symbol: ?receiving_unchanged_since@Connection@cricket@@QEBA_JXZ
    MCAPI int64 receiving_unchanged_since() const;

    // symbol: ?remote_nomination@Connection@cricket@@QEBAIXZ
    MCAPI uint remote_nomination() const;

    // symbol: ?rtt@Connection@cricket@@QEBAHXZ
    MCAPI int rtt() const;

    // symbol: ?rtt_samples@Connection@cricket@@QEBAHXZ
    MCAPI int rtt_samples() const;

    // symbol: ?set_ice_event_log@Connection@cricket@@QEAAXPEAVIceEventLog@webrtc@@@Z
    MCAPI void set_ice_event_log(class webrtc::IceEventLog*);

    // symbol: ?set_inactive_timeout@Connection@cricket@@QEAAXAEBV?$optional@H@std@@@Z
    MCAPI void set_inactive_timeout(std::optional<int> const&);

    // symbol: ?set_nomination@Connection@cricket@@QEAAXI@Z
    MCAPI void set_nomination(uint);

    // symbol: ?set_receiving_timeout@Connection@cricket@@QEAAXV?$optional@H@std@@@Z
    MCAPI void set_receiving_timeout(std::optional<int>);

    // symbol: ?set_remote_nomination@Connection@cricket@@QEAAXI@Z
    MCAPI void set_remote_nomination(uint);

    // symbol: ?set_selected@Connection@cricket@@QEAAX_N@Z
    MCAPI void set_selected(bool);

    // symbol: ?set_unwritable_min_checks@Connection@cricket@@QEAAXAEBV?$optional@H@std@@@Z
    MCAPI void set_unwritable_min_checks(std::optional<int> const&);

    // symbol: ?set_unwritable_timeout@Connection@cricket@@QEAAXAEBV?$optional@H@std@@@Z
    MCAPI void set_unwritable_timeout(std::optional<int> const&);

    // symbol: ?set_use_candidate_attr@Connection@cricket@@QEAAX_N@Z
    MCAPI void set_use_candidate_attr(bool);

    // symbol: ?stable@Connection@cricket@@QEBA_N_J@Z
    MCAPI bool stable(int64) const;

    // symbol: ?state@Connection@cricket@@QEBA?AW4IceCandidatePairState@2@XZ
    MCAPI ::cricket::IceCandidatePairState state() const;

    // symbol: ?stats@Connection@cricket@@QEAA?AUConnectionInfo@2@XZ
    MCAPI struct cricket::ConnectionInfo stats();

    // symbol: ?unwritable_min_checks@Connection@cricket@@QEBAHXZ
    MCAPI int unwritable_min_checks() const;

    // symbol: ?unwritable_timeout@Connection@cricket@@QEBAHXZ
    MCAPI int unwritable_timeout() const;

    // symbol: ?use_candidate_attr@Connection@cricket@@QEBA_NXZ
    MCAPI bool use_candidate_attr() const;

    // symbol: ?weak@Connection@cricket@@QEBA_NXZ
    MCAPI bool weak() const;

    // symbol: ?writable@Connection@cricket@@QEBA_NXZ
    MCAPI bool writable() const;

    // symbol: ?write_state@Connection@cricket@@QEBA?AW4WriteState@12@XZ
    MCAPI ::cricket::Connection::WriteState write_state() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0Connection@cricket@@IEAA@V?$WeakPtr@VPort@cricket@@@rtc@@_KAEBVCandidate@1@@Z
    MCAPI Connection(class rtc::WeakPtr<class cricket::Port>, uint64, class cricket::Candidate const&);

    // symbol: ?OnConnectionRequestErrorResponse@Connection@cricket@@IEAAXPEAVConnectionRequest@12@PEAVStunMessage@2@@Z
    MCAPI void
    OnConnectionRequestErrorResponse(class cricket::Connection::ConnectionRequest*, class cricket::StunMessage*);

    // symbol: ?OnConnectionRequestSent@Connection@cricket@@IEAAXPEAVConnectionRequest@12@@Z
    MCAPI void OnConnectionRequestSent(class cricket::Connection::ConnectionRequest*);

    // symbol: ?OnConnectionRequestTimeout@Connection@cricket@@IEAAXPEAVConnectionRequest@12@@Z
    MCAPI void OnConnectionRequestTimeout(class cricket::Connection::ConnectionRequest*);

    // symbol: ?OnSendStunPacket@Connection@cricket@@IEAAXPEBX_KPEAVStunRequest@2@@Z
    MCAPI void OnSendStunPacket(void const*, uint64, class cricket::StunRequest*);

    // symbol: ?UpdateReceiving@Connection@cricket@@IEAAX_J@Z
    MCAPI void UpdateReceiving(int64);

    // symbol: ?missing_responses@Connection@cricket@@IEBA_N_J@Z
    MCAPI bool missing_responses(int64) const;

    // symbol: ?port@Connection@cricket@@IEAAPEAVPort@2@XZ
    MCAPI class cricket::Port* port();

    // symbol: ?rtt_converged@Connection@cricket@@IEBA_NXZ
    MCAPI bool rtt_converged() const;

    // symbol: ?set_connected@Connection@cricket@@IEAAX_N@Z
    MCAPI void set_connected(bool);

    // symbol: ?set_state@Connection@cricket@@IEAAXW4IceCandidatePairState@2@@Z
    MCAPI void set_state(::cricket::IceCandidatePairState);

    // symbol: ?set_write_state@Connection@cricket@@IEAAXW4WriteState@12@@Z
    MCAPI void set_write_state(::cricket::Connection::WriteState);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LogCandidatePairConfig@Connection@cricket@@AEAAXW4IceCandidatePairConfigType@webrtc@@@Z
    MCAPI void LogCandidatePairConfig(::webrtc::IceCandidatePairConfigType);

    // symbol: ?LogCandidatePairEvent@Connection@cricket@@AEAAXW4IceCandidatePairEventType@webrtc@@I@Z
    MCAPI void LogCandidatePairEvent(::webrtc::IceCandidatePairEventType, uint);

    // symbol: ?MaybeUpdateLocalCandidate@Connection@cricket@@AEAAXPEAVStunRequest@2@PEAVStunMessage@2@@Z
    MCAPI void MaybeUpdateLocalCandidate(class cricket::StunRequest*, class cricket::StunMessage*);

    // symbol: ?ShouldSendGoogPing@Connection@cricket@@AEAA_NPEBVStunMessage@2@@Z
    MCAPI bool ShouldSendGoogPing(class cricket::StunMessage const*);

    // NOLINTEND
};

}; // namespace cricket
