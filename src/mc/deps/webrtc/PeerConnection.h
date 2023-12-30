#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Call.h"
#include "mc/deps/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/PortPrunePolicy.h"
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/UsageEvent.h"
#include "mc/deps/webrtc/cricket/IceConnectionState.h"
#include "mc/deps/webrtc/cricket/IceGatheringState.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/rtc/SSLHandshakeError.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"
#include "mc/deps/webrtc/sigslot/signal_with_thread_policy.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class ContentGroup; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct TransportStats; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace sigslot { class single_threaded; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class Resource; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class SctpTransportInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpTransceiverInit; }
namespace webrtc::AudioDeviceModule { struct Stats; }
// clang-format on

namespace webrtc {

class PeerConnection {
public:
    // PeerConnection inner types declare
    // clang-format off
    struct InitializePortAllocatorResult;
    // clang-format on

    // PeerConnection inner types define
    struct InitializePortAllocatorResult {
    public:
        // prevent constructor by default
        InitializePortAllocatorResult& operator=(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult();
    };

public:
    // prevent constructor by default
    PeerConnection& operator=(PeerConnection const&);
    PeerConnection(PeerConnection const&);
    PeerConnection();

public:
    // NOLINTBEGIN
    // symbol: ?AddAdaptationResource@PeerConnection@webrtc@@UEAAXV?$scoped_refptr@VResource@webrtc@@@rtc@@@Z
    MCVAPI void AddAdaptationResource(class rtc::scoped_refptr<class webrtc::Resource>);

    // symbol: ?AddIceCandidate@PeerConnection@webrtc@@UEAA_NPEBVIceCandidateInterface@2@@Z
    MCVAPI bool AddIceCandidate(class webrtc::IceCandidateInterface const*);

    // symbol:
    // ?AddIceCandidate@PeerConnection@webrtc@@UEAAXV?$unique_ptr@VIceCandidateInterface@webrtc@@U?$default_delete@VIceCandidateInterface@webrtc@@@std@@@std@@V?$function@$$A6AXVRTCError@webrtc@@@Z@4@@Z
    MCVAPI void
        AddIceCandidate(std::unique_ptr<class webrtc::IceCandidateInterface>, std::function<void(class webrtc::RTCError)>);

    // symbol:
    // ?AddRemoteCandidate@PeerConnection@webrtc@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCandidate@cricket@@@Z
    MCVAPI void AddRemoteCandidate(std::string const&, class cricket::Candidate const&);

    // symbol: ?AddStream@PeerConnection@webrtc@@UEAA_NPEAVMediaStreamInterface@2@@Z
    MCVAPI bool AddStream(class webrtc::MediaStreamInterface*);

    // symbol:
    // ?AddTrack@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrack(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&);

    // symbol:
    // ?AddTrack@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@7@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrack(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const&);

    // symbol:
    // ?AddTransceiver@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>>
        AddTransceiver(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>);

    // symbol:
    // ?AddTransceiver@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@2@W4MediaType@cricket@@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>>
        AddTransceiver(::cricket::MediaType);

    // symbol:
    // ?AddTransceiver@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@2@W4MediaType@cricket@@AEBURtpTransceiverInit@2@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>>
    AddTransceiver(::cricket::MediaType, struct webrtc::RtpTransceiverInit const&);

    // symbol:
    // ?AddTransceiver@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBURtpTransceiverInit@2@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>>
    AddTransceiver(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, struct webrtc::RtpTransceiverInit const&);

    // symbol:
    // ?AddTransceiver@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@2@W4MediaType@cricket@@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBURtpTransceiverInit@2@_N@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::cricket::MediaType,
        class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>,
        struct webrtc::RtpTransceiverInit const&,
        bool
    );

    // symbol: ?ClearStatsCache@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void ClearStatsCache();

    // symbol: ?Close@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void Close();

    // symbol:
    // ?CreateAnswer@PeerConnection@webrtc@@UEAAXPEAVCreateSessionDescriptionObserver@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@@Z
    MCVAPI void
    CreateAnswer(class webrtc::CreateSessionDescriptionObserver*, struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    // symbol:
    // ?CreateDataChannelOrError@PeerConnection@webrtc@@UEAA?AV?$RTCErrorOr@V?$scoped_refptr@VDataChannelInterface@webrtc@@@rtc@@@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBUDataChannelInit@2@@Z
    MCVAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::DataChannelInterface>>
    CreateDataChannelOrError(std::string const&, struct webrtc::DataChannelInit const*);

    // symbol:
    // ?CreateOffer@PeerConnection@webrtc@@UEAAXPEAVCreateSessionDescriptionObserver@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@@Z
    MCVAPI void
    CreateOffer(class webrtc::CreateSessionDescriptionObserver*, struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    // symbol:
    // ?CreateSender@PeerConnection@webrtc@@UEAA?AV?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::RtpSenderInterface>
    CreateSender(std::string const&, std::string const&);

    // symbol: ?GetAudioDeviceStats@PeerConnection@webrtc@@UEAA?AV?$optional@UStats@AudioDeviceModule@webrtc@@@std@@XZ
    MCVAPI std::optional<struct webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats();

    // symbol: ?GetCallStats@PeerConnection@webrtc@@UEAA?AUStats@Call@2@XZ
    MCVAPI struct webrtc::Call::Stats GetCallStats();

    // symbol: ?GetConfiguration@PeerConnection@webrtc@@UEAA?AURTCConfiguration@PeerConnectionInterface@2@XZ
    MCVAPI struct webrtc::PeerConnectionInterface::RTCConfiguration GetConfiguration();

    // symbol: ?GetCryptoOptions@PeerConnection@webrtc@@UEAA?AUCryptoOptions@2@XZ
    MCVAPI struct webrtc::CryptoOptions GetCryptoOptions();

    // symbol:
    // ?GetDataChannelStats@PeerConnection@webrtc@@UEBA?AV?$vector@UDataChannelStats@webrtc@@V?$allocator@UDataChannelStats@webrtc@@@std@@@std@@XZ
    MCVAPI std::vector<struct webrtc::DataChannelStats> GetDataChannelStats() const;

    // symbol:
    // ?GetDataMid@PeerConnection@webrtc@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCVAPI std::optional<std::string> GetDataMid() const;

    // symbol:
    // ?GetLocalCertificate@PeerConnection@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$scoped_refptr@VRTCCertificate@rtc@@@rtc@@@Z
    MCVAPI bool GetLocalCertificate(std::string const&, class rtc::scoped_refptr<class rtc::RTCCertificate>*);

    // symbol:
    // ?GetPooledCandidateStats@PeerConnection@webrtc@@UEBA?AV?$vector@VCandidateStats@cricket@@V?$allocator@VCandidateStats@cricket@@@std@@@std@@XZ
    MCVAPI std::vector<class cricket::CandidateStats> GetPooledCandidateStats() const;

    // symbol:
    // ?GetReceivers@PeerConnection@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::RtpReceiverInterface>> GetReceivers() const;

    // symbol:
    // ?GetRemoteSSLCertChain@PeerConnection@webrtc@@UEAA?AV?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCVAPI std::unique_ptr<class rtc::SSLCertChain> GetRemoteSSLCertChain(std::string const&);

    // symbol: ?GetSctpSslRole@PeerConnection@webrtc@@UEAA_NPEAW4SSLRole@rtc@@@Z
    MCVAPI bool GetSctpSslRole(::rtc::SSLRole*);

    // symbol: ?GetSctpTransport@PeerConnection@webrtc@@UEBA?AV?$scoped_refptr@VSctpTransportInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::SctpTransportInterface> GetSctpTransport() const;

    // symbol:
    // ?GetSenders@PeerConnection@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>> GetSenders() const;

    // symbol:
    // ?GetSslRole@PeerConnection@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAW4SSLRole@rtc@@@Z
    MCVAPI bool GetSslRole(std::string const&, ::rtc::SSLRole*);

    // symbol: ?GetStats@PeerConnection@webrtc@@UEAAXPEAVRTCStatsCollectorCallback@2@@Z
    MCVAPI void GetStats(class webrtc::RTCStatsCollectorCallback*);

    // symbol:
    // ?GetStats@PeerConnection@webrtc@@UEAAXV?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
    MCVAPI void
        GetStats(class rtc::scoped_refptr<class webrtc::RtpSenderInterface>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

    // symbol:
    // ?GetStats@PeerConnection@webrtc@@UEAAXV?$scoped_refptr@VRtpReceiverInterface@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
    MCVAPI void
        GetStats(class rtc::scoped_refptr<class webrtc::RtpReceiverInterface>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

    // symbol:
    // ?GetStats@PeerConnection@webrtc@@UEAA_NPEAVStatsObserver@2@PEAVMediaStreamTrackInterface@2@W4StatsOutputLevel@PeerConnectionInterface@2@@Z
    MCVAPI bool GetStats(
        class webrtc::StatsObserver*,
        class webrtc::MediaStreamTrackInterface*,
        ::webrtc::PeerConnectionInterface::StatsOutputLevel
    );

    // symbol:
    // ?GetTransceivers@PeerConnection@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>> GetTransceivers() const;

    // symbol:
    // ?GetTransceiversInternal@PeerConnection@webrtc@@UEBA?AV?$vector@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<
        class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>>
    GetTransceiversInternal() const;

    // symbol:
    // ?GetTransportStatsByNames@PeerConnection@webrtc@@UEAA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@@std@@@2@@std@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCVAPI std::map<std::string, struct cricket::TransportStats> GetTransportStatsByNames(std::set<std::string> const&);

    // symbol:
    // ?IceRestartPending@PeerConnection@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool IceRestartPending(std::string const&) const;

    // symbol: ?IsClosed@PeerConnection@webrtc@@UEBA_NXZ
    MCVAPI bool IsClosed() const;

    // symbol: ?IsUnifiedPlan@PeerConnection@webrtc@@UEBA_NXZ
    MCVAPI bool IsUnifiedPlan() const;

    // symbol:
    // ?LookupDtlsTransportByMid@PeerConnection@webrtc@@UEAA?AV?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI class rtc::scoped_refptr<class webrtc::DtlsTransportInterface> LookupDtlsTransportByMid(std::string const&);

    // symbol:
    // ?NeedsIceRestart@PeerConnection@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool NeedsIceRestart(std::string const&) const;

    // symbol: ?NoteDataAddedEvent@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void NoteDataAddedEvent();

    // symbol: ?NoteUsageEvent@PeerConnection@webrtc@@UEAAXW4UsageEvent@2@@Z
    MCVAPI void NoteUsageEvent(::webrtc::UsageEvent);

    // symbol: ?Observer@PeerConnection@webrtc@@UEBAPEAVPeerConnectionObserver@2@XZ
    MCVAPI class webrtc::PeerConnectionObserver* Observer() const;

    // symbol: ?OnSctpDataChannelClosed@PeerConnection@webrtc@@UEAAXPEAVDataChannelInterface@2@@Z
    MCVAPI void OnSctpDataChannelClosed(class webrtc::DataChannelInterface*);

    // symbol:
    // ?OnTransportChanged@PeerConnection@webrtc@@EEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVRtpTransportInternal@2@V?$scoped_refptr@VDtlsTransport@webrtc@@@rtc@@PEAVDataChannelTransportInterface@2@@Z
    MCVAPI bool
    OnTransportChanged(std::string const&, class webrtc::RtpTransportInternal*, class rtc::scoped_refptr<class webrtc::DtlsTransport>, class webrtc::DataChannelTransportInterface*);

    // symbol:
    // ?RemoveIceCandidates@PeerConnection@webrtc@@UEAA_NAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCVAPI bool RemoveIceCandidates(std::vector<class cricket::Candidate> const&);

    // symbol: ?RemoveStream@PeerConnection@webrtc@@UEAAXPEAVMediaStreamInterface@2@@Z
    MCVAPI void RemoveStream(class webrtc::MediaStreamInterface*);

    // symbol:
    // ?RemoveTrackOrError@PeerConnection@webrtc@@UEAA?AVRTCError@2@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@Z
    MCVAPI class webrtc::RTCError RemoveTrackOrError(class rtc::scoped_refptr<class webrtc::RtpSenderInterface>);

    // symbol: ?ReportSdpBundleUsage@PeerConnection@webrtc@@UEAAXAEBVSessionDescriptionInterface@2@@Z
    MCVAPI void ReportSdpBundleUsage(class webrtc::SessionDescriptionInterface const&);

    // symbol: ?ResetSctpDataMid@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void ResetSctpDataMid();

    // symbol: ?RestartIce@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void RestartIce();

    // symbol: ?SetAudioPlayout@PeerConnection@webrtc@@UEAAX_N@Z
    MCVAPI void SetAudioPlayout(bool);

    // symbol: ?SetAudioRecording@PeerConnection@webrtc@@UEAAX_N@Z
    MCVAPI void SetAudioRecording(bool);

    // symbol: ?SetBitrate@PeerConnection@webrtc@@UEAA?AVRTCError@2@AEBUBitrateSettings@2@@Z
    MCVAPI class webrtc::RTCError SetBitrate(struct webrtc::BitrateSettings const&);

    // symbol:
    // ?SetConfiguration@PeerConnection@webrtc@@UEAA?AVRTCError@2@AEBURTCConfiguration@PeerConnectionInterface@2@@Z
    MCVAPI class webrtc::RTCError SetConfiguration(struct webrtc::PeerConnectionInterface::RTCConfiguration const&);

    // symbol: ?SetIceConnectionState@PeerConnection@webrtc@@UEAAXW4IceConnectionState@PeerConnectionInterface@2@@Z
    MCVAPI void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState);

    // symbol:
    // ?SetLocalDescription@PeerConnection@webrtc@@UEAAXV?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCVAPI void SetLocalDescription(class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol: ?SetLocalDescription@PeerConnection@webrtc@@UEAAXPEAVSetSessionDescriptionObserver@2@@Z
    MCVAPI void SetLocalDescription(class webrtc::SetSessionDescriptionObserver*);

    // symbol:
    // ?SetLocalDescription@PeerConnection@webrtc@@UEAAXPEAVSetSessionDescriptionObserver@2@PEAVSessionDescriptionInterface@2@@Z
    MCVAPI void
    SetLocalDescription(class webrtc::SetSessionDescriptionObserver*, class webrtc::SessionDescriptionInterface*);

    // symbol:
    // ?SetLocalDescription@PeerConnection@webrtc@@UEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetLocalDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol:
    // ?SetRemoteDescription@PeerConnection@webrtc@@UEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetRemoteDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCVAPI void
        SetRemoteDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetRemoteDescriptionObserverInterface>);

    // symbol:
    // ?SetRemoteDescription@PeerConnection@webrtc@@UEAAXPEAVSetSessionDescriptionObserver@2@PEAVSessionDescriptionInterface@2@@Z
    MCVAPI void
    SetRemoteDescription(class webrtc::SetSessionDescriptionObserver*, class webrtc::SessionDescriptionInterface*);

    // symbol:
    // ?SetSctpDataMid@PeerConnection@webrtc@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void SetSctpDataMid(std::string const&);

    // symbol:
    // ?SetupDataChannelTransport_n@PeerConnection@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI bool SetupDataChannelTransport_n(std::string const&);

    // symbol: ?ShouldFireNegotiationNeededEvent@PeerConnection@webrtc@@UEAA_NI@Z
    MCVAPI bool ShouldFireNegotiationNeededEvent(uint);

    // symbol:
    // ?SignalSctpDataChannelCreated@PeerConnection@webrtc@@UEAAAEAV?$signal_with_thread_policy@Vsingle_threaded@sigslot@@PEAVSctpDataChannel@webrtc@@@sigslot@@XZ
    MCVAPI class sigslot::signal_with_thread_policy<class sigslot::single_threaded, class webrtc::SctpDataChannel*>&
    SignalSctpDataChannelCreated();

    // symbol: ?SrtpRequired@PeerConnection@webrtc@@UEBA_NXZ
    MCVAPI bool SrtpRequired() const;

    // symbol:
    // ?StartRtcEventLog@PeerConnection@webrtc@@UEAA_NV?$unique_ptr@VRtcEventLogOutput@webrtc@@U?$default_delete@VRtcEventLogOutput@webrtc@@@std@@@std@@@Z
    MCVAPI bool StartRtcEventLog(std::unique_ptr<class webrtc::RtcEventLogOutput>);

    // symbol:
    // ?StartRtcEventLog@PeerConnection@webrtc@@UEAA_NV?$unique_ptr@VRtcEventLogOutput@webrtc@@U?$default_delete@VRtcEventLogOutput@webrtc@@@std@@@std@@_J@Z
    MCVAPI bool StartRtcEventLog(std::unique_ptr<class webrtc::RtcEventLogOutput>, int64);

    // symbol: ?StartSctpTransport@PeerConnection@webrtc@@UEAAXHHH@Z
    MCVAPI void StartSctpTransport(int, int, int);

    // symbol: ?StopRtcEventLog@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void StopRtcEventLog();

    // symbol: ?TeardownDataChannelTransport_n@PeerConnection@webrtc@@UEAAXXZ
    MCVAPI void TeardownDataChannelTransport_n();

    // symbol:
    // ?ValidateBundleSettings@PeerConnection@webrtc@@UEAA_NPEBVSessionDescription@cricket@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCVAPI bool
    ValidateBundleSettings(class cricket::SessionDescription const*, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol: ?call_ptr@PeerConnection@webrtc@@UEAAPEAVCall@2@XZ
    MCVAPI class webrtc::Call* call_ptr();

    // symbol: ?can_trickle_ice_candidates@PeerConnection@webrtc@@UEAA?AV?$optional@_N@std@@XZ
    MCVAPI std::optional<bool> can_trickle_ice_candidates();

    // symbol: ?configuration@PeerConnection@webrtc@@UEBAPEBURTCConfiguration@PeerConnectionInterface@2@XZ
    MCVAPI struct webrtc::PeerConnectionInterface::RTCConfiguration const* configuration() const;

    // symbol: ?current_local_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* current_local_description() const;

    // symbol: ?current_remote_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* current_remote_description() const;

    // symbol: ?data_channel_controller@PeerConnection@webrtc@@UEAAPEAVDataChannelController@2@XZ
    MCVAPI class webrtc::DataChannelController* data_channel_controller();

    // symbol: ?dtls_enabled@PeerConnection@webrtc@@UEBA_NXZ
    MCVAPI bool dtls_enabled() const;

    // symbol: ?ice_connection_state@PeerConnection@webrtc@@UEAA?AW4IceConnectionState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state();

    // symbol:
    // ?ice_connection_state_internal@PeerConnection@webrtc@@UEAA?AW4IceConnectionState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal();

    // symbol: ?ice_gathering_state@PeerConnection@webrtc@@UEAA?AW4IceGatheringState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::IceGatheringState ice_gathering_state();

    // symbol: ?initial_offerer@PeerConnection@webrtc@@UEBA_NXZ
    MCVAPI bool initial_offerer() const;

    // symbol: ?legacy_stats@PeerConnection@webrtc@@UEAAPEAVLegacyStatsCollector@2@XZ
    MCVAPI class webrtc::LegacyStatsCollector* legacy_stats();

    // symbol: ?local_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* local_description() const;

    // symbol: ?local_streams@PeerConnection@webrtc@@UEAA?AV?$scoped_refptr@VStreamCollectionInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::StreamCollectionInterface> local_streams();

    // symbol: ?message_handler@PeerConnection@webrtc@@UEAAPEAVPeerConnectionMessageHandler@2@XZ
    MCVAPI class webrtc::PeerConnectionMessageHandler* message_handler();

    // symbol: ?network_thread@PeerConnection@webrtc@@UEBAPEAVThread@rtc@@XZ
    MCVAPI class rtc::Thread* network_thread() const;

    // symbol: ?options@PeerConnection@webrtc@@UEBAPEBVOptions@PeerConnectionFactoryInterface@2@XZ
    MCVAPI class webrtc::PeerConnectionFactoryInterface::Options const* options() const;

    // symbol: ?peer_connection_state@PeerConnection@webrtc@@UEAA?AW4PeerConnectionState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::PeerConnectionState peer_connection_state();

    // symbol: ?pending_local_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* pending_local_description() const;

    // symbol: ?pending_remote_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* pending_remote_description() const;

    // symbol: ?port_allocator@PeerConnection@webrtc@@UEAAPEAVPortAllocator@cricket@@XZ
    MCVAPI class cricket::PortAllocator* port_allocator();

    // symbol: ?remote_description@PeerConnection@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    MCVAPI class webrtc::SessionDescriptionInterface const* remote_description() const;

    // symbol: ?remote_streams@PeerConnection@webrtc@@UEAA?AV?$scoped_refptr@VStreamCollectionInterface@webrtc@@@rtc@@XZ
    MCVAPI class rtc::scoped_refptr<class webrtc::StreamCollectionInterface> remote_streams();

    // symbol: ?rtp_manager@PeerConnection@webrtc@@UEBAPEBVRtpTransmissionManager@2@XZ
    MCVAPI class webrtc::RtpTransmissionManager const* rtp_manager() const;

    // symbol: ?rtp_manager@PeerConnection@webrtc@@UEAAPEAVRtpTransmissionManager@2@XZ
    MCVAPI class webrtc::RtpTransmissionManager* rtp_manager();

    // symbol:
    // ?sctp_mid@PeerConnection@webrtc@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCVAPI std::optional<std::string> sctp_mid() const;

    // symbol:
    // ?sctp_transport_name@PeerConnection@webrtc@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@XZ
    MCVAPI std::optional<std::string> sctp_transport_name() const;

    // symbol: ?session_id@PeerConnection@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string session_id() const;

    // symbol: ?signaling_state@PeerConnection@webrtc@@UEAA?AW4SignalingState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::SignalingState signaling_state();

    // symbol: ?signaling_thread@PeerConnection@webrtc@@UEBAPEAVThread@rtc@@XZ
    MCVAPI class rtc::Thread* signaling_thread() const;

    // symbol:
    // ?standardized_ice_connection_state@PeerConnection@webrtc@@UEAA?AW4IceConnectionState@PeerConnectionInterface@2@XZ
    MCVAPI ::webrtc::PeerConnectionInterface::IceConnectionState standardized_ice_connection_state();

    // symbol: ?transport_controller_n@PeerConnection@webrtc@@UEAAPEAVJsepTransportController@2@XZ
    MCVAPI class webrtc::JsepTransportController* transport_controller_n();

    // symbol: ?transport_controller_s@PeerConnection@webrtc@@UEAAPEAVJsepTransportController@2@XZ
    MCVAPI class webrtc::JsepTransportController* transport_controller_s();

    // symbol: ?trials@PeerConnection@webrtc@@UEBAAEBVFieldTrialsView@2@XZ
    MCVAPI class webrtc::FieldTrialsView const& trials() const;

    // symbol: ?worker_thread@PeerConnection@webrtc@@UEBAPEAVThread@rtc@@XZ
    MCVAPI class rtc::Thread* worker_thread() const;

    // symbol: ??1PeerConnection@webrtc@@MEAA@XZ
    MCVAPI ~PeerConnection();

    // symbol:
    // ?AddTrack@PeerConnection@webrtc@@QEAA?AV?$RTCErrorOr@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@rtc@@@2@V?$scoped_refptr@VMediaStreamTrackInterface@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBV?$vector@URtpEncodingParameters@webrtc@@V?$allocator@URtpEncodingParameters@webrtc@@@std@@@7@@Z
    MCAPI class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::RtpSenderInterface>>
    AddTrack(class rtc::scoped_refptr<class webrtc::MediaStreamTrackInterface>, std::vector<std::string> const&, std::vector<struct webrtc::RtpEncodingParameters> const*);

    // symbol: ?ConfiguredForMedia@PeerConnection@webrtc@@QEBA_NXZ
    MCAPI bool ConfiguredForMedia() const;

    // symbol: ?ReportFirstConnectUsageMetrics@PeerConnection@webrtc@@QEAAXXZ
    MCAPI void ReportFirstConnectUsageMetrics();

    // symbol:
    // ?Create@PeerConnection@webrtc@@SA?AV?$RTCErrorOr@V?$scoped_refptr@VPeerConnection@webrtc@@@rtc@@@2@V?$scoped_refptr@VConnectionContext@webrtc@@@rtc@@AEBVOptions@PeerConnectionFactoryInterface@2@V?$unique_ptr@VRtcEventLog@webrtc@@U?$default_delete@VRtcEventLog@webrtc@@@std@@@std@@V?$unique_ptr@VCall@webrtc@@U?$default_delete@VCall@webrtc@@@std@@@9@AEBURTCConfiguration@PeerConnectionInterface@2@UPeerConnectionDependencies@2@@Z
    MCAPI static class webrtc::RTCErrorOr<class rtc::scoped_refptr<class webrtc::PeerConnection>> Create(
        class rtc::scoped_refptr<class webrtc::ConnectionContext>,
        class webrtc::PeerConnectionFactoryInterface::Options const&,
        std::unique_ptr<class webrtc::RtcEventLog>,
        std::unique_ptr<class webrtc::Call>,
        struct webrtc::PeerConnectionInterface::RTCConfiguration const&,
        struct webrtc::PeerConnectionDependencies
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0PeerConnection@webrtc@@IEAA@V?$scoped_refptr@VConnectionContext@webrtc@@@rtc@@AEBVOptions@PeerConnectionFactoryInterface@1@_NV?$unique_ptr@VRtcEventLog@webrtc@@U?$default_delete@VRtcEventLog@webrtc@@@std@@@std@@V?$unique_ptr@VCall@webrtc@@U?$default_delete@VCall@webrtc@@@std@@@7@AEAUPeerConnectionDependencies@1@2@Z
    MCAPI PeerConnection(
        class rtc::scoped_refptr<class webrtc::ConnectionContext>,
        class webrtc::PeerConnectionFactoryInterface::Options const&,
        bool,
        std::unique_ptr<class webrtc::RtcEventLog>,
        std::unique_ptr<class webrtc::Call>,
        struct webrtc::PeerConnectionDependencies&,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?FindTransceiverBySender@PeerConnection@webrtc@@AEAA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$scoped_refptr@VRtpSenderInterface@webrtc@@@4@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
        FindTransceiverBySender(class rtc::scoped_refptr<class webrtc::RtpSenderInterface>);

    // symbol:
    // ?GetLocalCandidateMediaIndex@PeerConnection@webrtc@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAH@Z
    MCAPI bool GetLocalCandidateMediaIndex(std::string const&, int*);

    // symbol:
    // ?Initialize@PeerConnection@webrtc@@AEAA?AVRTCError@2@AEBURTCConfiguration@PeerConnectionInterface@2@UPeerConnectionDependencies@2@@Z
    MCAPI class webrtc::RTCError Initialize(
        struct webrtc::PeerConnectionInterface::RTCConfiguration const&,
        struct webrtc::PeerConnectionDependencies
    );

    // symbol:
    // ?InitializePortAllocator_n@PeerConnection@webrtc@@AEAA?AUInitializePortAllocatorResult@12@AEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@AEBV?$vector@URelayServerConfig@cricket@@V?$allocator@URelayServerConfig@cricket@@@std@@@5@AEBURTCConfiguration@PeerConnectionInterface@2@@Z
    MCAPI struct webrtc::PeerConnection::InitializePortAllocatorResult
    InitializePortAllocator_n(std::set<class rtc::SocketAddress> const&, std::vector<struct cricket::RelayServerConfig> const&, struct webrtc::PeerConnectionInterface::RTCConfiguration const&);

    // symbol:
    // ?InitializeRtcpCallback@PeerConnection@webrtc@@AEAA?AV?$function@$$A6AXAEBVCopyOnWriteBuffer@rtc@@_J@Z@std@@XZ
    MCAPI std::function<void(class rtc::CopyOnWriteBuffer const&, int64)> InitializeRtcpCallback();

    // symbol:
    // ?InitializeTransportController_n@PeerConnection@webrtc@@AEAAPEAVJsepTransportController@2@AEBURTCConfiguration@PeerConnectionInterface@2@AEBUPeerConnectionDependencies@2@@Z
    MCAPI class webrtc::JsepTransportController*
    InitializeTransportController_n(struct webrtc::PeerConnectionInterface::RTCConfiguration const&, struct webrtc::PeerConnectionDependencies const&);

    // symbol:
    // ?OnIceCandidate@PeerConnection@webrtc@@AEAAXV?$unique_ptr@VIceCandidateInterface@webrtc@@U?$default_delete@VIceCandidateInterface@webrtc@@@std@@@std@@@Z
    MCAPI void OnIceCandidate(std::unique_ptr<class webrtc::IceCandidateInterface>);

    // symbol:
    // ?OnIceCandidateError@PeerConnection@webrtc@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H0H0@Z
    MCAPI void OnIceCandidateError(std::string const&, int, std::string const&, int, std::string const&);

    // symbol:
    // ?OnIceCandidatesRemoved@PeerConnection@webrtc@@AEAAXAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void OnIceCandidatesRemoved(std::vector<class cricket::Candidate> const&);

    // symbol: ?OnIceGatheringChange@PeerConnection@webrtc@@AEAAXW4IceGatheringState@PeerConnectionInterface@2@@Z
    MCAPI void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState);

    // symbol: ?OnSelectedCandidatePairChanged@PeerConnection@webrtc@@AEAAXAEBUCandidatePairChangeEvent@cricket@@@Z
    MCAPI void OnSelectedCandidatePairChanged(struct cricket::CandidatePairChangeEvent const&);

    // symbol:
    // ?OnTransportControllerCandidateChanged@PeerConnection@webrtc@@AEAAXAEBUCandidatePairChangeEvent@cricket@@@Z
    MCAPI void OnTransportControllerCandidateChanged(struct cricket::CandidatePairChangeEvent const&);

    // symbol: ?OnTransportControllerCandidateError@PeerConnection@webrtc@@AEAAXAEBUIceCandidateErrorEvent@cricket@@@Z
    MCAPI void OnTransportControllerCandidateError(struct cricket::IceCandidateErrorEvent const&);

    // symbol:
    // ?OnTransportControllerCandidatesGathered@PeerConnection@webrtc@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@4@@Z
    MCAPI void
    OnTransportControllerCandidatesGathered(std::string const&, std::vector<class cricket::Candidate> const&);

    // symbol:
    // ?OnTransportControllerCandidatesRemoved@PeerConnection@webrtc@@AEAAXAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void OnTransportControllerCandidatesRemoved(std::vector<class cricket::Candidate> const&);

    // symbol: ?OnTransportControllerConnectionState@PeerConnection@webrtc@@AEAAXW4IceConnectionState@cricket@@@Z
    MCAPI void OnTransportControllerConnectionState(::cricket::IceConnectionState);

    // symbol: ?OnTransportControllerDtlsHandshakeError@PeerConnection@webrtc@@AEAAXW4SSLHandshakeError@rtc@@@Z
    MCAPI void OnTransportControllerDtlsHandshakeError(::rtc::SSLHandshakeError);

    // symbol: ?OnTransportControllerGatheringState@PeerConnection@webrtc@@AEAAXW4IceGatheringState@cricket@@@Z
    MCAPI void OnTransportControllerGatheringState(::cricket::IceGatheringState);

    // symbol:
    // ?ReconfigurePortAllocator_n@PeerConnection@webrtc@@AEAA_NAEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@AEBV?$vector@URelayServerConfig@cricket@@V?$allocator@URelayServerConfig@cricket@@@std@@@4@W4IceTransportsType@PeerConnectionInterface@2@HW4PortPrunePolicy@2@PEAVTurnCustomizer@2@V?$optional@H@4@_N@Z
    MCAPI bool ReconfigurePortAllocator_n(
        std::set<class rtc::SocketAddress> const&,
        std::vector<struct cricket::RelayServerConfig> const&,
        ::webrtc::PeerConnectionInterface::IceTransportsType,
        int,
        ::webrtc::PortPrunePolicy,
        class webrtc::TurnCustomizer*,
        std::optional<int>,
        bool
    );

    // symbol: ?ReportIceCandidateCollected@PeerConnection@webrtc@@AEAAXAEBVCandidate@cricket@@@Z
    MCAPI void ReportIceCandidateCollected(class cricket::Candidate const&);

    // symbol: ?ReportRemoteIceCandidateAdded@PeerConnection@webrtc@@AEAAXAEBVCandidate@cricket@@@Z
    MCAPI void ReportRemoteIceCandidateAdded(class cricket::Candidate const&);

    // symbol: ?ReportTransportStats@PeerConnection@webrtc@@AEAAXXZ
    MCAPI void ReportTransportStats();

    // symbol: ?ReportUsagePattern@PeerConnection@webrtc@@AEBAXXZ
    MCAPI void ReportUsagePattern() const;

    // symbol: ?SetConnectionState@PeerConnection@webrtc@@AEAAXW4PeerConnectionState@PeerConnectionInterface@2@@Z
    MCAPI void SetConnectionState(::webrtc::PeerConnectionInterface::PeerConnectionState);

    // symbol:
    // ?SetSctpTransportName@PeerConnection@webrtc@@AEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void SetSctpTransportName(std::string);

    // symbol:
    // ?SetStandardizedIceConnectionState@PeerConnection@webrtc@@AEAAXW4IceConnectionState@PeerConnectionInterface@2@@Z
    MCAPI void SetStandardizedIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState);

    // symbol:
    // ?StartRtcEventLog_w@PeerConnection@webrtc@@AEAA_NV?$unique_ptr@VRtcEventLogOutput@webrtc@@U?$default_delete@VRtcEventLogOutput@webrtc@@@std@@@std@@_J@Z
    MCAPI bool StartRtcEventLog_w(std::unique_ptr<class webrtc::RtcEventLogOutput>, int64);

    // symbol: ?StopRtcEventLog_w@PeerConnection@webrtc@@AEAAXXZ
    MCAPI void StopRtcEventLog_w();

    // symbol: ?ReportBestConnectionState@PeerConnection@webrtc@@CAXAEBUTransportStats@cricket@@@Z
    MCAPI static void ReportBestConnectionState(struct cricket::TransportStats const&);

    // symbol:
    // ?ReportNegotiatedCiphers@PeerConnection@webrtc@@CAX_NAEBUTransportStats@cricket@@AEBV?$set@W4MediaType@cricket@@U?$less@W4MediaType@cricket@@@std@@V?$allocator@W4MediaType@cricket@@@4@@std@@@Z
    MCAPI static void
    ReportNegotiatedCiphers(bool, struct cricket::TransportStats const&, std::set<::cricket::MediaType> const&);

    // NOLINTEND
};

}; // namespace webrtc
