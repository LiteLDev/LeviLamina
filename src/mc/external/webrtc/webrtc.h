#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/AdapterType.h"
#include "mc/external/webrtc/AV1Profile.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/Priority.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/external/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/ScalabilityMode.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/VP9Profile.h"
#include "mc/external/webrtc/VideoCodecType.h"
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
namespace rtc { class RTCCertificate; }
namespace rtc { class SocketAddress; }
namespace rtc { class StringBuilder; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialParameterInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
namespace webrtc { class JsepSessionDescription; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoFrameBuffer; }
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
    // bitfield representation
    KMaxTemporalStreams = 1 << 2,
};

enum : int {
    KMaxPreferredPixelFormats = 5,
};

enum : int {
    KMaxSimulcastStreams = 3,
};

enum : int {
    // bitfield representation
    KMaxEncoderBuffers = 1 << 3,
};

enum : int {
    KRtpCsrcSize = 15,
};

enum : int {
    KMaxSpatialLayers = 5,
};

// functions
// NOLINTBEGIN
MCAPI bool
AV1IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCAPI char const* AdapterTypeToStatsType(::rtc::AdapterType);

MCAPI void AddAudioAttribute(::std::string const&, ::std::string_view, ::cricket::MediaContentDescription*);

MCAPI void AddFeedbackParameter(::cricket::FeedbackParam const&, ::cricket::Codec*);

MCAPI void AddFeedbackParameters(::cricket::FeedbackParams const&, ::cricket::Codec*);

MCAPI void AddFmtpLine(::cricket::Codec const&, ::std::string*);

MCAPI void AddOrReplaceCodec(::cricket::MediaContentDescription*, ::cricket::Codec const&);

MCAPI void AddPacketizationLine(::cricket::Codec const&, ::std::string*);

MCAPI void AddParameters(::std::map<::std::string, ::std::string> const&, ::cricket::Codec*);

MCAPI void AddRtcpFbLines(::cricket::Codec const&, ::std::string*);

MCAPI void AlignedFree(void*);

MCAPI void* AlignedMalloc(uint64, uint64);

MCAPI char const* CodecTypeToPayloadString(::webrtc::VideoCodecType);

MCAPI ::webrtc::TimeDelta CompactNtpRttToTimeDelta(uint);

MCAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateDefaultTaskQueueFactory(::webrtc::FieldTrialsView const*);

MCAPI ::webrtc::IceCandidateInterface*
CreateIceCandidate(::std::string const&, int, ::std::string const&, ::webrtc::SdpParseError*);

MCAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&);

MCAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&, ::webrtc::SdpParseError*);

MCAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&, ::std::string const&, ::std::unique_ptr<::cricket::SessionDescription>);

MCAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateTaskQueueStdlibFactory();

MCAPI void
CreateTrackWithNoSsrcs(::std::vector<::std::string> const&, ::std::string_view, ::std::vector<::cricket::RidDescription> const&, ::std::vector<::cricket::StreamParams>*);

MCAPI void CreateTracksFromSsrcInfos(
    ::std::vector<::webrtc::SsrcInfo> const&,
    ::std::vector<::std::string> const&,
    ::std::string_view,
    ::std::vector<::cricket::StreamParams>*,
    int
);

MCAPI ::cricket::Codec GetCodecWithPayloadType(::cricket::MediaType, ::std::vector<::cricket::Codec> const&, int);

MCAPI bool GetDtmfCode(char, int*);

MCAPI ::std::string GetLegacyCandidateTypeName(::cricket::Candidate const&);

MCAPI void GetMediaStreamIds(::cricket::ContentInfo const*, ::std::set<::std::string>*);

MCAPI bool GetMinValue(::std::vector<int> const&, int*);

MCAPI bool GetParameter(::std::string const&, ::std::map<::std::string, ::std::string> const&, int*);

MCAPI uint64 GetRightAlign(uint64, uint64);

MCAPI ::std::vector<::std::string const*> GetStatsReferencedIds(::webrtc::RTCStats const&);

MCAPI void
H264GenerateProfileLevelIdForAnswer(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string>*);

MCAPI bool
H264IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCAPI ::std::optional<::std::string> H264ProfileLevelIdToString(::webrtc::H264ProfileLevelId const&);

MCAPI bool HasDuplicateMsidLines(::cricket::SessionDescription*);

MCAPI char const* IceCandidateTypeToStatsType(::cricket::Candidate const&);

MCAPI ::std::string_view IceCandidateTypeToString(::webrtc::IceCandidateType);

MCAPI ::webrtc::RTCError
InvokeSetParametersCallback(::absl::AnyInvocable<void(::webrtc::RTCError) &&>&, ::webrtc::RTCError);

MCAPI bool IsFmtpParam(::std::string_view);

MCAPI bool IsLegalRsidName(::std::string_view);

MCAPI bool IsMandatoryHeaderExtension(::std::string const&);

MCAPI bool IsNewerSequenceNumber(ushort, ushort);

MCAPI bool IsOpenMessage(::rtc::CopyOnWriteBuffer const&);

MCAPI bool IsRtcpPacket(::rtc::ArrayView<uchar const>);

MCAPI bool IsRtpPacket(::rtc::ArrayView<uchar const>);

MCAPI bool IsTokenChar(char);

MCAPI int Leb128Size(uint64);

MCAPI void MaybeCreateStaticPayloadAudioCodecs(::std::vector<int> const&, ::cricket::MediaContentDescription*);

MCAPI bool ParseCandidate(::std::string_view, ::cricket::Candidate*, ::webrtc::SdpParseError*, bool);

MCAPI bool ParseConnectionData(::std::string_view, ::rtc::SocketAddress*, ::webrtc::SdpParseError*);

MCAPI bool ParseDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer const&);

MCAPI bool ParseDataChannelOpenMessage(::rtc::CopyOnWriteBuffer const&, ::std::string*, ::webrtc::DataChannelInit*);

MCAPI void ParseFieldTrial(::std::initializer_list<::webrtc::FieldTrialParameterInterface*>, ::std::string_view);

MCAPI ::std::optional<::webrtc::H264ProfileLevelId> ParseH264ProfileLevelId(char const*);

MCAPI ::webrtc::RTCError
ParseIceServersOrError(::std::vector<::webrtc::PeerConnectionInterface::IceServer> const&, ::std::set<::rtc::SocketAddress>*, ::std::vector<::cricket::RelayServerConfig>*);

MCAPI ushort ParseRtpSequenceNumber(::rtc::ArrayView<uchar const>);

MCAPI uint ParseRtpSsrc(::rtc::ArrayView<uchar const>);

MCAPI bool ParseSctpMaxMessageSize(::std::string_view, int*, ::webrtc::SdpParseError*);

MCAPI bool ParseSctpPort(::std::string_view, int*, ::webrtc::SdpParseError*);

MCAPI ::std::optional<::webrtc::AV1Profile> ParseSdpForAV1Profile(::std::map<::std::string, ::std::string> const&);

MCAPI ::std::optional<::webrtc::H264ProfileLevelId>
ParseSdpForH264ProfileLevelId(::std::map<::std::string, ::std::string> const&);

MCAPI ::std::optional<::webrtc::VP9Profile> ParseSdpForVP9Profile(::std::map<::std::string, ::std::string> const&);

MCAPI ::webrtc::VideoCodecType PayloadStringToCodecType(::std::string const&);

MCAPI ::std::optional<::cricket::Codec> PopWildcardCodec(::std::vector<::cricket::Codec>*);

MCAPI int ResolveHostname(::std::string_view, int, ::std::vector<::rtc::IPAddress>&);

MCAPI ::std::vector<uchar> RtpDescriptorAuthentication(::webrtc::RTPVideoHeader const&);

MCAPI int
RtpHeaderExtensionSize(::rtc::ArrayView<::webrtc::RtpExtensionSize const>, ::webrtc::RtpHeaderExtensionMap const&);

MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionFromSendRecv(bool, bool);

MCAPI bool RtpTransceiverDirectionHasRecv(::webrtc::RtpTransceiverDirection);

MCAPI bool RtpTransceiverDirectionHasSend(::webrtc::RtpTransceiverDirection);

MCAPI ::webrtc::RtpTransceiverDirection
    RtpTransceiverDirectionIntersection(::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection);

MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionReversed(::webrtc::RtpTransceiverDirection);

MCAPI char const* RtpTransceiverDirectionToString(::webrtc::RtpTransceiverDirection);

MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionWithRecvSet(::webrtc::RtpTransceiverDirection, bool);

MCAPI ::absl::AnyInvocable<void() &&>
SafeTask(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag, ::absl::AnyInvocable<void() &&> task);

MCAPI ::std::string_view ScalabilityModeToString(::webrtc::ScalabilityMode);

MCAPI bool SdpDeserialize(::std::string_view, ::webrtc::JsepSessionDescription*, ::webrtc::SdpParseError*);

MCAPI bool SdpDeserializeCandidate(::std::string_view, ::webrtc::JsepIceCandidate*, ::webrtc::SdpParseError*);

MCAPI ::std::string SdpSerialize(::webrtc::JsepSessionDescription const&);

MCAPI ::std::string SdpSerializeCandidate(::cricket::Candidate const&);

MCAPI ::std::string SdpSerializeCandidate(::webrtc::IceCandidateInterface const&);

MCAPI ::std::optional<::webrtc::SdpType> SdpTypeFromString(::std::string const&);

MCAPI char const* SdpTypeToString(::webrtc::SdpType);

MCAPI ::std::optional<::webrtc::AV1Profile> StringToAV1Profile(::std::string_view);

MCAPI ::std::optional<::webrtc::VP9Profile> StringToVP9Profile(::std::string const&);

MCAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
TakeReferencedStats(::webrtc::scoped_refptr<::webrtc::RTCStatsReport>, ::std::vector<::std::string> const&);

MCAPI ::std::optional<::webrtc::RtcpFeedback> ToRtcpFeedback(::cricket::FeedbackParam const&);

MCAPI ::webrtc::RtpCapabilities
ToRtpCapabilities(::std::vector<::cricket::Codec> const&, ::std::vector<::webrtc::RtpExtension> const&);

MCAPI ::webrtc::RtpCodecCapability ToRtpCodecCapability(::cricket::Codec const&);

MCAPI ::std::string_view ToString(::webrtc::RTCErrorType);

MCAPI ::std::string ToString(::webrtc::DataRate);

MCAPI ::std::string ToString(::webrtc::TimeDelta);

MCAPI ::std::string ToString(::webrtc::DataSize);

MCAPI ::std::string ToString(::webrtc::Timestamp);

MCAPI bool UnimplementedRtpParameterHasValue(::webrtc::RtpParameters const&);

MCAPI void UpdateCodec(::cricket::MediaContentDescription*, int, ::std::map<::std::string, ::std::string> const&);

MCAPI void UpdateCodec(::cricket::MediaContentDescription*, int, ::cricket::FeedbackParam const&);

MCAPI void UpdateCodec(int, ::std::string_view, ::cricket::MediaContentDescription*);

MCAPI void UpdateCodec(int, ::std::string_view, int, int, uint64, ::cricket::MediaContentDescription*);

MCAPI void UpdateFromWildcardCodecs(::cricket::MediaContentDescription*);

MCAPI void
UpdateRtpHeaderExtensionPreferencesFromSdpMunging(::cricket::SessionDescription const*, ::webrtc::TransceiverList*);

MCAPI void UpdateVideoCodecPacketization(::cricket::MediaContentDescription*, int, ::std::string_view);

MCAPI bool
VP9IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCAPI bool ValidAlignment(uint64);

MCAPI void WriteDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer*);

MCAPI bool
WriteDataChannelOpenMessage(::std::string const&, ::std::string const&, ::std::optional<::webrtc::Priority>, bool, ::std::optional<int>, ::std::optional<int>, ::rtc::CopyOnWriteBuffer*);

MCAPI void WriteFmtpHeader(int, ::rtc::StringBuilder*);

MCAPI void WriteFmtpParameter(::std::string_view, ::std::string_view, ::rtc::StringBuilder*);

MCAPI bool WriteFmtpParameters(::std::map<::std::string, ::std::string> const&, ::rtc::StringBuilder*);

MCAPI int WriteLeb128(uint64, uchar*);

MCAPI void WritePacketizationHeader(int, ::rtc::StringBuilder*);

MCAPI void WriteRtcpFbHeader(int, ::rtc::StringBuilder*);

MCAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&, nullptr_t);

MCAPI bool operator!=(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, nullptr_t);

MCAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const&, nullptr_t);

MCAPI bool
operator<(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&, ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> const&, ::webrtc::MediaStreamTrackInterface const*);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&, ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&, ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const&, ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const&, ::webrtc::RtpSenderInterface const*);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const&, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> const&);

MCAPI bool operator==(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&, nullptr_t);

MCAPI bool operator==(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, nullptr_t);

MCAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const&, ::webrtc::RtpReceiverInterface const*);

MCAPI bool operator==(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const&, nullptr_t);

MCAPI bool
operator==(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const&);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> kBweTypeHistogram();

MCAPI ::webrtc::DataRate const& kCongestionControllerMinBitrate();

MCAPI double const& kDefaultBitratePriority();

MCAPI ::std::add_lvalue_reference_t<char const[]> kVP9FmtpProfileId();
// NOLINTEND

} // namespace webrtc
