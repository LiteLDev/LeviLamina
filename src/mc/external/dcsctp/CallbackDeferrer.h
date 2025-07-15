#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/DcSctpSocketCallbacks.h"
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

class CallbackDeferrer : public ::dcsctp::DcSctpSocketCallbacks {
public:
    // CallbackDeferrer inner types declare
    // clang-format off
    struct Error;
    class ScopedDeferrer;
    struct StreamReset;
    // clang-format on

    // CallbackDeferrer inner types define
    class ScopedDeferrer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb10993;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedDeferrer& operator=(ScopedDeferrer const&);
        ScopedDeferrer(ScopedDeferrer const&);
        ScopedDeferrer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScopedDeferrer();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Error {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk2946f5;
        ::ll::UntypedStorage<8, 32> mUnk66944b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Error& operator=(Error const&);
        Error(Error const&);
        Error();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Error();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StreamReset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk677307;
        ::ll::UntypedStorage<8, 32> mUnk5c0dbd;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamReset& operator=(StreamReset const&);
        StreamReset(StreamReset const&);
        StreamReset();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StreamReset();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk87ee76;
    ::ll::UntypedStorage<1, 1>  mUnk8cdd55;
    ::ll::UntypedStorage<8, 24> mUnkeaf150;
    // NOLINTEND

public:
    // prevent constructor by default
    CallbackDeferrer& operator=(CallbackDeferrer const&);
    CallbackDeferrer(CallbackDeferrer const&);
    CallbackDeferrer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::dcsctp::SendPacketStatus SendPacketWithStatus(::rtc::ArrayView<uchar const> data) /*override*/;

    // vIndex: 4
    virtual ::std::unique_ptr<::dcsctp::Timeout>
    CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision) /*override*/;

    // vIndex: 5
    virtual ::dcsctp::TimeMs TimeMillis() /*override*/;

    // vIndex: 6
    virtual ::webrtc::Timestamp Now() /*override*/;

    // vIndex: 7
    virtual uint GetRandomInt(uint low, uint high) /*override*/;

    // vIndex: 9
    virtual void OnMessageReceived(::dcsctp::DcSctpMessage message) /*override*/;

    // vIndex: 10
    virtual void OnError(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    // vIndex: 11
    virtual void OnAborted(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    // vIndex: 12
    virtual void OnConnected() /*override*/;

    // vIndex: 13
    virtual void OnClosed() /*override*/;

    // vIndex: 14
    virtual void OnConnectionRestarted() /*override*/;

    // vIndex: 15
    virtual void OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams,
        ::std::string_view                                                           reason
    ) /*override*/;

    // vIndex: 16
    virtual void OnStreamsResetPerformed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    ) /*override*/;

    // vIndex: 17
    virtual void OnIncomingStreamsReset(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> incoming_streams
    ) /*override*/;

    // vIndex: 18
    virtual void OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) /*override*/;

    // vIndex: 19
    virtual void OnTotalBufferedAmountLow() /*override*/;

    // vIndex: 21
    virtual void OnLifecycleMessageExpired(::dcsctp::LifecycleId lifecycle_id, bool maybe_delivered) /*override*/;

    // vIndex: 20
    virtual void OnLifecycleMessageFullySent(::dcsctp::LifecycleId lifecycle_id) /*override*/;

    // vIndex: 22
    virtual void OnLifecycleMessageDelivered(::dcsctp::LifecycleId lifecycle_id) /*override*/;

    // vIndex: 23
    virtual void OnLifecycleEnd(::dcsctp::LifecycleId lifecycle_id) /*override*/;

    // vIndex: 0
    virtual ~CallbackDeferrer() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Prepare();

    MCNAPI void TriggerDeferred();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::dcsctp::SendPacketStatus $SendPacketWithStatus(::rtc::ArrayView<uchar const> data);

    MCNAPI ::std::unique_ptr<::dcsctp::Timeout> $CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision);

    MCNAPI ::dcsctp::TimeMs $TimeMillis();

    MCNAPI ::webrtc::Timestamp $Now();

    MCNAPI uint $GetRandomInt(uint low, uint high);

    MCNAPI void $OnMessageReceived(::dcsctp::DcSctpMessage message);

    MCNAPI void $OnError(::dcsctp::ErrorKind error, ::std::string_view message);

    MCNAPI void $OnAborted(::dcsctp::ErrorKind error, ::std::string_view message);

    MCNAPI void $OnConnected();

    MCNAPI void $OnClosed();

    MCNAPI void $OnConnectionRestarted();

    MCNAPI void $OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams,
        ::std::string_view                                                           reason
    );

    MCNAPI void $OnStreamsResetPerformed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    );

    MCNAPI void $OnIncomingStreamsReset(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> incoming_streams
    );

    MCNAPI void $OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI void $OnTotalBufferedAmountLow();

    MCNAPI void $OnLifecycleMessageExpired(::dcsctp::LifecycleId lifecycle_id, bool maybe_delivered);

    MCNAPI void $OnLifecycleMessageFullySent(::dcsctp::LifecycleId lifecycle_id);

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
