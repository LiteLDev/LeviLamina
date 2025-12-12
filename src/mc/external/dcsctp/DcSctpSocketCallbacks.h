#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/ErrorKind.h"
#include "mc/external/dcsctp/SendPacketStatus.h"
#include "mc/external/webrtc/StrongAlias.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class LifecycleId; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class TimeMs; }
namespace dcsctp { class Timeout; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class DcSctpSocketCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DcSctpSocketCallbacks() = default;

    // vIndex: 1
    virtual void SendPacket(::rtc::ArrayView<uchar const> data);

    // vIndex: 2
    virtual ::dcsctp::SendPacketStatus SendPacketWithStatus(::rtc::ArrayView<uchar const> data);

    // vIndex: 4
    virtual ::std::unique_ptr<::dcsctp::Timeout> CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision);

    // vIndex: 3
    virtual ::std::unique_ptr<::dcsctp::Timeout> CreateTimeout();

    // vIndex: 5
    virtual ::dcsctp::TimeMs TimeMillis();

    // vIndex: 6
    virtual ::webrtc::Timestamp Now();

    // vIndex: 7
    virtual uint GetRandomInt(uint, uint) = 0;

    // vIndex: 8
    virtual void NotifyOutgoingMessageBufferEmpty();

    // vIndex: 9
    virtual void OnMessageReceived(::dcsctp::DcSctpMessage) = 0;

    // vIndex: 10
    virtual void OnError(::dcsctp::ErrorKind, ::std::string_view) = 0;

    // vIndex: 11
    virtual void OnAborted(::dcsctp::ErrorKind, ::std::string_view) = 0;

    // vIndex: 12
    virtual void OnConnected() = 0;

    // vIndex: 13
    virtual void OnClosed() = 0;

    // vIndex: 14
    virtual void OnConnectionRestarted() = 0;

    // vIndex: 15
    virtual void OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>,
        ::std::string_view
    ) = 0;

    // vIndex: 16
    virtual void
        OnStreamsResetPerformed(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>) = 0;

    // vIndex: 17
    virtual void
        OnIncomingStreamsReset(::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const>) = 0;

    // vIndex: 18
    virtual void OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    // vIndex: 19
    virtual void OnTotalBufferedAmountLow();

    // vIndex: 20
    virtual void OnLifecycleMessageFullySent(::dcsctp::LifecycleId lifecycle_id);

    // vIndex: 21
    virtual void OnLifecycleMessageExpired(::dcsctp::LifecycleId lifecycle_id, bool maybe_delivered);

    // vIndex: 22
    virtual void OnLifecycleMessageDelivered(::dcsctp::LifecycleId lifecycle_id);

    // vIndex: 23
    virtual void OnLifecycleEnd(::dcsctp::LifecycleId lifecycle_id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SendPacket(::rtc::ArrayView<uchar const> data);

    MCNAPI ::dcsctp::SendPacketStatus $SendPacketWithStatus(::rtc::ArrayView<uchar const> data);

    MCNAPI ::std::unique_ptr<::dcsctp::Timeout> $CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision);

    MCNAPI ::std::unique_ptr<::dcsctp::Timeout> $CreateTimeout();

    MCNAPI ::dcsctp::TimeMs $TimeMillis();

    MCNAPI ::webrtc::Timestamp $Now();

    MCNAPI void $NotifyOutgoingMessageBufferEmpty();

    MCNAPI void $OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI void $OnTotalBufferedAmountLow();

    MCNAPI void $OnLifecycleMessageFullySent(::dcsctp::LifecycleId lifecycle_id);

    MCNAPI void $OnLifecycleMessageExpired(::dcsctp::LifecycleId lifecycle_id, bool maybe_delivered);

    MCNAPI void $OnLifecycleMessageDelivered(::dcsctp::LifecycleId lifecycle_id);

    MCNAPI void $OnLifecycleEnd(::dcsctp::LifecycleId lifecycle_id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
