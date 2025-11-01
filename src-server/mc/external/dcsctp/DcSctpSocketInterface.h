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
    // vIndex: 0
    virtual ~DcSctpSocketInterface() = default;

    // vIndex: 1
    virtual void ReceivePacket(::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 2
    virtual void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64>) = 0;

    // vIndex: 3
    virtual void Connect() = 0;

    // vIndex: 4
    virtual void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&) = 0;

    // vIndex: 5
    virtual void Shutdown() = 0;

    // vIndex: 6
    virtual void Close() = 0;

    // vIndex: 7
    virtual ::dcsctp::SocketState state() const = 0;

    // vIndex: 8
    virtual ::dcsctp::DcSctpOptions const& options() const = 0;

    // vIndex: 9
    virtual void SetMaxMessageSize(uint64) = 0;

    // vIndex: 10
    virtual void SetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>) = 0;

    // vIndex: 11
    virtual ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    // vIndex: 12
    virtual ::dcsctp::SendStatus Send(::dcsctp::DcSctpMessage, ::dcsctp::SendOptions const&) = 0;

    // vIndex: 13
    virtual ::std::vector<::dcsctp::SendStatus> SendMany(::rtc::ArrayView<::dcsctp::DcSctpMessage>, ::dcsctp::SendOptions const&) = 0;

    // vIndex: 14
    virtual ::dcsctp::ResetStreamsStatus ResetStreams(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>) = 0;

    // vIndex: 15
    virtual uint64 buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    // vIndex: 16
    virtual uint64 buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    // vIndex: 17
    virtual void SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, uint64) = 0;

    // vIndex: 18
    virtual ::std::optional<::dcsctp::Metrics> GetMetrics() const = 0;

    // vIndex: 19
    virtual ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const = 0;

    // vIndex: 20
    virtual ::std::optional<::dcsctp::DcSctpSocketHandoverState> GetHandoverStateAndClose() = 0;

    // vIndex: 21
    virtual ::dcsctp::SctpImplementation peer_implementation() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
