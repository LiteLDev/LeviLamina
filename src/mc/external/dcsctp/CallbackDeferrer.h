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
    virtual ::dcsctp::SendPacketStatus SendPacketWithStatus(::rtc::ArrayView<uchar const> data) /*override*/;

    virtual ::std::unique_ptr<::dcsctp::Timeout>
    CreateTimeout(::webrtc::TaskQueueBase::DelayPrecision precision) /*override*/;

    virtual ::dcsctp::TimeMs TimeMillis() /*override*/;

    virtual ::webrtc::Timestamp Now() /*override*/;

    virtual uint GetRandomInt(uint low, uint high) /*override*/;

    virtual void OnMessageReceived(::dcsctp::DcSctpMessage message) /*override*/;

    virtual void OnError(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    virtual void OnAborted(::dcsctp::ErrorKind error, ::std::string_view message) /*override*/;

    virtual void OnConnected() /*override*/;

    virtual void OnClosed() /*override*/;

    virtual void OnConnectionRestarted() /*override*/;

    virtual void OnStreamsResetFailed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams,
        ::std::string_view                                                           reason
    ) /*override*/;

    virtual void OnStreamsResetPerformed(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> outgoing_streams
    ) /*override*/;

    virtual void OnIncomingStreamsReset(
        ::rtc::ArrayView<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> const> incoming_streams
    ) /*override*/;

    virtual void OnBufferedAmountLow(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) /*override*/;

    virtual void OnTotalBufferedAmountLow() /*override*/;

    virtual void OnLifecycleMessageExpired(::dcsctp::LifecycleId lifecycle_id, bool maybe_delivered) /*override*/;

    virtual void OnLifecycleMessageFullySent(::dcsctp::LifecycleId lifecycle_id) /*override*/;

    virtual void OnLifecycleMessageDelivered(::dcsctp::LifecycleId lifecycle_id) /*override*/;

    virtual void OnLifecycleEnd(::dcsctp::LifecycleId lifecycle_id) /*override*/;

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
