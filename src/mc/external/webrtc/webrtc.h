#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/AdapterType.h"
#include "mc/external/rtc/RTCCertificate.h"
#include "mc/external/webrtc/AV1Profile.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/MediaStreamTrackInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PendingTaskSafetyFlag.h"
#include "mc/external/webrtc/Priority.h"
#include "mc/external/webrtc/RTCErrorDetailType.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpReceiverInterface.h"
#include "mc/external/webrtc/RtpReceiverInternal.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderInterface.h"
#include "mc/external/webrtc/RtpSenderInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiver.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/ScalabilityMode.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/VP9Profile.h"
#include "mc/external/webrtc/VideoCodecType.h"
#include "mc/external/webrtc/VideoFrameBuffer.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class ContentInfo; }
namespace cricket { class FeedbackParam; }
namespace cricket { class FeedbackParams; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class SessionDescription; }
namespace cricket { struct Codec; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct RidDescription; }
namespace cricket { struct StreamParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
namespace rtc { class StringBuilder; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialParameterInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
namespace webrtc { class JsepSessionDescription; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class TransceiverList; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct H264ProfileLevelId; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct RtcpFeedback; }
namespace webrtc { struct RtpCapabilities; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpParameters; }
namespace webrtc { struct SdpParseError; }
namespace webrtc { struct SsrcInfo; }
// clang-format on

namespace webrtc {
// inner types
enum : int {
    KMaxEncoderBuffers = 8,
};

enum : int {
    KMaxPreferredPixelFormats = 5,
};

enum : int {
    KMaxSimulcastStreams = 3,
};

enum : int {
    KMaxSpatialLayers = 5,
};

enum : int {
    KMaxTemporalStreams = 4,
};

enum : int {
    KRtpCsrcSize = 15,
};

// functions
// NOLINTBEGIN
MCNAPI bool AV1IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI char const* AdapterTypeToStatsType(::rtc::AdapterType type);

MCNAPI void
AddAudioAttribute(::std::string const& name, ::std::string_view value, ::cricket::MediaContentDescription* desc);

MCNAPI void AddFeedbackParameter(::cricket::FeedbackParam const& feedback_param, ::cricket::Codec* codec);

MCNAPI void AddFeedbackParameters(::cricket::FeedbackParams const& feedback_params, ::cricket::Codec* codec);

MCNAPI void AddFmtpLine(::cricket::Codec const& codec, ::std::string* message);

MCNAPI void AddOrReplaceCodec(::cricket::MediaContentDescription* content_desc, ::cricket::Codec const& codec);

MCNAPI void AddPacketizationLine(::cricket::Codec const& codec, ::std::string* message);

MCNAPI void AddParameters(::std::map<::std::string, ::std::string> const& parameters, ::cricket::Codec* codec);

MCNAPI void AddRtcpFbLines(::cricket::Codec const& codec, ::std::string* message);

MCNAPI void AlignedFree(void* mem_block);

MCNAPI void* AlignedMalloc(uint64 size, uint64 alignment);

MCNAPI char const* CodecTypeToPayloadString(::webrtc::VideoCodecType type);

MCNAPI ::webrtc::TimeDelta CompactNtpRttToTimeDelta(uint compact_ntp_interval);

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory>
CreateDefaultTaskQueueFactory(::webrtc::FieldTrialsView const* field_trials);

MCNAPI ::webrtc::IceCandidateInterface* CreateIceCandidate(
    ::std::string const&     sdp_mid,
    int                      sdp_mline_index,
    ::std::string const&     sdp,
    ::webrtc::SdpParseError* error
);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType type, ::std::string const& sdp);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType type, ::std::string const& sdp, ::webrtc::SdpParseError* error_out);

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateTaskQueueStdlibFactory();

MCNAPI void CreateTrackWithNoSsrcs(
    ::std::vector<::std::string> const&             msid_stream_ids,
    ::std::string_view                              msid_track_id,
    ::std::vector<::cricket::RidDescription> const& rids,
    ::std::vector<::cricket::StreamParams>*         tracks
);

MCNAPI void CreateTracksFromSsrcInfos(
    ::std::vector<::webrtc::SsrcInfo> const& ssrc_infos,
    ::std::vector<::std::string> const&      msid_stream_ids,
    ::std::string_view                       msid_track_id,
    ::std::vector<::cricket::StreamParams>*  tracks,
    int                                      msid_signaling
);

MCNAPI ::cricket::Codec
GetCodecWithPayloadType(::cricket::MediaType type, ::std::vector<::cricket::Codec> const& codecs, int payload_type);

MCNAPI bool GetDtmfCode(char tone, int* code);

MCNAPI ::std::string GetLegacyCandidateTypeName(::cricket::Candidate const& c);

MCNAPI void GetMediaStreamIds(::cricket::ContentInfo const* content, ::std::set<::std::string>* labels);

MCNAPI bool GetMinValue(::std::vector<int> const& values, int* value);

MCNAPI bool GetParameter(::std::string const& name, ::std::map<::std::string, ::std::string> const& params, int* value);

MCNAPI uint64 GetRightAlign(uint64 start_pos, uint64 alignment);

MCNAPI ::std::vector<::std::string const*> GetStatsReferencedIds(::webrtc::RTCStats const& stats);

MCNAPI void H264GenerateProfileLevelIdForAnswer(
    ::std::map<::std::string, ::std::string> const& local_supported_params,
    ::std::map<::std::string, ::std::string> const& remote_offered_params,
    ::std::map<::std::string, ::std::string>*       answer_params
);

MCNAPI bool H264IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI ::std::optional<::std::string> H264ProfileLevelIdToString(::webrtc::H264ProfileLevelId const& profile_level_id);

MCNAPI bool HasDuplicateMsidLines(::cricket::SessionDescription* desc);

MCNAPI char const* IceCandidateTypeToStatsType(::cricket::Candidate const& candidate);

MCNAPI ::std::string_view IceCandidateTypeToString(::webrtc::IceCandidateType type);

MCNAPI ::webrtc::RTCError
InvokeSetParametersCallback(::absl::AnyInvocable<void(::webrtc::RTCError) &&>& callback, ::webrtc::RTCError error);

MCNAPI bool IsFmtpParam(::std::string_view name);

MCNAPI bool IsLegalRsidName(::std::string_view name);

MCNAPI bool IsMandatoryHeaderExtension(::std::string const& uri);

MCNAPI bool IsNewerSequenceNumber(ushort sequence_number, ushort prev_sequence_number);

MCNAPI bool IsOpenMessage(::rtc::CopyOnWriteBuffer const& payload);

MCNAPI bool IsRtcpPacket(::rtc::ArrayView<uchar const> packet);

MCNAPI bool IsRtpPacket(::rtc::ArrayView<uchar const> packet);

MCNAPI bool IsTokenChar(char ch);

MCNAPI int Leb128Size(uint64 value);

MCNAPI void
MaybeCreateStaticPayloadAudioCodecs(::std::vector<int> const& fmts, ::cricket::MediaContentDescription* media_desc);

MCNAPI bool ParseCandidate(
    ::std::string_view       message,
    ::cricket::Candidate*    candidate,
    ::webrtc::SdpParseError* error,
    bool                     is_raw
);

MCNAPI bool ParseConnectionData(::std::string_view line, ::rtc::SocketAddress* addr, ::webrtc::SdpParseError* error);

MCNAPI bool ParseDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer const& payload);

MCNAPI bool ParseDataChannelOpenMessage(
    ::rtc::CopyOnWriteBuffer const& payload,
    ::std::string*                  label,
    ::webrtc::DataChannelInit*      config
);

MCNAPI void ParseFieldTrial(
    ::std::initializer_list<::webrtc::FieldTrialParameterInterface*> fields,
    ::std::string_view                                               trial_string
);

MCNAPI ::std::optional<::webrtc::H264ProfileLevelId> ParseH264ProfileLevelId(char const* str);

MCNAPI ::webrtc::RTCError ParseIceServersOrError(
    ::std::vector<::webrtc::PeerConnectionInterface::IceServer> const& servers,
    ::std::set<::rtc::SocketAddress>*                                  stun_servers,
    ::std::vector<::cricket::RelayServerConfig>*                       turn_servers
);

MCNAPI ushort ParseRtpSequenceNumber(::rtc::ArrayView<uchar const> rtp_packet);

MCNAPI uint ParseRtpSsrc(::rtc::ArrayView<uchar const> rtp_packet);

MCNAPI bool ParseSctpMaxMessageSize(::std::string_view line, int* max_message_size, ::webrtc::SdpParseError* error);

MCNAPI bool ParseSctpPort(::std::string_view line, int* sctp_port, ::webrtc::SdpParseError* error);

MCNAPI ::std::optional<::webrtc::AV1Profile>
ParseSdpForAV1Profile(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::std::optional<::webrtc::H264ProfileLevelId>
ParseSdpForH264ProfileLevelId(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::std::optional<::webrtc::VP9Profile>
ParseSdpForVP9Profile(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::webrtc::VideoCodecType PayloadStringToCodecType(::std::string const& name);

MCNAPI ::std::optional<::cricket::Codec> PopWildcardCodec(::std::vector<::cricket::Codec>* codecs);

MCNAPI int ResolveHostname(::std::string_view hostname, int family, ::std::vector<::rtc::IPAddress>& addresses);

MCNAPI ::std::vector<uchar> RtpDescriptorAuthentication(::webrtc::RTPVideoHeader const& rtp_video_header);

MCNAPI int RtpHeaderExtensionSize(
    ::rtc::ArrayView<::webrtc::RtpExtensionSize const> extensions,
    ::webrtc::RtpHeaderExtensionMap const&             registered_extensions
);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionFromSendRecv(bool send, bool recv);

MCNAPI bool RtpTransceiverDirectionHasRecv(::webrtc::RtpTransceiverDirection direction);

MCNAPI bool RtpTransceiverDirectionHasSend(::webrtc::RtpTransceiverDirection direction);

MCNAPI ::webrtc::RtpTransceiverDirection
RtpTransceiverDirectionIntersection(::webrtc::RtpTransceiverDirection lhs, ::webrtc::RtpTransceiverDirection rhs);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionReversed(::webrtc::RtpTransceiverDirection direction);

MCNAPI char const* RtpTransceiverDirectionToString(::webrtc::RtpTransceiverDirection direction);

MCNAPI ::webrtc::RtpTransceiverDirection
RtpTransceiverDirectionWithRecvSet(::webrtc::RtpTransceiverDirection direction, bool recv);

MCNAPI ::absl::AnyInvocable<void() &&>
SafeTask(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag, ::absl::AnyInvocable<void() &&> task);

MCNAPI ::std::string_view ScalabilityModeToString(::webrtc::ScalabilityMode scalability_mode);

MCNAPI bool
SdpDeserialize(::std::string_view message, ::webrtc::JsepSessionDescription* jdesc, ::webrtc::SdpParseError* error);

MCNAPI bool SdpDeserializeCandidate(
    ::std::string_view          message,
    ::webrtc::JsepIceCandidate* jcandidate,
    ::webrtc::SdpParseError*    error
);

MCNAPI ::std::string SdpSerialize(::webrtc::JsepSessionDescription const& jdesc);

MCNAPI ::std::string SdpSerializeCandidate(::cricket::Candidate const& candidate);

MCNAPI ::std::string SdpSerializeCandidate(::webrtc::IceCandidateInterface const& candidate);

MCNAPI ::std::optional<::webrtc::SdpType> SdpTypeFromString(::std::string const& type_str);

MCNAPI char const* SdpTypeToString(::webrtc::SdpType type);

MCNAPI ::std::optional<::webrtc::AV1Profile> StringToAV1Profile(::std::string_view str);

MCNAPI ::std::optional<::webrtc::VP9Profile> StringToVP9Profile(::std::string const& str);

MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
TakeReferencedStats(::webrtc::scoped_refptr<::webrtc::RTCStatsReport> report, ::std::vector<::std::string> const& ids);

MCNAPI ::std::optional<::webrtc::RtcpFeedback> ToRtcpFeedback(::cricket::FeedbackParam const& cricket_feedback);

MCNAPI ::webrtc::RtpCapabilities ToRtpCapabilities(
    ::std::vector<::cricket::Codec> const&       cricket_codecs,
    ::std::vector<::webrtc::RtpExtension> const& cricket_extensions
);

MCNAPI ::webrtc::RtpCodecCapability ToRtpCodecCapability(::cricket::Codec const& cricket_codec);

MCNAPI ::std::string_view ToString(::webrtc::RTCErrorDetailType error);

MCNAPI ::std::string_view ToString(::webrtc::RTCErrorType error);

MCNAPI ::std::string ToString(::webrtc::DataRate value);

MCNAPI ::std::string ToString(::webrtc::DataSize value);

MCNAPI ::std::string ToString(::webrtc::TimeDelta value);

MCNAPI ::std::string ToString(::webrtc::Timestamp);

MCNAPI bool UnimplementedRtpParameterHasValue(::webrtc::RtpParameters const& parameters);

MCNAPI void UpdateCodec(
    ::cricket::MediaContentDescription* content_desc,
    int                                 payload_type,
    ::cricket::FeedbackParam const&     feedback_param
);

MCNAPI void UpdateCodec(
    ::cricket::MediaContentDescription*             content_desc,
    int                                             payload_type,
    ::std::map<::std::string, ::std::string> const& parameters
);

MCNAPI void UpdateCodec(int payload_type, ::std::string_view name, ::cricket::MediaContentDescription* desc);

MCNAPI void UpdateCodec(
    int                                 payload_type,
    ::std::string_view                  name,
    int                                 clockrate,
    int                                 bitrate,
    uint64                              channels,
    ::cricket::MediaContentDescription* desc
);

MCNAPI void UpdateFromWildcardCodecs(::cricket::MediaContentDescription* desc);

MCNAPI void UpdateRtpHeaderExtensionPreferencesFromSdpMunging(
    ::cricket::SessionDescription const* description,
    ::webrtc::TransceiverList*           transceivers
);

MCNAPI void UpdateVideoCodecPacketization(
    ::cricket::MediaContentDescription* desc,
    int                                 payload_type,
    ::std::string_view                  packetization
);

MCNAPI bool VP9IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI bool ValidAlignment(uint64 alignment);

MCNAPI void WriteDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer* payload);

MCNAPI bool WriteDataChannelOpenMessage(
    ::std::string const&                label,
    ::std::string const&                protocol,
    ::std::optional<::webrtc::Priority> opt_priority,
    bool                                ordered,
    ::std::optional<int>                max_retransmits,
    ::std::optional<int>                max_retransmit_time,
    ::rtc::CopyOnWriteBuffer*           payload
);

MCNAPI void WriteFmtpHeader(int payload_type, ::rtc::StringBuilder* os);

MCNAPI void
WriteFmtpParameter(::std::string_view parameter_name, ::std::string_view parameter_value, ::rtc::StringBuilder* os);

MCNAPI bool WriteFmtpParameters(::std::map<::std::string, ::std::string> const& parameters, ::rtc::StringBuilder* os);

MCNAPI int WriteLeb128(uint64 value, uchar* buffer);

MCNAPI void WritePacketizationHeader(int payload_type, ::rtc::StringBuilder* os);

MCNAPI void WriteRtcpFbHeader(int payload_type, ::rtc::StringBuilder* os);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const& a, nullptr_t);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& a, nullptr_t);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const& a, nullptr_t);

MCNAPI bool operator<(
    ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const& a,
    ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const& b
);

MCNAPI bool operator==(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const& a, nullptr_t);

MCNAPI bool operator==(::webrtc::scoped_refptr<::rtc::RTCCertificate> const& a, nullptr_t);

MCNAPI bool operator==(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const& a, nullptr_t);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const& a,
    ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> const&                                        b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const& a,
    ::webrtc::RtpReceiverInterface const*                                                                 b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const& a,
    ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&                                      b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const& a,
    ::webrtc::RtpSenderInterface const*                                                               b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const& a,
    ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const& b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> const& a,
    ::webrtc::MediaStreamTrackInterface const*                          b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::rtc::RTCCertificate> const& a,
    ::webrtc::scoped_refptr<::rtc::RTCCertificate> const& b
);

MCNAPI bool operator==(
    ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const& a,
    ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const& b
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> kBweTypeHistogram();

MCNAPI ::webrtc::DataRate const& kCongestionControllerMinBitrate();

MCNAPI double const& kDefaultBitratePriority();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVP9FmtpProfileId();
// NOLINTEND

} // namespace webrtc
