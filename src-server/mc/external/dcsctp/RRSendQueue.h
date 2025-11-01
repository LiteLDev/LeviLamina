#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/DcSctpSocketHandoverState.h"
#include "mc/external/dcsctp/SendQueue.h"
#include "mc/external/dcsctp/StreamScheduler.h"
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

class RRSendQueue : public ::dcsctp::SendQueue {
public:
    // RRSendQueue inner types declare
    // clang-format off
    struct MessageAttributes;
    class OutgoingStream;
    class ThresholdWatcher;
    // clang-format on
    
    // RRSendQueue inner types define
    struct MessageAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkcea16f;
        ::ll::UntypedStorage<2, 2> mUnk85f2b7;
        ::ll::UntypedStorage<8, 8> mUnkbb1375;
        ::ll::UntypedStorage<8, 8> mUnk328f37;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        MessageAttributes& operator=(MessageAttributes const&);
        MessageAttributes(MessageAttributes const&);
        MessageAttributes();
    
    };
    
    class ThresholdWatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk372a9e;
        ::ll::UntypedStorage<8, 8> mUnkb5571b;
        ::ll::UntypedStorage<8, 8> mUnkaffafc;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ThresholdWatcher& operator=(ThresholdWatcher const&);
        ThresholdWatcher(ThresholdWatcher const&);
        ThresholdWatcher();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Decrease(uint64 bytes);
    
        MCNAPI void SetLowThreshold(uint64 low_threshold);
    
        MCNAPI explicit ThresholdWatcher(::std::function<void()> on_threshold_reached);
    
        MCNAPI ~ThresholdWatcher();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::std::function<void()> on_threshold_reached);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class OutgoingStream : public ::dcsctp::StreamScheduler::StreamProducer {
    public:
        // OutgoingStream inner types declare
        // clang-format off
        struct Item;
        // clang-format on
        
        // OutgoingStream inner types define
        enum class PauseState : int {
            KNotPaused = 0,
            KPending = 1,
            KPaused = 2,
            KResetting = 3,
        };
        
        struct Item {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnkbe4408;
            ::ll::UntypedStorage<8, 32> mUnk47d83e;
            ::ll::UntypedStorage<8, 24> mUnka0a4b9;
            ::ll::UntypedStorage<8, 8> mUnkd16af6;
            ::ll::UntypedStorage<8, 8> mUnk19e5c8;
            ::ll::UntypedStorage<4, 8> mUnk13f609;
            ::ll::UntypedStorage<2, 4> mUnke9c3d5;
            ::ll::UntypedStorage<4, 4> mUnk9095bb;
            // NOLINTEND
        
        public:
            // prevent constructor by default
            Item& operator=(Item const&);
            Item(Item const&);
            Item();
        
        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI Item(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id, ::dcsctp::DcSctpMessage msg, ::dcsctp::RRSendQueue::MessageAttributes attributes);
            // NOLINTEND
        
        public:
            // constructor thunks
            // NOLINTBEGIN
            MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id, ::dcsctp::DcSctpMessage msg, ::dcsctp::RRSendQueue::MessageAttributes attributes);
            // NOLINTEND
        
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1efd92;
        ::ll::UntypedStorage<8, 8> mUnkc6957b;
        ::ll::UntypedStorage<4, 4> mUnk222c35;
        ::ll::UntypedStorage<4, 4> mUnk59a205;
        ::ll::UntypedStorage<4, 4> mUnkf0bd41;
        ::ll::UntypedStorage<2, 2> mUnk1513d1;
        ::ll::UntypedStorage<8, 40> mUnk4a7719;
        ::ll::UntypedStorage<8, 80> mUnkf965e6;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        OutgoingStream& operator=(OutgoingStream const&);
        OutgoingStream(OutgoingStream const&);
        OutgoingStream();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp now, uint64 max_size) /*override*/;
    
        // vIndex: 2
        virtual uint64 bytes_to_send_in_next_message() const /*override*/;
    
        // vIndex: 0
        virtual ~OutgoingStream() /*override*/;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Add(::dcsctp::DcSctpMessage message, ::dcsctp::RRSendQueue::MessageAttributes attributes);
    
        MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState::OutgoingStream& state) const;
    
        MCNAPI bool Discard(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id);
    
        MCNAPI void HandleMessageExpired(::dcsctp::RRSendQueue::OutgoingStream::Item& item);
    
        MCNAPI OutgoingStream(::dcsctp::RRSendQueue* parent, ::dcsctp::StreamScheduler* scheduler, ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority, ::std::function<void()> on_buffered_amount_low, ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const* state);
    
        MCNAPI void Pause();
    
        MCNAPI void Reset();
    
        MCNAPI void Resume();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dcsctp::RRSendQueue* parent, ::dcsctp::StreamScheduler* scheduler, ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority, ::std::function<void()> on_buffered_amount_low, ::dcsctp::DcSctpSocketHandoverState::OutgoingStream const* state);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> $Produce(::webrtc::Timestamp now, uint64 max_size);
    
        MCNAPI uint64 $bytes_to_send_in_next_message() const;
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5f656e;
    ::ll::UntypedStorage<8, 8> mUnk934c54;
    ::ll::UntypedStorage<2, 2> mUnke66781;
    ::ll::UntypedStorage<4, 4> mUnkde9a39;
    ::ll::UntypedStorage<8, 80> mUnk577402;
    ::ll::UntypedStorage<8, 80> mUnk6e2a10;
    ::ll::UntypedStorage<8, 16> mUnka85b66;
    // NOLINTEND

public:
    // prevent constructor by default
    RRSendQueue& operator=(RRSendQueue const&);
    RRSendQueue(RRSendQueue const&);
    RRSendQueue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp now, uint64 max_size) /*override*/;

    // vIndex: 2
    virtual bool Discard(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id) /*override*/;

    // vIndex: 3
    virtual void PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) /*override*/;

    // vIndex: 4
    virtual bool HasStreamsReadyToBeReset() const /*override*/;

    // vIndex: 5
    virtual ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> GetStreamsReadyToBeReset() /*override*/;

    // vIndex: 6
    virtual void CommitResetStreams() /*override*/;

    // vIndex: 7
    virtual void RollbackResetStreams() /*override*/;

    // vIndex: 8
    virtual void Reset() /*override*/;

    // vIndex: 9
    virtual uint64 buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const /*override*/;

    // vIndex: 10
    virtual uint64 total_buffered_amount() const /*override*/;

    // vIndex: 11
    virtual uint64 buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const /*override*/;

    // vIndex: 12
    virtual void SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, uint64 bytes) /*override*/;

    // vIndex: 13
    virtual void EnableMessageInterleaving(bool enabled) /*override*/;

    // vIndex: 0
    virtual ~RRSendQueue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Add(::webrtc::Timestamp now, ::dcsctp::DcSctpMessage message, ::dcsctp::SendOptions const& send_options);

    MCNAPI void AddHandoverState(::dcsctp::DcSctpSocketHandoverState& state);

    MCNAPI ::dcsctp::HandoverReadinessStatus GetHandoverReadiness() const;

    MCNAPI ::dcsctp::RRSendQueue::OutgoingStream& GetOrCreateStreamInfo(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> GetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI bool IsEmpty() const;

    MCNAPI RRSendQueue(::std::string_view log_prefix, ::dcsctp::DcSctpSocketCallbacks* callbacks, uint64 mtu, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> default_priority, uint64 total_buffered_amount_low_threshold);

    MCNAPI void RestoreFromState(::dcsctp::DcSctpSocketHandoverState const& state);

    MCNAPI void SetStreamPriority(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view log_prefix, ::dcsctp::DcSctpSocketCallbacks* callbacks, uint64 mtu, ::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> default_priority, uint64 total_buffered_amount_low_threshold);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> $Produce(::webrtc::Timestamp now, uint64 max_size);

    MCNAPI bool $Discard(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id);

    MCNAPI void $PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id);

    MCNAPI bool $HasStreamsReadyToBeReset() const;

    MCNAPI ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> $GetStreamsReadyToBeReset();

    MCNAPI void $CommitResetStreams();

    MCNAPI void $RollbackResetStreams();

    MCNAPI void $Reset();

    MCNAPI uint64 $buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI uint64 $total_buffered_amount() const;

    MCNAPI uint64 $buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id) const;

    MCNAPI void $SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort> stream_id, uint64 bytes);

    MCNAPI void $EnableMessageInterleaving(bool enabled);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
