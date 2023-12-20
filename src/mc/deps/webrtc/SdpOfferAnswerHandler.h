#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AddIceCandidateResult.h"
#include "mc/deps/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/RTCErrorType.h"
#include "mc/deps/webrtc/RtpTransceiverDirection.h"
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/SdpStateProvider.h"
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/detail/ContentSource.h"
#include "mc/deps/webrtc/detail/MediaType.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/SSLRole.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class Candidate; }
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace cricket { class VideoContentDescription; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct StreamParams; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionSdpMethods; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class SdpStateProvider; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StreamCollection; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
// clang-format on

namespace webrtc {

class SdpOfferAnswerHandler : public ::webrtc::SdpStateProvider {
public:
    // SdpOfferAnswerHandler inner types declare
    // clang-format off
    class ImplicitCreateSessionDescriptionObserver;
    class LocalIceCredentialsToReplace;
    class RemoteDescriptionOperation;
    class SetSessionDescriptionObserverAdapter;
    // clang-format on

    // SdpOfferAnswerHandler inner types define
    enum class SessionError {};

    class ImplicitCreateSessionDescriptionObserver : public ::webrtc::CreateSessionDescriptionObserver {
    public:
        // prevent constructor by default
        ImplicitCreateSessionDescriptionObserver& operator=(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver();

    public:
        // NOLINTBEGIN
        // vIndex: 2, symbol: ??1ImplicitCreateSessionDescriptionObserver@SdpOfferAnswerHandler@webrtc@@UEAA@XZ
        virtual ~ImplicitCreateSessionDescriptionObserver();

        // vIndex: 3, symbol:
        // ?OnSuccess@ImplicitCreateSessionDescriptionObserver@SdpOfferAnswerHandler@webrtc@@UEAAXPEAVSessionDescriptionInterface@3@@Z
        virtual void OnSuccess(class webrtc::SessionDescriptionInterface*);

        // vIndex: 4, symbol:
        // ?OnFailure@ImplicitCreateSessionDescriptionObserver@SdpOfferAnswerHandler@webrtc@@UEAAXVRTCError@3@@Z
        virtual void OnFailure(class webrtc::RTCError);

        // NOLINTEND
    };

    class LocalIceCredentialsToReplace {
    public:
        // prevent constructor by default
        LocalIceCredentialsToReplace& operator=(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace();

    public:
        // NOLINTBEGIN
        // symbol: ?ClearIceCredentials@LocalIceCredentialsToReplace@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
        MCAPI void ClearIceCredentials();

        // symbol:
        // ?SatisfiesIceRestart@LocalIceCredentialsToReplace@SdpOfferAnswerHandler@webrtc@@QEBA_NAEBVSessionDescriptionInterface@3@@Z
        MCAPI bool SatisfiesIceRestart(class webrtc::SessionDescriptionInterface const&) const;

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?AppendIceCredentialsFromSessionDescription@LocalIceCredentialsToReplace@SdpOfferAnswerHandler@webrtc@@AEAAXAEBVSessionDescriptionInterface@3@@Z
        MCAPI void AppendIceCredentialsFromSessionDescription(class webrtc::SessionDescriptionInterface const&);

        // NOLINTEND
    };

    class RemoteDescriptionOperation {
    public:
        // prevent constructor by default
        RemoteDescriptionOperation& operator=(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation();

    public:
        // NOLINTBEGIN
        // symbol: ?HaveSessionError@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@QEAA_NXZ
        MCAPI bool HaveSessionError();

        // symbol: ?MaybeRollback@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@QEAA_NXZ
        MCAPI bool MaybeRollback();

        // symbol:
        // ??0RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@QEAA@PEAV12@V?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetRemoteDescriptionObserverInterface@webrtc@@@rtc@@V?$function@$$A6AXXZ@4@@Z
        MCAPI
        RemoteDescriptionOperation(class webrtc::SdpOfferAnswerHandler*, std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetRemoteDescriptionObserverInterface>, std::function<void(void)>);

        // symbol: ?SignalCompletion@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
        MCAPI void SignalCompletion();

        // symbol: ?UpdateChannels@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@QEAA_NXZ
        MCAPI bool UpdateChannels();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?InvalidParam@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@AEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void InvalidParam(std::string);

        // symbol: ?SetAsSessionError@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
        MCAPI void SetAsSessionError();

        // symbol:
        // ?SetError@RemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@AEAAXW4RTCErrorType@3@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI void SetError(::webrtc::RTCErrorType, std::string);

        // NOLINTEND
    };

    class SetSessionDescriptionObserverAdapter {
    public:
        // prevent constructor by default
        SetSessionDescriptionObserverAdapter& operator=(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?OnSetLocalDescriptionComplete@SetSessionDescriptionObserverAdapter@SdpOfferAnswerHandler@webrtc@@UEAAXVRTCError@3@@Z
        MCVAPI void OnSetLocalDescriptionComplete(class webrtc::RTCError);

        // symbol:
        // ?OnSetRemoteDescriptionComplete@SetSessionDescriptionObserverAdapter@SdpOfferAnswerHandler@webrtc@@UEAAXVRTCError@3@@Z
        MCVAPI void OnSetRemoteDescriptionComplete(class webrtc::RTCError);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ?OnSetDescriptionComplete@SetSessionDescriptionObserverAdapter@SdpOfferAnswerHandler@webrtc@@AEAAXVRTCError@3@@Z
        MCAPI void OnSetDescriptionComplete(class webrtc::RTCError);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SdpOfferAnswerHandler& operator=(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SdpOfferAnswerHandler@webrtc@@UEAA@XZ
    virtual ~SdpOfferAnswerHandler();

    // vIndex: 1, symbol:
    // ?signaling_state@SdpOfferAnswerHandler@webrtc@@UEBA?AW4SignalingState@PeerConnectionInterface@2@XZ
    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() const;

    // vIndex: 2, symbol: ?local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* local_description() const;

    // vIndex: 3, symbol: ?remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* remote_description() const;

    // vIndex: 4, symbol:
    // ?current_local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* current_local_description() const;

    // vIndex: 5, symbol:
    // ?current_remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* current_remote_description() const;

    // vIndex: 6, symbol:
    // ?pending_local_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* pending_local_description() const;

    // vIndex: 7, symbol:
    // ?pending_remote_description@SdpOfferAnswerHandler@webrtc@@UEBAPEBVSessionDescriptionInterface@2@XZ
    virtual class webrtc::SessionDescriptionInterface const* pending_remote_description() const;

    // vIndex: 8, symbol:
    // ?NeedsIceRestart@SdpOfferAnswerHandler@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool NeedsIceRestart(std::string const&) const;

    // vIndex: 9, symbol:
    // ?IceRestartPending@SdpOfferAnswerHandler@webrtc@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool IceRestartPending(std::string const&) const;

    // vIndex: 10, symbol:
    // ?GetDtlsRole@SdpOfferAnswerHandler@webrtc@@UEBA?AV?$optional@W4SSLRole@rtc@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    virtual std::optional<::rtc::SSLRole> GetDtlsRole(std::string const&) const;

    // symbol: ?AddIceCandidate@SdpOfferAnswerHandler@webrtc@@QEAA_NPEBVIceCandidateInterface@2@@Z
    MCAPI bool AddIceCandidate(class webrtc::IceCandidateInterface const*);

    // symbol:
    // ?AddIceCandidate@SdpOfferAnswerHandler@webrtc@@QEAAXV?$unique_ptr@VIceCandidateInterface@webrtc@@U?$default_delete@VIceCandidateInterface@webrtc@@@std@@@std@@V?$function@$$A6AXVRTCError@webrtc@@@Z@4@@Z
    MCAPI void
        AddIceCandidate(std::unique_ptr<class webrtc::IceCandidateInterface>, std::function<void(class webrtc::RTCError)>);

    // symbol: ?AddLocalIceCandidate@SdpOfferAnswerHandler@webrtc@@QEAAXPEBVJsepIceCandidate@2@@Z
    MCAPI void AddLocalIceCandidate(class webrtc::JsepIceCandidate const*);

    // symbol: ?AddStream@SdpOfferAnswerHandler@webrtc@@QEAA_NPEAVMediaStreamInterface@2@@Z
    MCAPI bool AddStream(class webrtc::MediaStreamInterface*);

    // symbol: ?Close@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
    MCAPI void Close();

    // symbol:
    // ?CreateAnswer@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVCreateSessionDescriptionObserver@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@@Z
    MCAPI void
    CreateAnswer(class webrtc::CreateSessionDescriptionObserver*, struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    // symbol:
    // ?CreateOffer@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVCreateSessionDescriptionObserver@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@@Z
    MCAPI void
    CreateOffer(class webrtc::CreateSessionDescriptionObserver*, struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    // symbol: ?DestroyAllChannels@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
    MCAPI void DestroyAllChannels();

    // symbol: ?HasNewIceCredentials@SdpOfferAnswerHandler@webrtc@@QEAA_NXZ
    MCAPI bool HasNewIceCredentials();

    // symbol: ?PrepareForShutdown@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
    MCAPI void PrepareForShutdown();

    // symbol:
    // ?RemoveIceCandidates@SdpOfferAnswerHandler@webrtc@@QEAA_NAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI bool RemoveIceCandidates(std::vector<class cricket::Candidate> const&);

    // symbol:
    // ?RemoveLocalIceCandidates@SdpOfferAnswerHandler@webrtc@@QEAAXAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void RemoveLocalIceCandidates(std::vector<class cricket::Candidate> const&);

    // symbol: ?RemoveStream@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVMediaStreamInterface@2@@Z
    MCAPI void RemoveStream(class webrtc::MediaStreamInterface*);

    // symbol: ?RestartIce@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
    MCAPI void RestartIce();

    // symbol:
    // ?SetLocalDescription@SdpOfferAnswerHandler@webrtc@@QEAAXV?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCAPI void SetLocalDescription(class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol: ?SetLocalDescription@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVSetSessionDescriptionObserver@2@@Z
    MCAPI void SetLocalDescription(class webrtc::SetSessionDescriptionObserver*);

    // symbol:
    // ?SetLocalDescription@SdpOfferAnswerHandler@webrtc@@QEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCAPI void
        SetLocalDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol:
    // ?SetLocalDescription@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVSetSessionDescriptionObserver@2@PEAVSessionDescriptionInterface@2@@Z
    MCAPI void
    SetLocalDescription(class webrtc::SetSessionDescriptionObserver*, class webrtc::SessionDescriptionInterface*);

    // symbol:
    // ?SetRemoteDescription@SdpOfferAnswerHandler@webrtc@@QEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetRemoteDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCAPI void
        SetRemoteDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetRemoteDescriptionObserverInterface>);

    // symbol:
    // ?SetRemoteDescription@SdpOfferAnswerHandler@webrtc@@QEAAXPEAVSetSessionDescriptionObserver@2@PEAVSessionDescriptionInterface@2@@Z
    MCAPI void
    SetRemoteDescription(class webrtc::SetSessionDescriptionObserver*, class webrtc::SessionDescriptionInterface*);

    // symbol: ?ShouldFireNegotiationNeededEvent@SdpOfferAnswerHandler@webrtc@@QEAA_NI@Z
    MCAPI bool ShouldFireNegotiationNeededEvent(uint);

    // symbol: ?UpdateNegotiationNeeded@SdpOfferAnswerHandler@webrtc@@QEAAXXZ
    MCAPI void UpdateNegotiationNeeded();

    // symbol: ?is_caller@SdpOfferAnswerHandler@webrtc@@QEAA?AV?$optional@_N@std@@XZ
    MCAPI std::optional<bool> is_caller();

    // symbol:
    // ?local_streams@SdpOfferAnswerHandler@webrtc@@QEAA?AV?$scoped_refptr@VStreamCollectionInterface@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::StreamCollectionInterface> local_streams();

    // symbol:
    // ?remote_streams@SdpOfferAnswerHandler@webrtc@@QEAA?AV?$scoped_refptr@VStreamCollectionInterface@webrtc@@@rtc@@XZ
    MCAPI class rtc::scoped_refptr<class webrtc::StreamCollectionInterface> remote_streams();

    // symbol:
    // ?Create@SdpOfferAnswerHandler@webrtc@@SA?AV?$unique_ptr@VSdpOfferAnswerHandler@webrtc@@U?$default_delete@VSdpOfferAnswerHandler@webrtc@@@std@@@std@@PEAVPeerConnectionSdpMethods@2@AEBURTCConfiguration@PeerConnectionInterface@2@AEAUPeerConnectionDependencies@2@PEAVConnectionContext@2@@Z
    MCAPI static std::unique_ptr<class webrtc::SdpOfferAnswerHandler>
    Create(class webrtc::PeerConnectionSdpMethods*, struct webrtc::PeerConnectionInterface::RTCConfiguration const&, struct webrtc::PeerConnectionDependencies&, class webrtc::ConnectionContext*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?AddIceCandidateInternal@SdpOfferAnswerHandler@webrtc@@AEAA?AW4AddIceCandidateResult@2@PEBVIceCandidateInterface@2@@Z
    MCAPI ::webrtc::AddIceCandidateResult AddIceCandidateInternal(class webrtc::IceCandidateInterface const*);

    // symbol: ?AddUpToOneReceivingTransceiverOfType@SdpOfferAnswerHandler@webrtc@@AEAAXW4MediaType@cricket@@@Z
    MCAPI void AddUpToOneReceivingTransceiverOfType(::cricket::MediaType);

    // symbol:
    // ?ApplyLocalDescription@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@V?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@5@@Z
    MCAPI class webrtc::RTCError
    ApplyLocalDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol:
    // ?ApplyRemoteDescription@SdpOfferAnswerHandler@webrtc@@AEAAXV?$unique_ptr@VRemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@U?$default_delete@VRemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@@std@@@std@@@Z
    MCAPI void ApplyRemoteDescription(std::unique_ptr<class webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    // symbol: ?ApplyRemoteDescriptionUpdateTransceiverState@SdpOfferAnswerHandler@webrtc@@AEAAXW4SdpType@2@@Z
    MCAPI void ApplyRemoteDescriptionUpdateTransceiverState(::webrtc::SdpType);

    // symbol:
    // ?AssociateTransceiver@SdpOfferAnswerHandler@webrtc@@AEAA?AV?$RTCErrorOr@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@2@W4ContentSource@cricket@@W4SdpType@2@_KAEBVContentInfo@5@PEBV75@4@Z
    MCAPI class webrtc::RTCErrorOr<
        class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>>
    AssociateTransceiver(::cricket::ContentSource, ::webrtc::SdpType, uint64, class cricket::ContentInfo const&, class cricket::ContentInfo const*, class cricket::ContentInfo const*);

    // symbol: ?ChangeSignalingState@SdpOfferAnswerHandler@webrtc@@AEAAXW4SignalingState@PeerConnectionInterface@2@@Z
    MCAPI void ChangeSignalingState(::webrtc::PeerConnectionInterface::SignalingState);

    // symbol: ?CheckIfNegotiationIsNeeded@SdpOfferAnswerHandler@webrtc@@AEAA_NXZ
    MCAPI bool CheckIfNegotiationIsNeeded();

    // symbol: ?ConfiguredForMedia@SdpOfferAnswerHandler@webrtc@@AEBA_NXZ
    MCAPI bool ConfiguredForMedia() const;

    // symbol: ?CreateChannels@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@AEBVSessionDescription@cricket@@@Z
    MCAPI class webrtc::RTCError CreateChannels(class cricket::SessionDescription const&);

    // symbol:
    // ?CreateDataChannel@SdpOfferAnswerHandler@webrtc@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool CreateDataChannel(std::string const&);

    // symbol: ?DestroyDataChannelTransport@SdpOfferAnswerHandler@webrtc@@AEAAXVRTCError@2@@Z
    MCAPI void DestroyDataChannelTransport(class webrtc::RTCError);

    // symbol:
    // ?DoCreateAnswer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@V?$scoped_refptr@VCreateSessionDescriptionObserver@webrtc@@@rtc@@@Z
    MCAPI void
    DoCreateAnswer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, class rtc::scoped_refptr<class webrtc::CreateSessionDescriptionObserver>);

    // symbol:
    // ?DoCreateOffer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@V?$scoped_refptr@VCreateSessionDescriptionObserver@webrtc@@@rtc@@@Z
    MCAPI void
    DoCreateOffer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, class rtc::scoped_refptr<class webrtc::CreateSessionDescriptionObserver>);

    // symbol:
    // ?DoSetLocalDescription@SdpOfferAnswerHandler@webrtc@@AEAAXV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@V?$scoped_refptr@VSetLocalDescriptionObserverInterface@webrtc@@@rtc@@@Z
    MCAPI void
        DoSetLocalDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, class rtc::scoped_refptr<class webrtc::SetLocalDescriptionObserverInterface>);

    // symbol:
    // ?DoSetRemoteDescription@SdpOfferAnswerHandler@webrtc@@AEAAXV?$unique_ptr@VRemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@U?$default_delete@VRemoteDescriptionOperation@SdpOfferAnswerHandler@webrtc@@@std@@@std@@@Z
    MCAPI void DoSetRemoteDescription(std::unique_ptr<class webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    // symbol: ?EnableSending@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
    MCAPI void EnableSending();

    // symbol: ?ExpectSetLocalDescription@SdpOfferAnswerHandler@webrtc@@AEAA_NW4SdpType@2@@Z
    MCAPI bool ExpectSetLocalDescription(::webrtc::SdpType);

    // symbol: ?ExpectSetRemoteDescription@SdpOfferAnswerHandler@webrtc@@AEAA_NW4SdpType@2@@Z
    MCAPI bool ExpectSetRemoteDescription(::webrtc::SdpType);

    // symbol: ?FillInMissingRemoteMids@SdpOfferAnswerHandler@webrtc@@AEAAXPEAVSessionDescription@cricket@@@Z
    MCAPI void FillInMissingRemoteMids(class cricket::SessionDescription*);

    // symbol:
    // ?FindAvailableTransceiverToReceive@SdpOfferAnswerHandler@webrtc@@AEBA?AV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@W4MediaType@cricket@@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>
        FindAvailableTransceiverToReceive(::cricket::MediaType) const;

    // symbol:
    // ?FindContentInfo@SdpOfferAnswerHandler@webrtc@@AEAA?AV?$RTCErrorOr@PEBVContentInfo@cricket@@@2@PEBVSessionDescriptionInterface@2@PEBVIceCandidateInterface@2@@Z
    MCAPI class webrtc::RTCErrorOr<class cricket::ContentInfo const*>
    FindContentInfo(class webrtc::SessionDescriptionInterface const*, class webrtc::IceCandidateInterface const*);

    // symbol:
    // ?FindMediaSectionForTransceiver@SdpOfferAnswerHandler@webrtc@@AEBAPEBVContentInfo@cricket@@PEBVRtpTransceiver@2@PEBVSessionDescriptionInterface@2@@Z
    MCAPI class cricket::ContentInfo const*
    FindMediaSectionForTransceiver(class webrtc::RtpTransceiver const*, class webrtc::SessionDescriptionInterface const*)
        const;

    // symbol:
    // ?GenerateMediaDescriptionOptions@SdpOfferAnswerHandler@webrtc@@AEAAXPEBVSessionDescriptionInterface@2@W4RtpTransceiverDirection@2@1PEAV?$optional@_K@std@@22PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GenerateMediaDescriptionOptions(class webrtc::SessionDescriptionInterface const*, ::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection, std::optional<uint64>*, std::optional<uint64>*, std::optional<uint64>*, struct cricket::MediaSessionOptions*);

    // symbol: ?GenerateNegotiationNeededEvent@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
    MCAPI void GenerateNegotiationNeededEvent();

    // symbol:
    // ?GetMediaDescriptionOptionsForActiveData@SdpOfferAnswerHandler@webrtc@@AEBA?AUMediaDescriptionOptions@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForActiveData(std::string const&) const;

    // symbol:
    // ?GetMediaDescriptionOptionsForRejectedData@SdpOfferAnswerHandler@webrtc@@AEBA?AUMediaDescriptionOptions@cricket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForRejectedData(std::string const&) const;

    // symbol:
    // ?GetOptionsForAnswer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForAnswer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetOptionsForOffer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForOffer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetOptionsForPlanBAnswer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForPlanBAnswer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetOptionsForPlanBOffer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForPlanBOffer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetOptionsForUnifiedPlanAnswer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForUnifiedPlanAnswer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetOptionsForUnifiedPlanOffer@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCOfferAnswerOptions@PeerConnectionInterface@2@PEAUMediaSessionOptions@cricket@@@Z
    MCAPI void
    GetOptionsForUnifiedPlanOffer(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, struct cricket::MediaSessionOptions*);

    // symbol:
    // ?GetReceivingTransceiversOfType@SdpOfferAnswerHandler@webrtc@@AEAA?AV?$vector@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@std@@@std@@W4MediaType@cricket@@@Z
    MCAPI std::vector<
        class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>>
        GetReceivingTransceiversOfType(::cricket::MediaType);

    // symbol:
    // ?GetSessionErrorMsg@SdpOfferAnswerHandler@webrtc@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string GetSessionErrorMsg();

    // symbol:
    // ?HandleLegacyOfferOptions@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@AEBURTCOfferAnswerOptions@PeerConnectionInterface@2@@Z
    MCAPI class webrtc::RTCError
    HandleLegacyOfferOptions(struct webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    // symbol:
    // ?Initialize@SdpOfferAnswerHandler@webrtc@@AEAAXAEBURTCConfiguration@PeerConnectionInterface@2@AEAUPeerConnectionDependencies@2@PEAVConnectionContext@2@@Z
    MCAPI void
    Initialize(struct webrtc::PeerConnectionInterface::RTCConfiguration const&, struct webrtc::PeerConnectionDependencies&, class webrtc::ConnectionContext*);

    // symbol: ?IsUnifiedPlan@SdpOfferAnswerHandler@webrtc@@AEBA_NXZ
    MCAPI bool IsUnifiedPlan() const;

    // symbol:
    // ?OnAudioTrackAdded@SdpOfferAnswerHandler@webrtc@@AEAAXPEAVAudioTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void OnAudioTrackAdded(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ?OnAudioTrackRemoved@SdpOfferAnswerHandler@webrtc@@AEAAXPEAVAudioTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void OnAudioTrackRemoved(class webrtc::AudioTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol: ?OnOperationsChainEmpty@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
    MCAPI void OnOperationsChainEmpty();

    // symbol:
    // ?OnVideoTrackAdded@SdpOfferAnswerHandler@webrtc@@AEAAXPEAVVideoTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void OnVideoTrackAdded(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ?OnVideoTrackRemoved@SdpOfferAnswerHandler@webrtc@@AEAAXPEAVVideoTrackInterface@2@PEAVMediaStreamInterface@2@@Z
    MCAPI void OnVideoTrackRemoved(class webrtc::VideoTrackInterface*, class webrtc::MediaStreamInterface*);

    // symbol:
    // ?PlanBUpdateSendersAndReceivers@SdpOfferAnswerHandler@webrtc@@AEAAXPEBVContentInfo@cricket@@PEBVAudioContentDescription@4@0PEBVVideoContentDescription@4@@Z
    MCAPI void
    PlanBUpdateSendersAndReceivers(class cricket::ContentInfo const*, class cricket::AudioContentDescription const*, class cricket::ContentInfo const*, class cricket::VideoContentDescription const*);

    // symbol:
    // ?ProcessRemovalOfRemoteTrack@SdpOfferAnswerHandler@webrtc@@AEAAXV?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@PEAV?$vector@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VRtpTransceiverInterface@webrtc@@@rtc@@@std@@@std@@PEAV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@6@@Z
    MCAPI void
    ProcessRemovalOfRemoteTrack(class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>, std::vector<class rtc::scoped_refptr<class webrtc::RtpTransceiverInterface>>*, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>>*);

    // symbol:
    // ?PushdownMediaDescription@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4SdpType@2@W4ContentSource@cricket@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCAPI class webrtc::RTCError
    PushdownMediaDescription(::webrtc::SdpType, ::cricket::ContentSource, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol:
    // ?PushdownTransportDescription@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4ContentSource@cricket@@W4SdpType@2@@Z
    MCAPI class webrtc::RTCError PushdownTransportDescription(::cricket::ContentSource, ::webrtc::SdpType);

    // symbol:
    // ?ReadyToUseRemoteCandidate@SdpOfferAnswerHandler@webrtc@@AEAA_NPEBVIceCandidateInterface@2@PEBVSessionDescriptionInterface@2@PEA_N@Z
    MCAPI bool
    ReadyToUseRemoteCandidate(class webrtc::IceCandidateInterface const*, class webrtc::SessionDescriptionInterface const*, bool*);

    // symbol:
    // ?RemoveRecvDirectionFromReceivingTransceiversOfType@SdpOfferAnswerHandler@webrtc@@AEAAXW4MediaType@cricket@@@Z
    MCAPI void RemoveRecvDirectionFromReceivingTransceiversOfType(::cricket::MediaType);

    // symbol:
    // ?RemoveRemoteStreamsIfEmpty@SdpOfferAnswerHandler@webrtc@@AEAAXAEBV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@std@@PEAV34@@Z
    MCAPI void
    RemoveRemoteStreamsIfEmpty(std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>> const&, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>>*);

    // symbol: ?RemoveSenders@SdpOfferAnswerHandler@webrtc@@AEAAXW4MediaType@cricket@@@Z
    MCAPI void RemoveSenders(::cricket::MediaType);

    // symbol: ?RemoveStoppedTransceivers@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
    MCAPI void RemoveStoppedTransceivers();

    // symbol: ?RemoveUnusedChannels@SdpOfferAnswerHandler@webrtc@@AEAAXPEBVSessionDescription@cricket@@@Z
    MCAPI void RemoveUnusedChannels(class cricket::SessionDescription const*);

    // symbol:
    // ?ReplaceRemoteDescription@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@V?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@W4SdpType@2@PEAV45@@Z
    MCAPI class webrtc::RTCError
    ReplaceRemoteDescription(std::unique_ptr<class webrtc::SessionDescriptionInterface>, ::webrtc::SdpType, std::unique_ptr<class webrtc::SessionDescriptionInterface>*);

    // symbol: ?Rollback@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4SdpType@2@@Z
    MCAPI class webrtc::RTCError Rollback(::webrtc::SdpType);

    // symbol: ??0SdpOfferAnswerHandler@webrtc@@AEAA@PEAVPeerConnectionSdpMethods@1@PEAVConnectionContext@1@@Z
    MCAPI SdpOfferAnswerHandler(class webrtc::PeerConnectionSdpMethods*, class webrtc::ConnectionContext*);

    // symbol: ?SessionErrorToString@SdpOfferAnswerHandler@webrtc@@AEBAPEBDW4SessionError@12@@Z
    MCAPI char const* SessionErrorToString(::webrtc::SdpOfferAnswerHandler::SessionError) const;

    // symbol:
    // ?SetAssociatedRemoteStreams@SdpOfferAnswerHandler@webrtc@@AEAAXV?$scoped_refptr@VRtpReceiverInternal@webrtc@@@rtc@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEAV?$vector@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@VMediaStreamInterface@webrtc@@@rtc@@@std@@@6@2@Z
    MCAPI void
    SetAssociatedRemoteStreams(class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>, std::vector<std::string> const&, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>>*, std::vector<class rtc::scoped_refptr<class webrtc::MediaStreamInterface>>*);

    // symbol: ?SetRemoteDescriptionPostProcess@SdpOfferAnswerHandler@webrtc@@AEAAX_N@Z
    MCAPI void SetRemoteDescriptionPostProcess(bool);

    // symbol:
    // ?SetSessionError@SdpOfferAnswerHandler@webrtc@@AEAAXW4SessionError@12@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void SetSessionError(::webrtc::SdpOfferAnswerHandler::SessionError, std::string const&);

    // symbol:
    // ?UpdateDataChannel@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4ContentSource@cricket@@AEBVContentInfo@5@PEBVContentGroup@5@@Z
    MCAPI class webrtc::RTCError
    UpdateDataChannel(::cricket::ContentSource, class cricket::ContentInfo const&, class cricket::ContentGroup const*);

    // symbol: ?UpdateEndedRemoteMediaStreams@SdpOfferAnswerHandler@webrtc@@AEAAXXZ
    MCAPI void UpdateEndedRemoteMediaStreams();

    // symbol:
    // ?UpdateLocalSenders@SdpOfferAnswerHandler@webrtc@@AEAAXAEBV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@W4MediaType@cricket@@@Z
    MCAPI void UpdateLocalSenders(std::vector<struct cricket::StreamParams> const&, ::cricket::MediaType);

    // symbol:
    // ?UpdatePayloadTypeDemuxingState@SdpOfferAnswerHandler@webrtc@@AEAA_NW4ContentSource@cricket@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCAPI bool
    UpdatePayloadTypeDemuxingState(::cricket::ContentSource, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol:
    // ?UpdateRemoteSendersList@SdpOfferAnswerHandler@webrtc@@AEAAXAEBV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@std@@_NW4MediaType@cricket@@PEAVStreamCollection@2@@Z
    MCAPI void
    UpdateRemoteSendersList(std::vector<struct cricket::StreamParams> const&, bool, ::cricket::MediaType, class webrtc::StreamCollection*);

    // symbol:
    // ?UpdateSessionState@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4SdpType@2@W4ContentSource@cricket@@PEBVSessionDescription@6@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCAPI class webrtc::RTCError
    UpdateSessionState(::webrtc::SdpType, ::cricket::ContentSource, class cricket::SessionDescription const*, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol:
    // ?UpdateTransceiverChannel@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@AEBVContentInfo@cricket@@PEBVContentGroup@7@@Z
    MCAPI class webrtc::RTCError
    UpdateTransceiverChannel(class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>, class cricket::ContentInfo const&, class cricket::ContentGroup const*);

    // symbol:
    // ?UpdateTransceiversAndDataChannels@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@W4ContentSource@cricket@@AEBVSessionDescriptionInterface@2@PEBV62@2AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCAPI class webrtc::RTCError
    UpdateTransceiversAndDataChannels(::cricket::ContentSource, class webrtc::SessionDescriptionInterface const&, class webrtc::SessionDescriptionInterface const*, class webrtc::SessionDescriptionInterface const*, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol: ?UseCandidate@SdpOfferAnswerHandler@webrtc@@AEAA_NPEBVIceCandidateInterface@2@@Z
    MCAPI bool UseCandidate(class webrtc::IceCandidateInterface const*);

    // symbol: ?UseCandidatesInRemoteDescription@SdpOfferAnswerHandler@webrtc@@AEAA_NXZ
    MCAPI bool UseCandidatesInRemoteDescription();

    // symbol:
    // ?ValidateSessionDescription@SdpOfferAnswerHandler@webrtc@@AEAA?AVRTCError@2@PEBVSessionDescriptionInterface@2@W4ContentSource@cricket@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVContentGroup@cricket@@@std@@@2@@std@@@Z
    MCAPI class webrtc::RTCError
    ValidateSessionDescription(class webrtc::SessionDescriptionInterface const*, ::cricket::ContentSource, std::map<std::string, class cricket::ContentGroup const*> const&);

    // symbol: ?data_channel_controller@SdpOfferAnswerHandler@webrtc@@AEAAPEAVDataChannelController@2@XZ
    MCAPI class webrtc::DataChannelController* data_channel_controller();

    // symbol: ?media_engine@SdpOfferAnswerHandler@webrtc@@AEBAPEAVMediaEngineInterface@cricket@@XZ
    MCAPI class cricket::MediaEngineInterface* media_engine() const;

    // symbol: ?port_allocator@SdpOfferAnswerHandler@webrtc@@AEAAPEAVPortAllocator@cricket@@XZ
    MCAPI class cricket::PortAllocator* port_allocator();

    // symbol: ?rtp_manager@SdpOfferAnswerHandler@webrtc@@AEAAPEAVRtpTransmissionManager@2@XZ
    MCAPI class webrtc::RtpTransmissionManager* rtp_manager();

    // symbol: ?transceivers@SdpOfferAnswerHandler@webrtc@@AEAAPEAVTransceiverList@2@XZ
    MCAPI class webrtc::TransceiverList* transceivers();

    // symbol: ?transceivers@SdpOfferAnswerHandler@webrtc@@AEBAPEBVTransceiverList@2@XZ
    MCAPI class webrtc::TransceiverList const* transceivers() const;

    // symbol: ?transport_controller_n@SdpOfferAnswerHandler@webrtc@@AEAAPEAVJsepTransportController@2@XZ
    MCAPI class webrtc::JsepTransportController* transport_controller_n();

    // symbol: ?transport_controller_s@SdpOfferAnswerHandler@webrtc@@AEAAPEAVJsepTransportController@2@XZ
    MCAPI class webrtc::JsepTransportController* transport_controller_s();

    // symbol: ?transport_controller_s@SdpOfferAnswerHandler@webrtc@@AEBAPEBVJsepTransportController@2@XZ
    MCAPI class webrtc::JsepTransportController const* transport_controller_s() const;

    // NOLINTEND
};

}; // namespace webrtc
