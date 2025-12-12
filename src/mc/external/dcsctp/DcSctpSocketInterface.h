#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/ResetStreamsStatus.h"
#include "mc/external/dcsctp/SctpImplementation.h"
#include "mc/external/dcsctp/SendStatus.h"
#include "mc/external/dcsctp/SocketState.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { struct DcSctpOptions; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct Metrics; }
namespace dcsctp { struct SendOptions; }
// clang-format on

namespace dcsctp {

class DcSctpSocketInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DcSctpSocketInterface() = default;

    virtual void ReceivePacket(::rtc::ArrayView<uchar const>) = 0;

    virtual void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64>) = 0;

    virtual void Connect() = 0;

    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&) = 0;

    virtual void Shutdown() = 0;

    virtual void Close() = 0;

    virtual ::dcsctp::SocketState state() const = 0;

    virtual ::dcsctp::DcSctpOptions const& options() const = 0;

    virtual void SetMaxMessageSize(uint64) = 0;

    virtual void SetStreamPriority(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
    ) = 0;

    virtual ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
        GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    virtual ::dcsctp::SendStatus Send(::dcsctp::DcSctpMessage, ::dcsctp::SendOptions const&) = 0;

    virtual ::std::vector<::dcsctp::SendStatus>
    SendMany(::rtc::ArrayView<::dcsctp::DcSctpMessage>, ::dcsctp::SendOptions const&) = 0;

    virtual ::dcsctp::ResetStreamsStatus
        ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>) = 0;

    virtual uint64 buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    virtual uint64 buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    virtual void SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, uint64) = 0;

    virtual ::std::optional<::dcsctp::Metrics> GetMetrics() const = 0;

    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const = 0;

    virtual ::std::optional<::dcsctp::DcSctpSocketHandoverState> GetHandoverStateAndClose() = 0;

    virtual ::dcsctp::SctpImplementation peer_implementation() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
