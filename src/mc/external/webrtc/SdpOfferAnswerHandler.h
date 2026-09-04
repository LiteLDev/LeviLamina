#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AddIceCandidateResult.h"
#include "mc/external/webrtc/ContentSource.h"
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/SdpStateProvider.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/external/webrtc/SetRemoteDescriptionObserverInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AudioContentDescription; }
namespace webrtc { class Candidate; }
namespace webrtc { class CodecLookupHelper; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class ContentGroup; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionSdpMethods; }
namespace webrtc { class RTCCertificateGeneratorInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StreamCollection; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { class VideoContentDescription; }
namespace webrtc { struct MediaDescriptionOptions; }
namespace webrtc { struct MediaSessionOptions; }
namespace webrtc { struct StreamParams; }
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
    enum class SessionError : int {
        KNone      = 0,
        KContent   = 1,
        KTransport = 2,
    };

    class ImplicitCreateSessionDescriptionObserver : public ::webrtc::CreateSessionDescriptionObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnk1972e1;
        ::ll::UntypedStorage<8, 16> mUnk8d5e92;
        ::ll::UntypedStorage<8, 8>  mUnkcb15ee;
        ::ll::UntypedStorage<8, 64> mUnk801993;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImplicitCreateSessionDescriptionObserver& operator=(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ImplicitCreateSessionDescriptionObserver() /*override*/;

        virtual void OnSuccess(::webrtc::SessionDescriptionInterface* desc_ptr) /*override*/;

        virtual void OnFailure(::webrtc::RTCError error) /*override*/;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* desc_ptr);

        MCNAPI void $OnFailure(::webrtc::RTCError error);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class LocalIceCredentialsToReplace {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk67736f;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalIceCredentialsToReplace& operator=(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AppendIceCredentialsFromSessionDescription(::webrtc::SessionDescriptionInterface const& desc);

        MCNAPI void ClearIceCredentials();

        MCNAPI bool SatisfiesIceRestart(::webrtc::SessionDescriptionInterface const& local_description) const;
        // NOLINTEND
    };

    class RemoteDescriptionOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk38d8f1;
        ::ll::UntypedStorage<8, 8>  mUnk2e176c;
        ::ll::UntypedStorage<8, 8>  mUnk83a877;
        ::ll::UntypedStorage<8, 8>  mUnk86d150;
        ::ll::UntypedStorage<8, 64> mUnk938da2;
        ::ll::UntypedStorage<8, 48> mUnk557ac8;
        ::ll::UntypedStorage<8, 16> mUnk870953;
        ::ll::UntypedStorage<4, 4>  mUnkc659ff;
        ::ll::UntypedStorage<1, 1>  mUnkbd8877;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoteDescriptionOperation& operator=(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool HaveSessionError();

        MCNAPI void InvalidParam(::std::string message);

        MCNAPI bool MaybeRollback();

        MCNAPI RemoteDescriptionOperation(
            ::webrtc::SdpOfferAnswerHandler*                                         handler,
            ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 desc,
            ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer,
            ::std::function<void()>                                                  operations_chain_callback
        );

        MCNAPI void SetAsSessionError();

        MCNAPI void SetError(::webrtc::RTCErrorType type, ::std::string message);

        MCNAPI void SignalCompletion();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::webrtc::SdpOfferAnswerHandler*                                         handler,
            ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 desc,
            ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer,
            ::std::function<void()>                                                  operations_chain_callback
        );
        // NOLINTEND
    };

    class SetSessionDescriptionObserverAdapter : public ::webrtc::SetLocalDescriptionObserverInterface,
                                                 public ::webrtc::SetRemoteDescriptionObserverInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk609451;
        ::ll::UntypedStorage<8, 8>  mUnkd32ec5;
        // NOLINTEND

    public:
        // prevent constructor by default
        SetSessionDescriptionObserverAdapter& operator=(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError error) /*override*/;

        virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError error) /*override*/;

        virtual ~SetSessionDescriptionObserverAdapter() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void OnSetDescriptionComplete(::webrtc::RTCError error);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSetLocalDescriptionComplete(::webrtc::RTCError error);

        MCNAPI void $OnSetRemoteDescriptionComplete(::webrtc::RTCError error);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForSetLocalDescriptionObserverInterface();

        MCNAPI static void** $vftableForSetRemoteDescriptionObserverInterface();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6fb1a0;
    ::ll::UntypedStorage<8, 8>  mUnk83b177;
    ::ll::UntypedStorage<8, 8>  mUnk8a13be;
    ::ll::UntypedStorage<8, 8>  mUnk47cc47;
    ::ll::UntypedStorage<8, 8>  mUnk5081f0;
    ::ll::UntypedStorage<8, 8>  mUnk3ada8c;
    ::ll::UntypedStorage<8, 8>  mUnkcd2bb1;
    ::ll::UntypedStorage<8, 8>  mUnk735b23;
    ::ll::UntypedStorage<8, 8>  mUnk46d322;
    ::ll::UntypedStorage<4, 4>  mUnkdc8e98;
    ::ll::UntypedStorage<4, 4>  mUnk2e91d1;
    ::ll::UntypedStorage<1, 2>  mUnk9c155c;
    ::ll::UntypedStorage<8, 8>  mUnk4b7776;
    ::ll::UntypedStorage<8, 8>  mUnk5ebabb;
    ::ll::UntypedStorage<8, 24> mUnk4861a7;
    ::ll::UntypedStorage<8, 8>  mUnke52101;
    ::ll::UntypedStorage<8, 32> mUnk3e6a79;
    ::ll::UntypedStorage<8, 24> mUnkfc0de0;
    ::ll::UntypedStorage<8, 16> mUnke6dc0d;
    ::ll::UntypedStorage<8, 8>  mUnk411625;
    ::ll::UntypedStorage<1, 1>  mUnkfcbc5f;
    ::ll::UntypedStorage<1, 1>  mUnk80521a;
    ::ll::UntypedStorage<4, 4>  mUnk59d611;
    ::ll::UntypedStorage<1, 1>  mUnk778248;
    ::ll::UntypedStorage<1, 1>  mUnkc0d07e;
    ::ll::UntypedStorage<1, 1>  mUnk4415fe;
    ::ll::UntypedStorage<8, 8>  mUnk5dcc6c;
    ::ll::UntypedStorage<4, 4>  mUnk8004ed;
    ::ll::UntypedStorage<8, 32> mUnk4a7265;
    ::ll::UntypedStorage<8, 88> mUnka69930;
    ::ll::UntypedStorage<4, 20> mUnk1e4ad8;
    ::ll::UntypedStorage<8, 8>  mUnkaf7ed5;
    ::ll::UntypedStorage<1, 2>  mUnkba7369;
    ::ll::UntypedStorage<1, 1>  mUnk7a1efe;
    ::ll::UntypedStorage<8, 8>  mUnk91844e;
    ::ll::UntypedStorage<1, 1>  mUnk6acd3e;
    ::ll::UntypedStorage<8, 16> mUnk2985b9;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpOfferAnswerHandler& operator=(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SdpOfferAnswerHandler() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const /*override*/;

    virtual bool NeedsIceRestart(::std::string const& content_name) const /*override*/;

    virtual bool IceRestartPending(::std::string const& content_name) const /*override*/;

    virtual ::std::optional<::webrtc::SSLRole> GetDtlsRole(::std::string const& mid) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddIceCandidate(::webrtc::IceCandidate const* ice_candidate);

    MCNAPI void AddIceCandidate(
        ::std::unique_ptr<::webrtc::IceCandidate> candidate,
        ::std::function<void(::webrtc::RTCError)> callback
    );

    MCNAPI ::webrtc::AddIceCandidateResult AddIceCandidateInternal(::webrtc::IceCandidate const* ice_candidate);

    MCNAPI void AddLocalIceCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI bool AddStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI void AddUpToOneReceivingTransceiverOfType(::webrtc::MediaType media_type);

    MCNAPI void AllocateSctpSids();

    MCNAPI ::webrtc::RTCError ApplyLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>        desc,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI void
    ApplyRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation> operation);

    MCNAPI void ApplyRemoteDescriptionUpdateTransceiverState(::webrtc::SdpType sdp_type);

    MCNAPI ::webrtc::RTCErrorOr<
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    AssociateTransceiver(
        ::webrtc::ContentSource      source,
        ::webrtc::SdpType            type,
        uint64                       mline_index,
        ::webrtc::ContentInfo const& content,
        ::webrtc::ContentInfo const* old_local_content,
        ::webrtc::ContentInfo const* old_remote_content
    );

    MCNAPI void ChangeSignalingState(::webrtc::PeerConnectionInterface::SignalingState signaling_state);

    MCNAPI bool CheckIfNegotiationIsNeeded();

    MCNAPI void Close();

    MCNAPI void CreateAnswer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    );

    MCNAPI ::webrtc::RTCError CreateChannels(::webrtc::SessionDescription const& desc);

    MCNAPI void CreateOffer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    );

    MCNAPI void DestroyMediaChannels();

    MCNAPI void DoCreateAnswer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&     options,
        ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer
    );

    MCNAPI void DoCreateOffer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&     options,
        ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer
    );

    MCNAPI void DoSetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                desc,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer
    );

    MCNAPI void
    DoSetRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation> operation);

    MCNAPI void EnableSending();

    MCNAPI void FillInMissingRemoteMids(::webrtc::SessionDescription* new_remote_description);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindAvailableTransceiverToReceive(::webrtc::MediaType media_type) const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::ContentInfo const*>
    FindContentInfo(::webrtc::SessionDescriptionInterface const* description, ::webrtc::IceCandidate const* candidate);

    MCNAPI ::webrtc::ContentInfo const* FindMediaSectionForTransceiver(
        ::webrtc::RtpTransceiver const*              transceiver,
        ::webrtc::SessionDescriptionInterface const* sdesc
    ) const;

    MCNAPI void GenerateMediaDescriptionOptions(
        ::webrtc::SessionDescriptionInterface const* session_desc,
        ::webrtc::RtpTransceiverDirection            audio_direction,
        ::webrtc::RtpTransceiverDirection            video_direction,
        ::std::optional<uint64>*                     audio_index,
        ::std::optional<uint64>*                     video_index,
        ::std::optional<uint64>*                     data_index,
        ::webrtc::MediaSessionOptions*               session_options
    );

    MCNAPI void GenerateNegotiationNeededEvent();

    MCNAPI ::webrtc::MediaDescriptionOptions GetMediaDescriptionOptionsForActiveData(::std::string const& mid) const;

    MCNAPI ::webrtc::MediaDescriptionOptions GetMediaDescriptionOptionsForRejectedData(::std::string const& mid) const;

    MCNAPI void GetOptionsForAnswer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI void GetOptionsForOffer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI void GetOptionsForPlanBAnswer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI void GetOptionsForPlanBOffer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI void GetOptionsForUnifiedPlanAnswer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI void GetOptionsForUnifiedPlanOffer(
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options,
        ::webrtc::MediaSessionOptions*                                  session_options
    );

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    GetReceivingTransceiversOfType(::webrtc::MediaType media_type);

    MCNAPI ::std::string GetSessionErrorMsg();

    MCNAPI ::std::optional<::webrtc::SSLRole> GuessSslRole() const;

    MCNAPI ::webrtc::RTCError
    HandleLegacyOfferOptions(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI void Initialize(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&    configuration,
        ::std::unique_ptr<::webrtc::RTCCertificateGeneratorInterface> cert_generator,
        ::std::unique_ptr<::webrtc::VideoBitrateAllocatorFactory>     video_bitrate_allocator_factory,
        ::webrtc::ConnectionContext*                                  context,
        ::webrtc::CodecLookupHelper*                                  codec_lookup_helper
    );

    MCNAPI void PlanBUpdateSendersAndReceivers(
        ::webrtc::ContentInfo const*             audio_content,
        ::webrtc::AudioContentDescription const* audio_desc,
        ::webrtc::ContentInfo const*             video_content,
        ::webrtc::VideoContentDescription const* video_desc
    );

    MCNAPI void PrepareForShutdown();

    MCNAPI void ProcessRemovalOfRemoteTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>*                   remove_list,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*                      removed_streams
    );

    MCNAPI ::webrtc::RTCError PushdownMediaDescription(
        ::webrtc::SdpType                                               type,
        ::webrtc::ContentSource                                         source,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI ::webrtc::RTCError PushdownTransportDescription(::webrtc::ContentSource source, ::webrtc::SdpType type);

    MCNAPI bool ReadyToUseRemoteCandidate(
        ::webrtc::IceCandidate const*                candidate,
        ::webrtc::SessionDescriptionInterface const* remote_desc,
        bool*                                        valid
    );

    MCNAPI bool RemoveIceCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI bool RemoveIceCandidates(::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI void RemoveLocalIceCandidates(::std::string_view mid, ::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI void RemoveRecvDirectionFromReceivingTransceiversOfType(::webrtc::MediaType media_type);

    MCNAPI void RemoveRemoteStreamsIfEmpty(
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& remote_streams,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*       removed_streams
    );

    MCNAPI void RemoveSenders(::webrtc::MediaType media_type);

    MCNAPI void RemoveStoppedTransceivers();

    MCNAPI void RemoveStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI void RemoveUnusedChannels(::webrtc::SessionDescription const* desc);

    MCNAPI ::webrtc::RTCError ReplaceRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>  desc,
        ::webrtc::SdpType                                         sdp_type,
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>* replaced_description
    );

    MCNAPI void ReportInitialSdpMunging(bool had_local_description, ::webrtc::SdpType type);

    MCNAPI void RestartIce();

    MCNAPI ::webrtc::RTCError Rollback(::webrtc::SdpType desc_type);

    MCNAPI SdpOfferAnswerHandler(::webrtc::PeerConnectionSdpMethods* pc, ::webrtc::ConnectionContext* context);

    MCNAPI void SetAssociatedRemoteStreams(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>                  receiver,
        ::std::vector<::std::string> const&                                     stream_ids,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* added_streams,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* removed_streams
    );

    MCNAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer);

    MCNAPI void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void SetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                desc,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer
    );

    MCNAPI void SetLocalDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    );

    MCNAPI void SetRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 desc,
        ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer
    );

    MCNAPI void SetRemoteDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    );

    MCNAPI bool ShouldFireNegotiationNeededEvent(uint event_id);

    MCNAPI ::webrtc::RTCError UpdateDataChannelTransport(
        ::webrtc::ContentSource       source,
        ::webrtc::ContentInfo const&  content,
        ::webrtc::ContentGroup const* bundle_group
    );

    MCNAPI void UpdateEndedRemoteMediaStreams();

    MCNAPI void
    UpdateLocalSenders(::std::vector<::webrtc::StreamParams> const& streams, ::webrtc::MediaType media_type);

    MCNAPI void UpdateNegotiationNeeded();

    MCNAPI bool UpdatePayloadTypeDemuxingState(
        ::webrtc::ContentSource                                         source,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI void UpdateRemoteSendersList(
        ::std::vector<::webrtc::StreamParams> const& streams,
        bool                                         default_sender_needed,
        ::webrtc::MediaType                          media_type,
        ::webrtc::StreamCollection*                  new_streams
    );

    MCNAPI ::webrtc::RTCError UpdateSessionState(
        ::webrtc::SdpType                                               type,
        ::webrtc::ContentSource                                         source,
        ::webrtc::SessionDescription const*                             description,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI ::webrtc::RTCError UpdateTransceiverChannel(
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver,
        ::webrtc::ContentInfo const&                                                                 content,
        ::webrtc::ContentGroup const*                                                                bundle_group
    );

    MCNAPI ::webrtc::RTCError UpdateTransceiversAndDataChannels(
        ::webrtc::ContentSource                                         source,
        ::webrtc::SessionDescriptionInterface const&                    new_session,
        ::webrtc::SessionDescriptionInterface const*                    old_local_description,
        ::webrtc::SessionDescriptionInterface const*                    old_remote_description,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI bool UseCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI bool UseCandidatesInRemoteDescription();

    MCNAPI ::webrtc::RTCError ValidateSessionDescription(
        ::webrtc::SessionDescriptionInterface const*                    sdesc,
        ::webrtc::ContentSource                                         source,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams();

    MCNAPI ::webrtc::TransceiverList* transceivers();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::SdpOfferAnswerHandler> Create(
        ::webrtc::PeerConnectionSdpMethods*                           pc,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&    configuration,
        ::std::unique_ptr<::webrtc::RTCCertificateGeneratorInterface> cert_generator,
        ::std::unique_ptr<::webrtc::VideoBitrateAllocatorFactory>     video_bitrate_allocator_factory,
        ::webrtc::ConnectionContext*                                  context,
        ::webrtc::CodecLookupHelper*                                  codec_lookup_helper
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionSdpMethods* pc, ::webrtc::ConnectionContext* context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::PeerConnectionInterface::SignalingState $signaling_state() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_remote_description() const;

    MCNAPI bool $NeedsIceRestart(::std::string const& content_name) const;

    MCNAPI bool $IceRestartPending(::std::string const& content_name) const;

    MCNAPI ::std::optional<::webrtc::SSLRole> $GetDtlsRole(::std::string const& mid) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
