#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/DcSctpSocketHandoverState.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class DcSctpMessage; }
namespace dcsctp { class DcSctpSocketCallbacks; }
namespace dcsctp { class HandoverReadinessStatus; }
namespace dcsctp { class OutgoingMessageIdTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class StreamScheduler; }
namespace dcsctp { struct DcSctpSocketHandoverState; }
namespace dcsctp { struct SendOptions; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class RRSendQueue {
public:
    // RRSendQueue inner types declare
    // clang-format off
    struct MessageAttributes;
    class OutgoingStream;
    struct ThresholdWatcher;
    // clang-format on

    // RRSendQueue inner types define
    struct MessageAttributes {};

    class OutgoingStream {
    public:
        // OutgoingStream inner types declare
        // clang-format off
        struct Item;
        // clang-format on

        // OutgoingStream inner types define
        struct Item {
        public:
            // prevent constructor by default
            Item();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI Item(
                ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
                ::dcsctp::DcSctpMessage,
                ::dcsctp::RRSendQueue::MessageAttributes
            );
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(
                ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
                ::dcsctp::DcSctpMessage,
                ::dcsctp::RRSendQueue::MessageAttributes
            );
            // NOLINTEND
        };

    public:
        // prevent constructor by default
        OutgoingStream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Add(::dcsctp::DcSctpMessage, ::dcsctp::RRSendQueue::MessageAttributes);

        MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState::OutgoingStream&) const;

        MCNAPI bool Discard(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>);

        MCNAPI void HandleMessageExpired(::dcsctp::RRSendQueue::OutgoingStream::Item&);

        MCNAPI OutgoingStream(
            ::dcsctp::RRSendQueue*,
            ::dcsctp::StreamScheduler*,
            ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
            ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>,
            ::std::function<void()>,
            ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const*
        );

        MCNAPI void Pause();

        MCNAPI void Reset();

        MCNAPI void Resume();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::dcsctp::RRSendQueue*,
            ::dcsctp::StreamScheduler*,
            ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
            ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>,
            ::std::function<void()>,
            ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const*
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct ThresholdWatcher {
    public:
        // prevent constructor by default
        ThresholdWatcher();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Decrease(uint64);

        MCNAPI void SetLowThreshold(uint64);

        MCNAPI explicit ThresholdWatcher(::std::function<void()>);

        MCNAPI ~ThresholdWatcher();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::function<void()>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RRSendQueue();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::Timestamp, ::dcsctp::DcSctpMessage, ::dcsctp::SendOptions const&);

    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI ::dcsctp::RRSendQueue::OutgoingStream&
        GetOrCreateStreamInfo(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>);

    MCNAPI ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
        GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const;

    MCNAPI bool IsEmpty() const;

    MCNAPI RRSendQueue(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks*,
        uint64,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>,
        uint64
    );

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCNAPI void SetStreamPriority(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks*,
        uint64,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>,
        uint64
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
