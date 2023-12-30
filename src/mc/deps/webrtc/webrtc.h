#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/AV1Profile.h"
#include "mc/deps/webrtc/AddIceCandidateResult.h"
#include "mc/deps/webrtc/AudioSinkInterface.h"
#include "mc/deps/webrtc/AudioSourceInterface.h"
#include "mc/deps/webrtc/BandwidthLimitedCause.h"
#include "mc/deps/webrtc/BandwidthUsage.h"
#include "mc/deps/webrtc/BasicRegatheringController.h"
#include "mc/deps/webrtc/BitrateProber.h"
#include "mc/deps/webrtc/Call.h"
#include "mc/deps/webrtc/ColorSpace.h"
#include "mc/deps/webrtc/DataChannelInterface.h"
#include "mc/deps/webrtc/DataMessageType.h"
#include "mc/deps/webrtc/DecodeTargetIndication.h"
#include "mc/deps/webrtc/DelayBasedBwe.h"
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/DtlsTransportTlsRole.h"
#include "mc/deps/webrtc/EncodedImageCallback.h"
#include "mc/deps/webrtc/FecMaskType.h"
#include "mc/deps/webrtc/ForwardErrorCorrection.h"
#include "mc/deps/webrtc/H264PacketizationMode.h"
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/IceCandidatePairEventType.h"
#include "mc/deps/webrtc/JsepTransportController.h"
#include "mc/deps/webrtc/LegacyStatsCollector.h"
#include "mc/deps/webrtc/LossBasedBweV2.h"
#include "mc/deps/webrtc/LossBasedState.h"
#include "mc/deps/webrtc/MediaSourceInterface.h"
#include "mc/deps/webrtc/MediaStreamTrackInterface.h"
#include "mc/deps/webrtc/NonStandardGroupId.h"
#include "mc/deps/webrtc/PacingController.h"
#include "mc/deps/webrtc/PeerConnection.h"
#include "mc/deps/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/PortPrunePolicy.h"
#include "mc/deps/webrtc/PrioritizedPacketQueue.h"
#include "mc/deps/webrtc/Priority.h"
#include "mc/deps/webrtc/ProbeFailureReason.h"
#include "mc/deps/webrtc/RTCErrorOr.h"
#include "mc/deps/webrtc/RTCErrorType.h"
#include "mc/deps/webrtc/RTCPPacketType.h"
#include "mc/deps/webrtc/RTCPReceiver.h"
#include "mc/deps/webrtc/RTCPSender.h"
#include "mc/deps/webrtc/RTCStatsCollector.h"
#include "mc/deps/webrtc/RTCStatsMemberInterface.h"
#include "mc/deps/webrtc/RTCStatsReport.h"
#include "mc/deps/webrtc/RTPExtensionType.h"
#include "mc/deps/webrtc/RTPSenderVideo.h"
#include "mc/deps/webrtc/RTPVideoHeader.h"
#include "mc/deps/webrtc/RemoteAudioSource.h"
#include "mc/deps/webrtc/RtcEvent.h"
#include "mc/deps/webrtc/RtcpFeedbackMessageType.h"
#include "mc/deps/webrtc/RtcpFeedbackType.h"
#include "mc/deps/webrtc/RtcpMode.h"
#include "mc/deps/webrtc/RtpConfig.h"
#include "mc/deps/webrtc/RtpDependencyDescriptorWriter.h"
#include "mc/deps/webrtc/RtpExtension.h"
#include "mc/deps/webrtc/RtpPacket.h"
#include "mc/deps/webrtc/RtpPacketHistory.h"
#include "mc/deps/webrtc/RtpPacketMediaType.h"
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/RtpPacketizerAv1.h"
#include "mc/deps/webrtc/RtpReceiverProxyWithInternal.h"
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/RtpSenderBase.h"
#include "mc/deps/webrtc/RtpSenderProxyWithInternal.h"
#include "mc/deps/webrtc/RtpSequenceNumberMap.h"
#include "mc/deps/webrtc/RtpTransceiverDirection.h"
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/ScalabilityMode.h"
#include "mc/deps/webrtc/SctpTransportState.h"
#include "mc/deps/webrtc/SdpOfferAnswerHandler.h"
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/StatExposureCriteria.h"
#include "mc/deps/webrtc/StatsReport.h"
#include "mc/deps/webrtc/StreamFeedbackObserver.h"
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/TargetBitrate.h"
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/TaskQueuePacedSender.h"
#include "mc/deps/webrtc/TransportFeedback.h"
#include "mc/deps/webrtc/UsageEvent.h"
#include "mc/deps/webrtc/VP9Profile.h"
#include "mc/deps/webrtc/VideoCodecType.h"
#include "mc/deps/webrtc/VideoContentType.h"
#include "mc/deps/webrtc/VideoFecGenerator.h"
#include "mc/deps/webrtc/VideoFrame.h"
#include "mc/deps/webrtc/VideoFrameBuffer.h"
#include "mc/deps/webrtc/VideoFrameType.h"
#include "mc/deps/webrtc/VideoLayersAllocation.h"
#include "mc/deps/webrtc/VideoRotation.h"
#include "mc/deps/webrtc/VideoRtpTrackSource.h"
#include "mc/deps/webrtc/VideoTrackInterface.h"
#include "mc/deps/webrtc/VideoTrackSourceInterface.h"
#include "mc/deps/webrtc/VideoTrackSourceProxyWithInternal.h"
#include "mc/deps/webrtc/WebRtcSessionDescriptionFactory.h"
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/absl/InlinedVector.h"
#include "mc/deps/webrtc/cricket/AudioSource.h"
#include "mc/deps/webrtc/cricket/ContentSource.h"
#include "mc/deps/webrtc/cricket/IceConnectionState.h"
#include "mc/deps/webrtc/cricket/IceGatheringState.h"
#include "mc/deps/webrtc/cricket/IceRole.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/cricket/SecurePolicy.h"
#include "mc/deps/webrtc/cricket/SendDataResult.h"
#include "mc/deps/webrtc/dcsctp/ErrorKind.h"
#include "mc/deps/webrtc/dcsctp/SendPacketStatus.h"
#include "mc/deps/webrtc/rtc/AdapterType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/BufferT.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/SSLHandshakeError.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/Socket.h"
#include "mc/deps/webrtc/rtc/VideoSinkInterface.h"
#include "mc/deps/webrtc/rtc/VideoSourceInterface.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"
#include "mc/deps/webrtc/sigslot/signal_with_thread_policy.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class ChannelInterface; }
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class FeedbackParam; }
namespace cricket { class FeedbackParams; }
namespace cricket { class IceTransportInternal; }
namespace cricket { class JsepTransport; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class MediaReceiveChannelInterface; }
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { class P2PTransportChannel; }
namespace cricket { class PortAllocator; }
namespace cricket { class SctpTransportInternal; }
namespace cricket { class SessionDescription; }
namespace cricket { class SimulcastDescription; }
namespace cricket { class VideoContentDescription; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace cricket { struct Codec; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct CryptoParams; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct IceConfig; }
namespace cricket { struct JsepTransportDescription; }
namespace cricket { struct MediaConfig; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct ReceiveDataParams; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct RidDescription; }
namespace cricket { struct StreamParams; }
namespace cricket { struct TransportInfo; }
namespace cricket { struct TransportStats; }
namespace cricket { struct VideoCodec; }
namespace cricket { struct VideoMediaInfo; }
namespace cricket { struct VideoOptions; }
namespace cricket { struct VideoReceiverInfo; }
namespace cricket { struct VideoSenderInfo; }
namespace cricket { struct VoiceMediaInfo; }
namespace cricket { struct VoiceReceiverInfo; }
namespace cricket { struct VoiceSenderInfo; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketFactory; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace rtc { class RefCountInterface; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SocketAddress; }
namespace rtc { class StringBuilder; }
namespace rtc { class Thread; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SSLCertificateStats; }
namespace rtc { struct SentPacket; }
namespace rtc { struct VideoSinkWants; }
namespace sigslot { class single_threaded; }
namespace webrtc { class AcknowledgedBitrateEstimatorInterface; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncDnsResolverResult; }
namespace webrtc { class AudioProcessorInterface; }
namespace webrtc { class AudioRtpSender; }
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { class AudioSourceInterface; }
namespace webrtc { class AudioTrack; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class AudioTrackSinkInterface; }
namespace webrtc { class BitrateEstimator; }
namespace webrtc { class Call; }
namespace webrtc { class Clock; }
namespace webrtc { class ColorSpace; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DEPRECATED_RTCMediaStreamStats; }
namespace webrtc { class DEPRECATED_RTCMediaStreamTrackStats; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelObserver; }
namespace webrtc { class DataChannelSink; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class DelayIncreaseDetectorInterface; }
namespace webrtc { class DtlsSrtpTransport; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInformation; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class DtlsTransportObserverInterface; }
namespace webrtc { class DtmfProviderInterface; }
namespace webrtc { class DtmfSender; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class DtmfSenderObserverInterface; }
namespace webrtc { class EncodedImage; }
namespace webrtc { class EncodedImageBuffer; }
namespace webrtc { class FecController; }
namespace webrtc { class FecHeaderReader; }
namespace webrtc { class FecHeaderWriter; }
namespace webrtc { class FieldTrialParameterInterface; }
namespace webrtc { class FieldTrialsRegistry; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class ForwardErrorCorrection; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class Frequency; }
namespace webrtc { class I420Buffer; }
namespace webrtc { class I420BufferInterface; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class IceCandidatePairDescription; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class JsepCandidateCollection; }
namespace webrtc { class JsepIceCandidate; }
namespace webrtc { class JsepSessionDescription; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class LocalAudioSource; }
namespace webrtc { class MaybeWorkerThread; }
namespace webrtc { class MediaSourceInterface; }
namespace webrtc { class MediaStream; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class ModuleRtpRtcpImpl2; }
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class NetworkStateEstimateObserver; }
namespace webrtc { class NetworkStatePredictor; }
namespace webrtc { class NetworkStatePredictorFactoryInterface; }
namespace webrtc { class NtpTime; }
namespace webrtc { class ObserverInterface; }
namespace webrtc { class PacketQueue; }
namespace webrtc { class PacketRouter; }
namespace webrtc { class PacketSequencer; }
namespace webrtc { class PeerConnection; }
namespace webrtc { class PeerConnectionFactoryInterface; }
namespace webrtc { class PeerConnectionInterface; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class PeerConnectionSdpMethods; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class RTCAudioPlayoutStats; }
namespace webrtc { class RTCAudioSourceStats; }
namespace webrtc { class RTCCertificateStats; }
namespace webrtc { class RTCCodecStats; }
namespace webrtc { class RTCDataChannelStats; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCIceCandidatePairStats; }
namespace webrtc { class RTCIceCandidateStats; }
namespace webrtc { class RTCInboundRTPStreamStats; }
namespace webrtc { class RTCMediaSourceStats; }
namespace webrtc { class RTCOutboundRTPStreamStats; }
namespace webrtc { class RTCPeerConnectionStats; }
namespace webrtc { class RTCRTPStreamStats; }
namespace webrtc { class RTCReceivedRtpStreamStats; }
namespace webrtc { class RTCRemoteInboundRtpStreamStats; }
namespace webrtc { class RTCRemoteOutboundRtpStreamStats; }
namespace webrtc { class RTCSentRtpStreamStats; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsCollector; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class RTCStatsMemberInterface; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RTCTransportStats; }
namespace webrtc { class RTCVideoSourceStats; }
namespace webrtc { class RTPSender; }
namespace webrtc { class RTPSenderVideo; }
namespace webrtc { class RateControlSettings; }
namespace webrtc { class RateLimiter; }
namespace webrtc { class RateStatistics; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class RepeatingTaskHandle; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class Resource; }
namespace webrtc { class RtcEvent; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtcpBandwidthObserver; }
namespace webrtc { class RtcpFeedbackSenderInterface; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpGenericFrameDescriptor; }
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class RtpPacket; }
namespace webrtc { class RtpPacketHistory; }
namespace webrtc { class RtpPacketInfos; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
namespace webrtc { class RtpPayloadParams; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpReceiverObserverInterface; }
namespace webrtc { class RtpRtcpInterface; }
namespace webrtc { class RtpSendRates; }
namespace webrtc { class RtpSenderBase; }
namespace webrtc { class RtpSenderEgress; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class RtpSource; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class RtpTransportControllerSendFactoryInterface; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class RtpVideoSenderInterface; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class SctpDataChannelControllerInterface; }
namespace webrtc { class SctpTransport; }
namespace webrtc { class SctpTransportInformation; }
namespace webrtc { class SctpTransportInterface; }
namespace webrtc { class SctpTransportObserverInterface; }
namespace webrtc { class SdpOfferAnswerHandler; }
namespace webrtc { class SdpStateProvider; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class SrtpTransport; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StatsReport; }
namespace webrtc { class StreamCollection; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class StreamFeedbackObserver; }
namespace webrtc { class StreamFeedbackProvider; }
namespace webrtc { class StructParametersParser; }
namespace webrtc { class TargetTransferRateObserver; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class TrackMediaInfoMap; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class TransceiverStableState; }
namespace webrtc { class TransformableFrameInterface; }
namespace webrtc { class TransformedFrameCallback; }
namespace webrtc { class Transport; }
namespace webrtc { class TransportFeedbackObserver; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { class UntypedFunction; }
namespace webrtc { class UsagePattern; }
namespace webrtc { class VideoBitrateAllocation; }
namespace webrtc { class VideoBitrateAllocatorFactory; }
namespace webrtc { class VideoFecGenerator; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoFrameBuffer; }
namespace webrtc { class VideoFrameMetadata; }
namespace webrtc { class VideoRtpSender; }
namespace webrtc { class VideoTrack; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { class VideoTrackSource; }
namespace webrtc { class VideoTrackSourceInterface; }
namespace webrtc { struct ANAStats; }
namespace webrtc { struct AbsoluteCaptureTime; }
namespace webrtc { struct AlrDetectorConfig; }
namespace webrtc { struct AlrExperimentSettings; }
namespace webrtc { struct AudioProcessingStats; }
namespace webrtc { struct BitrateAllocationLimits; }
namespace webrtc { struct BitrateAllocationUpdate; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct CodecBufferUsage; }
namespace webrtc { struct CodecSpecificInfo; }
namespace webrtc { struct CodecSpecificInfoH264; }
namespace webrtc { struct CodecSpecificInfoVP8; }
namespace webrtc { struct CodecSpecificInfoVP9; }
namespace webrtc { struct CongestionWindowConfig; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct DataBuffer; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct DependencyDescriptor; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct FrameDependencyTemplate; }
namespace webrtc { struct GenericFrameInfo; }
namespace webrtc { struct GoogCcConfig; }
namespace webrtc { struct H264ProfileLevelId; }
namespace webrtc { struct HdrMetadata; }
namespace webrtc { struct IceTransportInit; }
namespace webrtc { struct InternalDataChannelInit; }
namespace webrtc { struct NetworkAvailability; }
namespace webrtc { struct NetworkControlUpdate; }
namespace webrtc { struct NetworkControllerConfig; }
namespace webrtc { struct NetworkRouteChange; }
namespace webrtc { struct NetworkStateEstimate; }
namespace webrtc { struct PacedPacketInfo; }
namespace webrtc { struct PacerConfig; }
namespace webrtc { struct PacketFeedback; }
namespace webrtc { struct PacketOptions; }
namespace webrtc { struct PacketResult; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct PeerConnectionFactoryDependencies; }
namespace webrtc { struct ProbeClusterConfig; }
namespace webrtc { struct ProcessInterval; }
namespace webrtc { struct RTCPReportBlock; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct RTPVideoHeaderH264; }
namespace webrtc { struct RTPVideoHeaderVP8; }
namespace webrtc { struct RTPVideoHeaderVP9; }
namespace webrtc { struct RateControlInput; }
namespace webrtc { struct ReceivedPacket; }
namespace webrtc { struct RemoteBitrateReport; }
namespace webrtc { struct RobustThroughputEstimatorSettings; }
namespace webrtc { struct RoundTripTimeUpdate; }
namespace webrtc { struct RtcpFeedback; }
namespace webrtc { struct RtcpParameters; }
namespace webrtc { struct RtpCapabilities; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpCodecParameters; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
namespace webrtc { struct RtpPacketCounter; }
namespace webrtc { struct RtpPacketSendInfo; }
namespace webrtc { struct RtpParameters; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderFrameEncryptionConfig; }
namespace webrtc { struct RtpSenderInfo; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
namespace webrtc { struct RtpTransceiverInit; }
namespace webrtc { struct RtpTransportConfig; }
namespace webrtc { struct SdpParseError; }
namespace webrtc { struct SdpVideoFormat; }
namespace webrtc { struct SendDataParams; }
namespace webrtc { struct SentPacket; }
namespace webrtc { struct SsrcInfo; }
namespace webrtc { struct StreamDataCounters; }
namespace webrtc { struct StreamsConfig; }
namespace webrtc { struct TargetRateConstraints; }
namespace webrtc { struct TargetTransferRate; }
namespace webrtc { struct TransportLossReport; }
namespace webrtc { struct TransportPacketsFeedback; }
namespace webrtc { struct VideoLayersAllocation; }
namespace webrtc { struct VideoPlayoutDelay; }
namespace webrtc { struct VideoSendTiming; }
namespace webrtc { struct VideoTrackSourceConstraints; }
namespace webrtc::AudioDeviceModule { struct Stats; }
namespace webrtc::H264 { struct NaluIndex; }
namespace webrtc::HdrMasteringMetadata { struct Chromaticity; }
namespace webrtc::VideoEncoderFactory { class EncoderSelectorInterface; }
namespace webrtc::internal { class PacketMaskTable; }
namespace webrtc::metrics { class Histogram; }
namespace webrtc::rtcp { class App; }
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class Psfb; }
namespace webrtc::rtcp { class RemoteEstimateSerializer; }
namespace webrtc::rtcp { class ReportBlock; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class RtcpPacket; }
namespace webrtc::rtcp { class Rtpfb; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { class TmmbItem; }
namespace webrtc::rtcp { class TransportFeedback; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
namespace webrtc::struct_parser_impl { struct MemberParameter; }
// clang-format on

namespace webrtc {
// NOLINTBEGIN
// symbol:
// ?AV1IsSameProfile@webrtc@@YA_NAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@0@Z
MCAPI bool AV1IsSameProfile(std::map<std::string, std::string> const&, std::map<std::string, std::string> const&);

// symbol: ?AdapterTypeToStatsType@webrtc@@YAPEBDW4AdapterType@rtc@@@Z
MCAPI char const* AdapterTypeToStatsType(::rtc::AdapterType);

// symbol:
// ?AddAudioAttribute@webrtc@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@PEAVAudioContentDescription@cricket@@@Z
MCAPI void AddAudioAttribute(std::string const&, std::string_view, class cricket::AudioContentDescription*);

// symbol: ?AddFeedbackParameter@webrtc@@YAXAEBVFeedbackParam@cricket@@PEAUCodec@3@@Z
MCAPI void AddFeedbackParameter(class cricket::FeedbackParam const&, struct cricket::Codec*);

// symbol: ?AddFeedbackParameters@webrtc@@YAXAEBVFeedbackParams@cricket@@PEAUCodec@3@@Z
MCAPI void AddFeedbackParameters(class cricket::FeedbackParams const&, struct cricket::Codec*);

// symbol:
// ?AddParameters@webrtc@@YAXAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@PEAUCodec@cricket@@@Z
MCAPI void AddParameters(std::map<std::string, std::string> const&, struct cricket::Codec*);

// symbol: ?AlignedFree@webrtc@@YAXPEAX@Z
MCAPI void AlignedFree(void*);

// symbol: ?AlignedMalloc@webrtc@@YAPEAX_K0@Z
MCAPI void* AlignedMalloc(uint64, uint64);

// symbol: ?CompactNtpRttToTimeDelta@webrtc@@YA?AVTimeDelta@1@I@Z
MCAPI class webrtc::TimeDelta CompactNtpRttToTimeDelta(uint);

// symbol:
// ?CreateIceCandidate@webrtc@@YAPEAVIceCandidateInterface@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H0PEAUSdpParseError@1@@Z
MCAPI class webrtc::IceCandidateInterface*
CreateIceCandidate(std::string const&, int, std::string const&, struct webrtc::SdpParseError*);

// symbol:
// ?CreateSessionDescription@webrtc@@YA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@W4SdpType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::unique_ptr<class webrtc::SessionDescriptionInterface>
      CreateSessionDescription(::webrtc::SdpType, std::string const&);

// symbol:
// ?CreateSessionDescription@webrtc@@YA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@W4SdpType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@PEAUSdpParseError@1@@Z
MCAPI std::unique_ptr<class webrtc::SessionDescriptionInterface>
      CreateSessionDescription(::webrtc::SdpType, std::string const&, struct webrtc::SdpParseError*);

// symbol:
// ?CreateSessionDescription@webrtc@@YA?AV?$unique_ptr@VSessionDescriptionInterface@webrtc@@U?$default_delete@VSessionDescriptionInterface@webrtc@@@std@@@std@@W4SdpType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1V?$unique_ptr@VSessionDescription@cricket@@U?$default_delete@VSessionDescription@cricket@@@std@@@3@@Z
MCAPI std::unique_ptr<class webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType, std::string const&, std::string const&, std::unique_ptr<class cricket::SessionDescription>);

// symbol:
// ?CreateTrackWithNoSsrcs@webrtc@@YAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBV?$vector@URidDescription@cricket@@V?$allocator@URidDescription@cricket@@@std@@@3@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@3@@Z
MCAPI void
CreateTrackWithNoSsrcs(std::vector<std::string> const&, std::string_view, std::vector<struct cricket::RidDescription> const&, std::vector<struct cricket::StreamParams>*);

// symbol:
// ?CreateTracksFromSsrcInfos@webrtc@@YAXAEBV?$vector@USsrcInfo@webrtc@@V?$allocator@USsrcInfo@webrtc@@@std@@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@PEAV?$vector@UStreamParams@cricket@@V?$allocator@UStreamParams@cricket@@@std@@@3@H@Z
MCAPI void CreateTracksFromSsrcInfos(
    std::vector<struct webrtc::SsrcInfo> const&,
    std::vector<std::string> const&,
    std::string_view,
    std::vector<struct cricket::StreamParams>*,
    int
);

// symbol: ?GetDtmfCode@webrtc@@YA_NDPEAH@Z
MCAPI bool GetDtmfCode(char, int*);

// symbol:
// ?GetMediaStreamIds@webrtc@@YAXPEBVContentInfo@cricket@@PEAV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
MCAPI void GetMediaStreamIds(class cricket::ContentInfo const*, std::set<std::string>*);

// symbol: ?GetMinValue@webrtc@@YA_NAEBV?$vector@HV?$allocator@H@std@@@std@@PEAH@Z
MCAPI bool GetMinValue(std::vector<int> const&, int*);

// symbol:
// ?GetParameter@webrtc@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@PEAH@Z
MCAPI bool GetParameter(std::string const&, std::map<std::string, std::string> const&, int*);

// symbol: ?GetRightAlign@webrtc@@YA_K_K0@Z
MCAPI uint64 GetRightAlign(uint64, uint64);

// symbol:
// ?GetStatsReferencedIds@webrtc@@YA?AV?$vector@PEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@PEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVRTCStats@1@@Z
MCAPI std::vector<std::string const*> GetStatsReferencedIds(class webrtc::RTCStats const&);

// symbol:
// ?H264GenerateProfileLevelIdForAnswer@webrtc@@YAXAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@0PEAV23@@Z
MCAPI void
H264GenerateProfileLevelIdForAnswer(std::map<std::string, std::string> const&, std::map<std::string, std::string> const&, std::map<std::string, std::string>*);

// symbol:
// ?H264IsSameProfile@webrtc@@YA_NAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@0@Z
MCAPI bool H264IsSameProfile(std::map<std::string, std::string> const&, std::map<std::string, std::string> const&);

// symbol:
// ?H264ProfileLevelIdToString@webrtc@@YA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBUH264ProfileLevelId@1@@Z
MCAPI std::optional<std::string> H264ProfileLevelIdToString(struct webrtc::H264ProfileLevelId const&);

// symbol:
// ?IceCandidateTypeToStatsType@webrtc@@YAPEBDAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI char const* IceCandidateTypeToStatsType(std::string const&);

// symbol:
// ?InvokeSetParametersCallback@webrtc@@YA?AVRTCError@1@AEAV?$AnyInvocable@$$A8@@EHAAXVRTCError@webrtc@@@Z@absl@@V21@@Z
MCAPI class webrtc::RTCError
InvokeSetParametersCallback(class absl::AnyInvocable<void(class webrtc::RTCError) &&>&, class webrtc::RTCError);

// symbol: ?IsFmtpParam@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsFmtpParam(std::string_view);

// symbol: ?IsLegalRsidName@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsLegalRsidName(std::string_view);

// symbol: ?IsOpenMessage@webrtc@@YA_NAEBVCopyOnWriteBuffer@rtc@@@Z
MCAPI bool IsOpenMessage(class rtc::CopyOnWriteBuffer const&);

// symbol: ?IsRtcpPacket@webrtc@@YA_NV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
MCAPI bool IsRtcpPacket(class rtc::ArrayView<uchar const, -4711>);

// symbol: ?IsRtpPacket@webrtc@@YA_NV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
MCAPI bool IsRtpPacket(class rtc::ArrayView<uchar const, -4711>);

// symbol: ?IsTokenChar@webrtc@@YA_ND@Z
MCAPI bool IsTokenChar(char);

// symbol: ?Leb128Size@webrtc@@YAH_K@Z
MCAPI int Leb128Size(uint64);

// symbol:
// ?MaybeCreateStaticPayloadAudioCodecs@webrtc@@YAXAEBV?$vector@HV?$allocator@H@std@@@std@@PEAVAudioContentDescription@cricket@@@Z
MCAPI void MaybeCreateStaticPayloadAudioCodecs(std::vector<int> const&, class cricket::AudioContentDescription*);

// symbol:
// ?ParseCandidate@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVCandidate@cricket@@PEAUSdpParseError@1@_N@Z
MCAPI bool ParseCandidate(std::string_view, class cricket::Candidate*, struct webrtc::SdpParseError*, bool);

// symbol:
// ?ParseConnectionData@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVSocketAddress@rtc@@PEAUSdpParseError@1@@Z
MCAPI bool ParseConnectionData(std::string_view, class rtc::SocketAddress*, struct webrtc::SdpParseError*);

// symbol: ?ParseDataChannelOpenAckMessage@webrtc@@YA_NAEBVCopyOnWriteBuffer@rtc@@@Z
MCAPI bool ParseDataChannelOpenAckMessage(class rtc::CopyOnWriteBuffer const&);

// symbol:
// ?ParseDataChannelOpenMessage@webrtc@@YA_NAEBVCopyOnWriteBuffer@rtc@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAUDataChannelInit@1@@Z
MCAPI bool
ParseDataChannelOpenMessage(class rtc::CopyOnWriteBuffer const&, std::string*, struct webrtc::DataChannelInit*);

// symbol:
// ?ParseFieldTrial@webrtc@@YAXV?$initializer_list@PEAVFieldTrialParameterInterface@webrtc@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI void ParseFieldTrial(std::initializer_list<class webrtc::FieldTrialParameterInterface*>, std::string_view);

// symbol: ?ParseH264ProfileLevelId@webrtc@@YA?AV?$optional@UH264ProfileLevelId@webrtc@@@std@@PEBD@Z
MCAPI std::optional<struct webrtc::H264ProfileLevelId> ParseH264ProfileLevelId(char const*);

// symbol:
// ?ParseIceServersOrError@webrtc@@YA?AVRTCError@1@AEBV?$vector@UIceServer@PeerConnectionInterface@webrtc@@V?$allocator@UIceServer@PeerConnectionInterface@webrtc@@@std@@@std@@PEAV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@4@PEAV?$vector@URelayServerConfig@cricket@@V?$allocator@URelayServerConfig@cricket@@@std@@@4@@Z
MCAPI class webrtc::RTCError
ParseIceServersOrError(std::vector<struct webrtc::PeerConnectionInterface::IceServer> const&, std::set<class rtc::SocketAddress>*, std::vector<struct cricket::RelayServerConfig>*);

// symbol: ?ParseRtpSequenceNumber@webrtc@@YAGV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
MCAPI ushort ParseRtpSequenceNumber(class rtc::ArrayView<uchar const, -4711>);

// symbol: ?ParseRtpSsrc@webrtc@@YAIV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
MCAPI uint ParseRtpSsrc(class rtc::ArrayView<uchar const, -4711>);

// symbol:
// ?ParseSctpMaxMessageSize@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAHPEAUSdpParseError@1@@Z
MCAPI bool ParseSctpMaxMessageSize(std::string_view, int*, struct webrtc::SdpParseError*);

// symbol: ?ParseSctpPort@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAHPEAUSdpParseError@1@@Z
MCAPI bool ParseSctpPort(std::string_view, int*, struct webrtc::SdpParseError*);

// symbol:
// ?ParseSdpForAV1Profile@webrtc@@YA?AV?$optional@W4AV1Profile@webrtc@@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
MCAPI std::optional<::webrtc::AV1Profile> ParseSdpForAV1Profile(std::map<std::string, std::string> const&);

// symbol:
// ?ParseSdpForH264ProfileLevelId@webrtc@@YA?AV?$optional@UH264ProfileLevelId@webrtc@@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
MCAPI std::optional<struct webrtc::H264ProfileLevelId>
      ParseSdpForH264ProfileLevelId(std::map<std::string, std::string> const&);

// symbol:
// ?ParseSdpForVP9Profile@webrtc@@YA?AV?$optional@W4VP9Profile@webrtc@@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@3@@Z
MCAPI std::optional<::webrtc::VP9Profile> ParseSdpForVP9Profile(std::map<std::string, std::string> const&);

// symbol:
// ?PayloadStringToCodecType@webrtc@@YA?AW4VideoCodecType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::webrtc::VideoCodecType PayloadStringToCodecType(std::string const&);

// symbol: ?RtpDescriptorAuthentication@webrtc@@YA?AV?$vector@EV?$allocator@E@std@@@std@@AEBURTPVideoHeader@1@@Z
MCAPI std::vector<uchar> RtpDescriptorAuthentication(struct webrtc::RTPVideoHeader const&);

// symbol:
// ?RtpHeaderExtensionSize@webrtc@@YAHV?$ArrayView@$$CBURtpExtensionSize@webrtc@@$0?BCGH@@rtc@@AEBVRtpHeaderExtensionMap@1@@Z
MCAPI int
RtpHeaderExtensionSize(class rtc::ArrayView<struct webrtc::RtpExtensionSize const, -4711>, class webrtc::RtpHeaderExtensionMap const&);

// symbol: ?RtpTransceiverDirectionFromSendRecv@webrtc@@YA?AW4RtpTransceiverDirection@1@_N0@Z
MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionFromSendRecv(bool, bool);

// symbol: ?RtpTransceiverDirectionHasRecv@webrtc@@YA_NW4RtpTransceiverDirection@1@@Z
MCAPI bool RtpTransceiverDirectionHasRecv(::webrtc::RtpTransceiverDirection);

// symbol: ?RtpTransceiverDirectionHasSend@webrtc@@YA_NW4RtpTransceiverDirection@1@@Z
MCAPI bool RtpTransceiverDirectionHasSend(::webrtc::RtpTransceiverDirection);

// symbol: ?RtpTransceiverDirectionIntersection@webrtc@@YA?AW4RtpTransceiverDirection@1@W421@0@Z
MCAPI ::webrtc::RtpTransceiverDirection
    RtpTransceiverDirectionIntersection(::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection);

// symbol: ?RtpTransceiverDirectionReversed@webrtc@@YA?AW4RtpTransceiverDirection@1@W421@@Z
MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionReversed(::webrtc::RtpTransceiverDirection);

// symbol: ?RtpTransceiverDirectionToString@webrtc@@YAPEBDW4RtpTransceiverDirection@1@@Z
MCAPI char const* RtpTransceiverDirectionToString(::webrtc::RtpTransceiverDirection);

// symbol: ?RtpTransceiverDirectionWithRecvSet@webrtc@@YA?AW4RtpTransceiverDirection@1@W421@_N@Z
MCAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionWithRecvSet(::webrtc::RtpTransceiverDirection, bool);

// symbol:
// ?SafeTask@webrtc@@YA?AV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@V?$scoped_refptr@VPendingTaskSafetyFlag@webrtc@@@rtc@@V23@@Z
MCAPI class absl::AnyInvocable<void(void) &&>
    SafeTask(class rtc::scoped_refptr<class webrtc::PendingTaskSafetyFlag>, class absl::AnyInvocable<void(void) &&>);

// symbol: ?ScalabilityModeToString@webrtc@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4ScalabilityMode@1@@Z
MCAPI std::string_view ScalabilityModeToString(::webrtc::ScalabilityMode);

// symbol:
// ?SdpDeserialize@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVJsepSessionDescription@1@PEAUSdpParseError@1@@Z
MCAPI bool SdpDeserialize(std::string_view, class webrtc::JsepSessionDescription*, struct webrtc::SdpParseError*);

// symbol:
// ?SdpDeserializeCandidate@webrtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVJsepIceCandidate@1@PEAUSdpParseError@1@@Z
MCAPI bool SdpDeserializeCandidate(std::string_view, class webrtc::JsepIceCandidate*, struct webrtc::SdpParseError*);

// symbol:
// ?SdpSerialize@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVJsepSessionDescription@1@@Z
MCAPI std::string SdpSerialize(class webrtc::JsepSessionDescription const&);

// symbol:
// ?SdpSerializeCandidate@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCandidate@cricket@@@Z
MCAPI std::string SdpSerializeCandidate(class cricket::Candidate const&);

// symbol:
// ?SdpSerializeCandidate@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVIceCandidateInterface@1@@Z
MCAPI std::string SdpSerializeCandidate(class webrtc::IceCandidateInterface const&);

// symbol:
// ?SdpTypeFromString@webrtc@@YA?AV?$optional@W4SdpType@webrtc@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::optional<::webrtc::SdpType> SdpTypeFromString(std::string const&);

// symbol: ?SdpTypeToString@webrtc@@YAPEBDW4SdpType@1@@Z
MCAPI char const* SdpTypeToString(::webrtc::SdpType);

// symbol:
// ?StringToAV1Profile@webrtc@@YA?AV?$optional@W4AV1Profile@webrtc@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::optional<::webrtc::AV1Profile> StringToAV1Profile(std::string_view);

// symbol:
// ?StringToVP9Profile@webrtc@@YA?AV?$optional@W4VP9Profile@webrtc@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI std::optional<::webrtc::VP9Profile> StringToVP9Profile(std::string const&);

// symbol:
// ?TakeReferencedStats@webrtc@@YA?AV?$scoped_refptr@VRTCStatsReport@webrtc@@@rtc@@V23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
MCAPI class rtc::scoped_refptr<class webrtc::RTCStatsReport>
TakeReferencedStats(class rtc::scoped_refptr<class webrtc::RTCStatsReport>, std::vector<std::string> const&);

// symbol: ?ToRtcpFeedback@webrtc@@YA?AV?$optional@URtcpFeedback@webrtc@@@std@@AEBVFeedbackParam@cricket@@@Z
MCAPI std::optional<struct webrtc::RtcpFeedback> ToRtcpFeedback(class cricket::FeedbackParam const&);

// symbol: ?ToString@webrtc@@YAPEBDW4RTCErrorType@1@@Z
MCAPI char const* ToString(::webrtc::RTCErrorType);

// symbol: ?ToString@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDataRate@1@@Z
MCAPI std::string ToString(class webrtc::DataRate);

// symbol: ?ToString@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VDataSize@1@@Z
MCAPI std::string ToString(class webrtc::DataSize);

// symbol: ?ToString@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimeDelta@1@@Z
MCAPI std::string ToString(class webrtc::TimeDelta);

// symbol: ?ToString@webrtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VTimestamp@1@@Z
MCAPI std::string ToString(class webrtc::Timestamp);

// symbol: ?UnimplementedRtpParameterHasValue@webrtc@@YA_NAEBURtpParameters@1@@Z
MCAPI bool UnimplementedRtpParameterHasValue(struct webrtc::RtpParameters const&);

// symbol:
// ?UpdateCodec@webrtc@@YAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVVideoContentDescription@cricket@@@Z
MCAPI void UpdateCodec(int, std::string_view, class cricket::VideoContentDescription*);

// symbol:
// ?UpdateCodec@webrtc@@YAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@HH_KPEAVAudioContentDescription@cricket@@@Z
MCAPI void UpdateCodec(int, std::string_view, int, int, uint64, class cricket::AudioContentDescription*);

// symbol:
// ?UpdateVideoCodecPacketization@webrtc@@YAXPEAVVideoContentDescription@cricket@@HV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI void UpdateVideoCodecPacketization(class cricket::VideoContentDescription*, int, std::string_view);

// symbol:
// ?VP9IsSameProfile@webrtc@@YA_NAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@0@Z
MCAPI bool VP9IsSameProfile(std::map<std::string, std::string> const&, std::map<std::string, std::string> const&);

// symbol: ?ValidAlignment@webrtc@@YA_N_K@Z
MCAPI bool ValidAlignment(uint64);

// symbol: ?VerifyAudioCodecs@webrtc@@YA_NPEBVAudioContentDescription@cricket@@@Z
MCAPI bool VerifyAudioCodecs(class cricket::AudioContentDescription const*);

// symbol: ?VerifyCodec@webrtc@@YA_NAEBUCodec@cricket@@@Z
MCAPI bool VerifyCodec(struct cricket::Codec const&);

// symbol: ?VerifyVideoCodecs@webrtc@@YA_NPEBVVideoContentDescription@cricket@@@Z
MCAPI bool VerifyVideoCodecs(class cricket::VideoContentDescription const*);

// symbol: ?WriteDataChannelOpenAckMessage@webrtc@@YAXPEAVCopyOnWriteBuffer@rtc@@@Z
MCAPI void WriteDataChannelOpenAckMessage(class rtc::CopyOnWriteBuffer*);

// symbol:
// ?WriteDataChannelOpenMessage@webrtc@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUDataChannelInit@1@PEAVCopyOnWriteBuffer@rtc@@@Z
MCAPI bool
WriteDataChannelOpenMessage(std::string const&, struct webrtc::DataChannelInit const&, class rtc::CopyOnWriteBuffer*);

// symbol: ?WriteFmtpHeader@webrtc@@YAXHPEAVStringBuilder@rtc@@@Z
MCAPI void WriteFmtpHeader(int, class rtc::StringBuilder*);

// symbol: ?WriteFmtpParameter@webrtc@@YAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@0PEAVStringBuilder@rtc@@@Z
MCAPI void WriteFmtpParameter(std::string_view, std::string_view, class rtc::StringBuilder*);

// symbol:
// ?WriteFmtpParameters@webrtc@@YA_NAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@PEAVStringBuilder@rtc@@@Z
MCAPI bool WriteFmtpParameters(std::map<std::string, std::string> const&, class rtc::StringBuilder*);

// symbol: ?WriteLeb128@webrtc@@YAH_KPEAE@Z
MCAPI int WriteLeb128(uint64, uchar*);

// symbol: ?WritePacketizationHeader@webrtc@@YAXHPEAVStringBuilder@rtc@@@Z
MCAPI void WritePacketizationHeader(int, class rtc::StringBuilder*);

// symbol: ?WriteRtcpFbHeader@webrtc@@YAXHPEAVStringBuilder@rtc@@@Z
MCAPI void WriteRtcpFbHeader(int, class rtc::StringBuilder*);

// symbol: ?kAV1FmtpProfile@webrtc@@3QBDB
MCAPI extern char const kAV1FmtpProfile[];

// symbol: ?kBweTypeHistogram@webrtc@@3QBDB
MCAPI extern char const kBweTypeHistogram[];

// symbol: ?kDefaultBitratePriority@webrtc@@3NB
MCAPI extern double const kDefaultBitratePriority;

// symbol: ?kVP9FmtpProfileId@webrtc@@3QBDB
MCAPI extern char const kVP9FmtpProfileId[];
// NOLINTEND

}; // namespace webrtc
