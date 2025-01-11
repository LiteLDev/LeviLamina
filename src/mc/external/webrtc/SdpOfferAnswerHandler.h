#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/AddIceCandidateResult.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

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
namespace rtc { class Thread; }
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

class SdpOfferAnswerHandler {
public:
    // SdpOfferAnswerHandler inner types declare
    // clang-format off
    class LocalIceCredentialsToReplace;
    class RemoteDescriptionOperation;
    class SetSessionDescriptionObserverAdapter;
    // clang-format on

    // SdpOfferAnswerHandler inner types define
    enum class SessionError : uint {};

    class LocalIceCredentialsToReplace {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void AppendIceCredentialsFromSessionDescription(::webrtc::SessionDescriptionInterface const&);

        MCAPI void ClearIceCredentials();

        MCAPI bool SatisfiesIceRestart(::webrtc::SessionDescriptionInterface const&) const;
        // NOLINTEND
    };

    class RemoteDescriptionOperation {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool HaveSessionError();

        MCAPI void InvalidParam(::std::string);

        MCAPI bool MaybeRollback();

        MCAPI
        RemoteDescriptionOperation(::webrtc::SdpOfferAnswerHandler*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>, ::std::function<void()>);

        MCAPI void SetAsSessionError();

        MCAPI void SetError(::webrtc::RTCErrorType, ::std::string);

        MCAPI void SignalCompletion();

        MCAPI bool UpdateChannels();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::webrtc::SdpOfferAnswerHandler*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>, ::std::function<void()>);
        // NOLINTEND
    };

    class SetSessionDescriptionObserverAdapter {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void OnSetDescriptionComplete(::webrtc::RTCError);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftableForSetLocalDescriptionObserverInterface();

        MCAPI static void** $vftableForSetRemoteDescriptionObserverInterface();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool AddIceCandidate(::webrtc::IceCandidateInterface const*);

    MCAPI void
        AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface>, ::std::function<void(::webrtc::RTCError)>);

    MCAPI ::webrtc::AddIceCandidateResult AddIceCandidateInternal(::webrtc::IceCandidateInterface const*);

    MCAPI void AddLocalIceCandidate(::webrtc::JsepIceCandidate const*);

    MCAPI bool AddStream(::webrtc::MediaStreamInterface*);

    MCAPI void AddUpToOneReceivingTransceiverOfType(::cricket::MediaType);

    MCAPI void AllocateSctpSids();

    MCAPI ::webrtc::RTCError
    ApplyLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI void ApplyRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    MCAPI void ApplyRemoteDescriptionUpdateTransceiverState(::webrtc::SdpType);

    MCAPI ::webrtc::RTCErrorOr<
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    AssociateTransceiver(::cricket::ContentSource, ::webrtc::SdpType, uint64, ::cricket::ContentInfo const&, ::cricket::ContentInfo const*, ::cricket::ContentInfo const*);

    MCAPI void ChangeSignalingState(::webrtc::PeerConnectionInterface::SignalingState);

    MCAPI bool CheckIfNegotiationIsNeeded();

    MCAPI void Close();

    MCAPI bool ConfiguredForMedia() const;

    MCAPI void
    CreateAnswer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCAPI ::webrtc::RTCError CreateChannels(::cricket::SessionDescription const&);

    MCAPI void
    CreateOffer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCAPI void DestroyMediaChannels();

    MCAPI void
    DoCreateAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver>);

    MCAPI void
    DoCreateOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver>);

    MCAPI void
        DoSetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCAPI void DoSetRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    MCAPI void EnableSending();

    MCAPI bool ExpectSetLocalDescription(::webrtc::SdpType);

    MCAPI bool ExpectSetRemoteDescription(::webrtc::SdpType);

    MCAPI void FillInMissingRemoteMids(::cricket::SessionDescription*);

    MCAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindAvailableTransceiverToReceive(::cricket::MediaType) const;

    MCAPI ::webrtc::RTCErrorOr<::cricket::ContentInfo const*>
    FindContentInfo(::webrtc::SessionDescriptionInterface const*, ::webrtc::IceCandidateInterface const*);

    MCAPI ::cricket::ContentInfo const*
    FindMediaSectionForTransceiver(::webrtc::RtpTransceiver const*, ::webrtc::SessionDescriptionInterface const*) const;

    MCAPI void
    GenerateMediaDescriptionOptions(::webrtc::SessionDescriptionInterface const*, ::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection, ::std::optional<uint64>*, ::std::optional<uint64>*, ::std::optional<uint64>*, ::cricket::MediaSessionOptions*);

    MCAPI void GenerateNegotiationNeededEvent();

    MCAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForActiveData(::std::string const&) const;

    MCAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForRejectedData(::std::string const&) const;

    MCAPI void
    GetOptionsForAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI void
    GetOptionsForOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI void
    GetOptionsForPlanBAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI void
    GetOptionsForPlanBOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI void
    GetOptionsForUnifiedPlanAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI void
    GetOptionsForUnifiedPlanOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
        GetReceivingTransceiversOfType(::cricket::MediaType);

    MCAPI ::std::string GetSessionErrorMsg();

    MCAPI ::std::optional<::rtc::SSLRole> GuessSslRole() const;

    MCAPI ::webrtc::RTCError HandleLegacyOfferOptions(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCAPI bool HasNewIceCredentials();

    MCAPI void
    Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies&, ::webrtc::ConnectionContext*);

    MCAPI bool IsUnifiedPlan() const;

    MCAPI void OnAudioTrackAdded(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void OnAudioTrackRemoved(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void OnOperationsChainEmpty();

    MCAPI void OnVideoTrackAdded(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void OnVideoTrackRemoved(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCAPI void
    PlanBUpdateSendersAndReceivers(::cricket::ContentInfo const*, ::cricket::AudioContentDescription const*, ::cricket::ContentInfo const*, ::cricket::VideoContentDescription const*);

    MCAPI void PrepareForShutdown();

    MCAPI void
    ProcessRemovalOfRemoteTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>, ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>*, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCAPI ::webrtc::RTCError
    PushdownMediaDescription(::webrtc::SdpType, ::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI ::webrtc::RTCError PushdownTransportDescription(::cricket::ContentSource, ::webrtc::SdpType);

    MCAPI bool
    ReadyToUseRemoteCandidate(::webrtc::IceCandidateInterface const*, ::webrtc::SessionDescriptionInterface const*, bool*);

    MCAPI bool RemoveIceCandidates(::std::vector<::cricket::Candidate> const&);

    MCAPI void RemoveLocalIceCandidates(::std::vector<::cricket::Candidate> const&);

    MCAPI void RemoveRecvDirectionFromReceivingTransceiversOfType(::cricket::MediaType);

    MCAPI void
    RemoveRemoteStreamsIfEmpty(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCAPI void RemoveSenders(::cricket::MediaType);

    MCAPI void RemoveStoppedTransceivers();

    MCAPI void RemoveStream(::webrtc::MediaStreamInterface*);

    MCAPI void RemoveUnusedChannels(::cricket::SessionDescription const*);

    MCAPI ::webrtc::RTCError
    ReplaceRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::SdpType, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>*);

    MCAPI void RestartIce();

    MCAPI ::webrtc::RTCError Rollback(::webrtc::SdpType);

    MCAPI SdpOfferAnswerHandler(::webrtc::PeerConnectionSdpMethods*, ::webrtc::ConnectionContext*);

    MCAPI char const* SessionErrorToString(::webrtc::SdpOfferAnswerHandler::SessionError) const;

    MCAPI void
    SetAssociatedRemoteStreams(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCAPI void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver*);

    MCAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*);

    MCAPI void
        SetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCAPI void
        SetRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>);

    MCAPI void SetRemoteDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*);

    MCAPI void SetRemoteDescriptionPostProcess(bool);

    MCAPI void SetSessionError(::webrtc::SdpOfferAnswerHandler::SessionError, ::std::string const&);

    MCAPI bool ShouldFireNegotiationNeededEvent(uint);

    MCAPI ::webrtc::RTCError
    UpdateDataChannelTransport(::cricket::ContentSource, ::cricket::ContentInfo const&, ::cricket::ContentGroup const*);

    MCAPI void UpdateEndedRemoteMediaStreams();

    MCAPI void UpdateLocalSenders(::std::vector<::cricket::StreamParams> const&, ::cricket::MediaType);

    MCAPI void UpdateNegotiationNeeded();

    MCAPI bool
    UpdatePayloadTypeDemuxingState(::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI void
    UpdateRemoteSendersList(::std::vector<::cricket::StreamParams> const&, bool, ::cricket::MediaType, ::webrtc::StreamCollection*);

    MCAPI ::webrtc::RTCError
    UpdateSessionState(::webrtc::SdpType, ::cricket::ContentSource, ::cricket::SessionDescription const*, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI ::webrtc::RTCError
    UpdateTransceiverChannel(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>, ::cricket::ContentInfo const&, ::cricket::ContentGroup const*);

    MCAPI ::webrtc::RTCError
    UpdateTransceiversAndDataChannels(::cricket::ContentSource, ::webrtc::SessionDescriptionInterface const&, ::webrtc::SessionDescriptionInterface const*, ::webrtc::SessionDescriptionInterface const*, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI bool UseCandidate(::webrtc::IceCandidateInterface const*);

    MCAPI bool UseCandidatesInRemoteDescription();

    MCAPI ::webrtc::RTCError
    ValidateSessionDescription(::webrtc::SessionDescriptionInterface const*, ::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCAPI ::webrtc::DataChannelController* data_channel_controller();

    MCAPI ::std::optional<bool> is_caller() const;

    MCAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams();

    MCAPI ::cricket::MediaEngineInterface* media_engine() const;

    MCAPI ::rtc::Thread* network_thread() const;

    MCAPI ::cricket::PortAllocator* port_allocator();

    MCAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams();

    MCAPI ::webrtc::RtpTransmissionManager* rtp_manager();

    MCAPI ::webrtc::TransceiverList const* transceivers() const;

    MCAPI ::webrtc::TransceiverList* transceivers();

    MCAPI ::webrtc::JsepTransportController* transport_controller_n();

    MCAPI ::webrtc::JsepTransportController const* transport_controller_s() const;

    MCAPI ::webrtc::JsepTransportController* transport_controller_s();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::SdpOfferAnswerHandler>
    Create(::webrtc::PeerConnectionSdpMethods*, ::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies&, ::webrtc::ConnectionContext*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::PeerConnectionSdpMethods*, ::webrtc::ConnectionContext*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
