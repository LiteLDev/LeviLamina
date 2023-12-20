#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/detail/AnyForwardTsnChunk.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/DataTracker.h"
#include "mc/deps/webrtc/detail/DcSctpSocket.h"
#include "mc/deps/webrtc/detail/DcSctpSocketHandoverState.h"
#include "mc/deps/webrtc/detail/ErrorKind.h"
#include "mc/deps/webrtc/detail/InterleavedReassemblyStreams.h"
#include "mc/deps/webrtc/detail/OutstandingData.h"
#include "mc/deps/webrtc/detail/Parameters.h"
#include "mc/deps/webrtc/detail/RRSendQueue.h"
#include "mc/deps/webrtc/detail/ReconfigurationResponseParameter.h"
#include "mc/deps/webrtc/detail/ResetStreamsStatus.h"
#include "mc/deps/webrtc/detail/SackChunk.h"
#include "mc/deps/webrtc/detail/SctpImplementation.h"
#include "mc/deps/webrtc/detail/SctpPacket.h"
#include "mc/deps/webrtc/detail/SendPacketStatus.h"
#include "mc/deps/webrtc/detail/SendQueue.h"
#include "mc/deps/webrtc/detail/SendStatus.h"
#include "mc/deps/webrtc/detail/SocketState.h"
#include "mc/deps/webrtc/detail/StreamScheduler.h"
#include "mc/deps/webrtc/detail/UnwrappedSequenceNumber.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class AbortChunk; }
namespace dcsctp { class AnyDataChunk; }
namespace dcsctp { class AnyForwardTsnChunk; }
namespace dcsctp { class Chunk; }
namespace dcsctp { class Context; }
namespace dcsctp { class CookieAckChunk; }
namespace dcsctp { class CookieEchoChunk; }
namespace dcsctp { class CookieReceivedWhileShuttingDownCause; }
namespace dcsctp { class DataChunk; }
namespace dcsctp { class DataTracker; }
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class DcSctpSocketInterface; }
namespace dcsctp { class DurationMs; }
namespace dcsctp { class ErrorChunk; }
namespace dcsctp { class FSNTag; }
namespace dcsctp { class ForwardTsnChunk; }
namespace dcsctp { class ForwardTsnSupportedParameter; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class HeartbeatAckChunk; }
namespace dcsctp { class HeartbeatInfoParameter; }
namespace dcsctp { class HeartbeatRequestChunk; }
namespace dcsctp { class IDataChunk; }
namespace dcsctp { class IForwardTsnChunk; }
namespace dcsctp { class ImmediateAckFlagTag; }
namespace dcsctp { class IncomingSSNResetRequestParameter; }
namespace dcsctp { class InitAckChunk; }
namespace dcsctp { class InitChunk; }
namespace dcsctp { class InterleavedReassemblyStreams; }
namespace dcsctp { class InvalidMandatoryParameterCause; }
namespace dcsctp { class InvalidStreamIdentifierCause; }
namespace dcsctp { class IsBeginningTag; }
namespace dcsctp { class IsEndTag; }
namespace dcsctp { class IsUnorderedTag; }
namespace dcsctp { class LifecycleId; }
namespace dcsctp { class MIDTag; }
namespace dcsctp { class MaxRetransmits; }
namespace dcsctp { class MissingMandatoryParameterCause; }
namespace dcsctp { class NoUserDataCause; }
namespace dcsctp { class OutOfResourceErrorCause; }
namespace dcsctp { class OutgoingSSNResetRequestParameter; }
namespace dcsctp { class PPIDTag; }
namespace dcsctp { class PacketObserver; }
namespace dcsctp { class PacketSender; }
namespace dcsctp { class Parameter; }
namespace dcsctp { class Parameters; }
namespace dcsctp { class ProtocolViolationCause; }
namespace dcsctp { class RRSendQueue; }
namespace dcsctp { class ReConfigChunk; }
namespace dcsctp { class ReassemblyQueue; }
namespace dcsctp { class ReconfigRequestSNTag; }
namespace dcsctp { class ReconfigurationResponseParameter; }
namespace dcsctp { class RestartOfAnAssociationWithNewAddressesCause; }
namespace dcsctp { class RetransmissionQueue; }
namespace dcsctp { class SSNTag; }
namespace dcsctp { class SackChunk; }
namespace dcsctp { class SctpPacket; }
namespace dcsctp { class SendQueue; }
namespace dcsctp { class ShutdownAckChunk; }
namespace dcsctp { class ShutdownChunk; }
namespace dcsctp { class ShutdownCompleteChunk; }
namespace dcsctp { class StaleCookieErrorCause; }
namespace dcsctp { class StateCookie; }
namespace dcsctp { class StateCookieParameter; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class StreamScheduler; }
namespace dcsctp { class SupportedExtensionsParameter; }
namespace dcsctp { class TSNTag; }
namespace dcsctp { class TaskQueueTimeoutFactory; }
namespace dcsctp { class TieTagTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { class TimerGenerationTag; }
namespace dcsctp { class TimerIDTag; }
namespace dcsctp { class TimerManager; }
namespace dcsctp { class TraditionalReassemblyStreams; }
namespace dcsctp { class UnrecognizedChunkTypeCause; }
namespace dcsctp { class UnrecognizedParametersCause; }
namespace dcsctp { class UnresolvableAddressCause; }
namespace dcsctp { class UserInitiatedAbortCause; }
namespace dcsctp { class VerificationTagTag; }
namespace dcsctp { struct Capabilities; }
namespace dcsctp { struct CommonHeader; }
namespace dcsctp { struct Data; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct Metrics; }
namespace dcsctp { struct ParameterDescriptor; }
namespace dcsctp { struct SendOptions; }
namespace dcsctp { struct TimerOptions; }
// clang-format on

namespace dcsctp {
// NOLINTBEGIN
// symbol:
// ?ErrorCausesToString@dcsctp@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVParameters@1@@Z
MCAPI std::string ErrorCausesToString(class dcsctp::Parameters const&);

// symbol: ?GenerateCrc32C@dcsctp@@YAIV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
MCAPI uint GenerateCrc32C(class rtc::ArrayView<uchar const, -4711>);

// symbol: ?ToString@dcsctp@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4ErrorKind@1@@Z
MCAPI std::string_view ToString(::dcsctp::ErrorKind);

// symbol:
// ?ToString@dcsctp@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4Result@ReconfigurationResponseParameter@1@@Z
MCAPI std::string_view ToString(::dcsctp::ReconfigurationResponseParameter::Result);
// NOLINTEND

}; // namespace dcsctp
