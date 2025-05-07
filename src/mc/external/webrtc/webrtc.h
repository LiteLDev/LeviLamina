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
    KMaxEncoderBuffers = 1 << 3,
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
    // bitfield representation
    KMaxTemporalStreams = 1 << 2,
};

enum : int {
    KRtpCsrcSize = 15,
};

// functions
// NOLINTBEGIN
MCNAPI bool
AV1IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCNAPI char const* AdapterTypeToStatsType(::rtc::AdapterType);

MCNAPI void AddAudioAttribute(::std::string const&, ::std::string_view, ::cricket::MediaContentDescription*);

MCNAPI void AddFeedbackParameter(::cricket::FeedbackParam const&, ::cricket::Codec*);

MCNAPI void AddFeedbackParameters(::cricket::FeedbackParams const&, ::cricket::Codec*);

MCNAPI void AddFmtpLine(::cricket::Codec const&, ::std::string*);

MCNAPI void AddOrReplaceCodec(::cricket::MediaContentDescription*, ::cricket::Codec const&);

MCNAPI void AddPacketizationLine(::cricket::Codec const&, ::std::string*);

MCNAPI void AddParameters(::std::map<::std::string, ::std::string> const&, ::cricket::Codec*);

MCNAPI void AddRtcpFbLines(::cricket::Codec const&, ::std::string*);

MCNAPI void AlignedFree(void*);

MCNAPI void* AlignedMalloc(uint64, uint64);

MCNAPI char const* CodecTypeToPayloadString(::webrtc::VideoCodecType);

MCNAPI ::webrtc::TimeDelta CompactNtpRttToTimeDelta(uint);

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateDefaultTaskQueueFactory(::webrtc::FieldTrialsView const*);

MCNAPI ::webrtc::IceCandidateInterface*
CreateIceCandidate(::std::string const&, int, ::std::string const&, ::webrtc::SdpParseError*);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&, ::webrtc::SdpParseError*);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, ::std::string const&, ::std::string const&, ::std::unique_ptr<::cricket::SessionDescription>);

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateTaskQueueStdlibFactory();

MCNAPI void
CreateTrackWithNoSsrcs(::std::vector<::std::string> const&, ::std::string_view, ::std::vector<::cricket::RidDescription> const&, ::std::vector<::cricket::StreamParams>*);

MCNAPI void CreateTracksFromSsrcInfos(
    ::std::vector<::webrtc::SsrcInfo> const&,
    ::std::vector<::std::string> const&,
    ::std::string_view,
    ::std::vector<::cricket::StreamParams>*,
    int
);

MCNAPI ::cricket::Codec GetCodecWithPayloadType(::cricket::MediaType, ::std::vector<::cricket::Codec> const&, int);

MCNAPI bool GetDtmfCode(char, int*);

MCNAPI ::std::string GetLegacyCandidateTypeName(::cricket::Candidate const&);

MCNAPI void GetMediaStreamIds(::cricket::ContentInfo const*, ::std::set<::std::string>*);

MCNAPI bool GetMinValue(::std::vector<int> const&, int*);

MCNAPI bool GetParameter(::std::string const&, ::std::map<::std::string, ::std::string> const&, int*);

MCNAPI uint64 GetRightAlign(uint64, uint64);

MCNAPI ::std::vector<::std::string const*> GetStatsReferencedIds(::webrtc::RTCStats const&);

MCNAPI void
H264GenerateProfileLevelIdForAnswer(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string>*);

MCNAPI bool
H264IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCNAPI ::std::optional<::std::string> H264ProfileLevelIdToString(::webrtc::H264ProfileLevelId const&);

MCNAPI bool HasDuplicateMsidLines(::cricket::SessionDescription*);

MCNAPI char const* IceCandidateTypeToStatsType(::cricket::Candidate const&);

MCNAPI ::std::string_view IceCandidateTypeToString(::webrtc::IceCandidateType);

MCNAPI ::webrtc::RTCError
InvokeSetParametersCallback(::absl::AnyInvocable<void(::webrtc::RTCError) &&>&, ::webrtc::RTCError);

MCNAPI bool IsFmtpParam(::std::string_view);

MCNAPI bool IsLegalRsidName(::std::string_view);

MCNAPI bool IsMandatoryHeaderExtension(::std::string const&);

MCNAPI bool IsNewerSequenceNumber(ushort, ushort);

MCNAPI bool IsOpenMessage(::rtc::CopyOnWriteBuffer const&);

MCNAPI bool IsRtcpPacket(::rtc::ArrayView<uchar const>);

MCNAPI bool IsRtpPacket(::rtc::ArrayView<uchar const>);

MCNAPI bool IsTokenChar(char);

MCNAPI int Leb128Size(uint64);

MCNAPI void MaybeCreateStaticPayloadAudioCodecs(::std::vector<int> const&, ::cricket::MediaContentDescription*);

MCNAPI bool ParseCandidate(::std::string_view, ::cricket::Candidate*, ::webrtc::SdpParseError*, bool);

MCNAPI bool ParseConnectionData(::std::string_view, ::rtc::SocketAddress*, ::webrtc::SdpParseError*);

MCNAPI bool ParseDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer const&);

MCNAPI bool ParseDataChannelOpenMessage(::rtc::CopyOnWriteBuffer const&, ::std::string*, ::webrtc::DataChannelInit*);

MCNAPI void ParseFieldTrial(::std::initializer_list<::webrtc::FieldTrialParameterInterface*>, ::std::string_view);

MCNAPI ::std::optional<::webrtc::H264ProfileLevelId> ParseH264ProfileLevelId(char const*);

MCNAPI ::webrtc::RTCError
ParseIceServersOrError(::std::vector<::webrtc::PeerConnectionInterface::IceServer> const&, ::std::set<::rtc::SocketAddress>*, ::std::vector<::cricket::RelayServerConfig>*);

MCNAPI ushort ParseRtpSequenceNumber(::rtc::ArrayView<uchar const>);

MCNAPI uint ParseRtpSsrc(::rtc::ArrayView<uchar const>);

MCNAPI bool ParseSctpMaxMessageSize(::std::string_view, int*, ::webrtc::SdpParseError*);

MCNAPI bool ParseSctpPort(::std::string_view, int*, ::webrtc::SdpParseError*);

MCNAPI ::std::optional<::webrtc::AV1Profile> ParseSdpForAV1Profile(::std::map<::std::string, ::std::string> const&);

MCNAPI ::std::optional<::webrtc::H264ProfileLevelId>
ParseSdpForH264ProfileLevelId(::std::map<::std::string, ::std::string> const&);

MCNAPI ::std::optional<::webrtc::VP9Profile> ParseSdpForVP9Profile(::std::map<::std::string, ::std::string> const&);

MCNAPI ::webrtc::VideoCodecType PayloadStringToCodecType(::std::string const&);

MCNAPI ::std::optional<::cricket::Codec> PopWildcardCodec(::std::vector<::cricket::Codec>*);

MCNAPI int ResolveHostname(::std::string_view, int, ::std::vector<::rtc::IPAddress>&);

MCNAPI ::std::vector<uchar> RtpDescriptorAuthentication(::webrtc::RTPVideoHeader const&);

MCNAPI int
RtpHeaderExtensionSize(::rtc::ArrayView<::webrtc::RtpExtensionSize const>, ::webrtc::RtpHeaderExtensionMap const&);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionFromSendRecv(bool, bool);

MCNAPI bool RtpTransceiverDirectionHasRecv(::webrtc::RtpTransceiverDirection);

MCNAPI bool RtpTransceiverDirectionHasSend(::webrtc::RtpTransceiverDirection);

MCNAPI ::webrtc::RtpTransceiverDirection
    RtpTransceiverDirectionIntersection(::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionReversed(::webrtc::RtpTransceiverDirection);

MCNAPI char const* RtpTransceiverDirectionToString(::webrtc::RtpTransceiverDirection);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionWithRecvSet(::webrtc::RtpTransceiverDirection, bool);

MCNAPI ::absl::AnyInvocable<void() &&>
SafeTask(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag, ::absl::AnyInvocable<void() &&> task);

MCNAPI ::std::string_view ScalabilityModeToString(::webrtc::ScalabilityMode);

MCNAPI bool SdpDeserialize(::std::string_view, ::webrtc::JsepSessionDescription*, ::webrtc::SdpParseError*);

MCNAPI bool SdpDeserializeCandidate(::std::string_view, ::webrtc::JsepIceCandidate*, ::webrtc::SdpParseError*);

MCNAPI ::std::string SdpSerialize(::webrtc::JsepSessionDescription const&);

MCNAPI ::std::string SdpSerializeCandidate(::cricket::Candidate const&);

MCNAPI ::std::string SdpSerializeCandidate(::webrtc::IceCandidateInterface const&);

MCNAPI ::std::optional<::webrtc::SdpType> SdpTypeFromString(::std::string const&);

MCNAPI char const* SdpTypeToString(::webrtc::SdpType);

MCNAPI ::std::optional<::webrtc::AV1Profile> StringToAV1Profile(::std::string_view);

MCNAPI ::std::optional<::webrtc::VP9Profile> StringToVP9Profile(::std::string const&);

MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
TakeReferencedStats(::webrtc::scoped_refptr<::webrtc::RTCStatsReport>, ::std::vector<::std::string> const&);

MCNAPI ::std::optional<::webrtc::RtcpFeedback> ToRtcpFeedback(::cricket::FeedbackParam const&);

MCNAPI ::webrtc::RtpCapabilities
ToRtpCapabilities(::std::vector<::cricket::Codec> const&, ::std::vector<::webrtc::RtpExtension> const&);

MCNAPI ::webrtc::RtpCodecCapability ToRtpCodecCapability(::cricket::Codec const&);

MCNAPI ::std::string_view ToString(::webrtc::RTCErrorType);

MCNAPI ::std::string ToString(::webrtc::DataRate);

MCNAPI ::std::string ToString(::webrtc::TimeDelta);

MCNAPI ::std::string ToString(::webrtc::DataSize);

MCNAPI ::std::string ToString(::webrtc::Timestamp);

MCNAPI bool UnimplementedRtpParameterHasValue(::webrtc::RtpParameters const&);

MCNAPI void UpdateCodec(::cricket::MediaContentDescription*, int, ::std::map<::std::string, ::std::string> const&);

MCNAPI void UpdateCodec(::cricket::MediaContentDescription*, int, ::cricket::FeedbackParam const&);

MCNAPI void UpdateCodec(int, ::std::string_view, ::cricket::MediaContentDescription*);

MCNAPI void UpdateCodec(int, ::std::string_view, int, int, uint64, ::cricket::MediaContentDescription*);

MCNAPI void UpdateFromWildcardCodecs(::cricket::MediaContentDescription*);

MCNAPI void
UpdateRtpHeaderExtensionPreferencesFromSdpMunging(::cricket::SessionDescription const*, ::webrtc::TransceiverList*);

MCNAPI void UpdateVideoCodecPacketization(::cricket::MediaContentDescription*, int, ::std::string_view);

MCNAPI bool
VP9IsSameProfile(::std::map<::std::string, ::std::string> const&, ::std::map<::std::string, ::std::string> const&);

MCNAPI bool ValidAlignment(uint64);

MCNAPI void WriteDataChannelOpenAckMessage(::rtc::CopyOnWriteBuffer*);

MCNAPI bool
WriteDataChannelOpenMessage(::std::string const&, ::std::string const&, ::std::optional<::webrtc::Priority>, bool, ::std::optional<int>, ::std::optional<int>, ::rtc::CopyOnWriteBuffer*);

MCNAPI void WriteFmtpHeader(int, ::rtc::StringBuilder*);

MCNAPI void WriteFmtpParameter(::std::string_view, ::std::string_view, ::rtc::StringBuilder*);

MCNAPI bool WriteFmtpParameters(::std::map<::std::string, ::std::string> const&, ::rtc::StringBuilder*);

MCNAPI int WriteLeb128(uint64, uchar*);

MCNAPI void WritePacketizationHeader(int, ::rtc::StringBuilder*);

MCNAPI void WriteRtcpFbHeader(int, ::rtc::StringBuilder*);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&, nullptr_t);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, nullptr_t);

MCNAPI bool operator!=(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const&, nullptr_t);

MCNAPI bool
operator<(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&, ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> const&, ::webrtc::MediaStreamTrackInterface const*);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&, ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&, ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> const&);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const&, ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> const&);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpSenderProxyWithInternal<::webrtc::RtpSenderInternal>> const&, ::webrtc::RtpSenderInterface const*);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const&, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> const&);

MCNAPI bool operator==(::webrtc::scoped_refptr<::webrtc::VideoFrameBuffer> const&, nullptr_t);

MCNAPI bool operator==(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, nullptr_t);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::webrtc::RtpReceiverProxyWithInternal<::webrtc::RtpReceiverInternal>> const&, ::webrtc::RtpReceiverInterface const*);

MCNAPI bool operator==(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> const&, nullptr_t);

MCNAPI bool
operator==(::webrtc::scoped_refptr<::rtc::RTCCertificate> const&, ::webrtc::scoped_refptr<::rtc::RTCCertificate> const&);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> kBweTypeHistogram();

MCNAPI ::webrtc::DataRate const& kCongestionControllerMinBitrate();

MCNAPI double const& kDefaultBitratePriority();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVP9FmtpProfileId();
// NOLINTEND

} // namespace webrtc
