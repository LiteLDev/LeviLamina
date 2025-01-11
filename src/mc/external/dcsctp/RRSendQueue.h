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
            // member functions
            // NOLINTBEGIN
            MCAPI Item(
                ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
                ::dcsctp::DcSctpMessage,
                ::dcsctp::RRSendQueue::MessageAttributes
            );
            // NOLINTEND

        public:
            // constructor thunks
            // NOLINTBEGIN
            MCAPI void* $ctor(
                ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>,
                ::dcsctp::DcSctpMessage,
                ::dcsctp::RRSendQueue::MessageAttributes
            );
            // NOLINTEND
        };

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void Add(::dcsctp::DcSctpMessage, ::dcsctp::RRSendQueue::MessageAttributes);

        MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState::OutgoingStream&) const;

        MCAPI bool Discard(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>);

        MCAPI void HandleMessageExpired(::dcsctp::RRSendQueue::OutgoingStream::Item&);

        MCAPI
        OutgoingStream(::dcsctp::RRSendQueue*, ::dcsctp::StreamScheduler*, ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>, ::std::function<void()>, ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const*);

        MCAPI void Pause();

        MCAPI void Reset();

        MCAPI void Resume();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::dcsctp::RRSendQueue*, ::dcsctp::StreamScheduler*, ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>, ::std::function<void()>, ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    struct ThresholdWatcher {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void Decrease(uint64);

        MCAPI void SetLowThreshold(uint64);

        MCAPI explicit ThresholdWatcher(::std::function<void()>);

        MCAPI ~ThresholdWatcher();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::function<void()>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::webrtc::Timestamp, ::dcsctp::DcSctpMessage, ::dcsctp::SendOptions const&);

    MCAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState&);

    MCAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCAPI ::dcsctp::RRSendQueue::OutgoingStream&
        GetOrCreateStreamInfo(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>);

    MCAPI ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>
        GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const;

    MCAPI bool IsEmpty() const;

    MCAPI RRSendQueue(
        ::std::string_view,
        ::dcsctp::DcSctpSocketCallbacks*,
        uint64,
        ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>,
        uint64
    );

    MCAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const&);

    MCAPI void
        SetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
