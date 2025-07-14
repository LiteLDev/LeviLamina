#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class OutgoingMessageIdTag; }
namespace dcsctp { class StreamIDTag; }
namespace dcsctp { struct Data; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class SendQueue {
public:
    // SendQueue inner types declare
    // clang-format off
    struct DataToSend;
    // clang-format on

    // SendQueue inner types define
    struct DataToSend {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk9d97ac;
        ::ll::UntypedStorage<8, 48> mUnkced954;
        ::ll::UntypedStorage<2, 2>  mUnkf9616a;
        ::ll::UntypedStorage<8, 8>  mUnk3cd7e5;
        ::ll::UntypedStorage<8, 8>  mUnkec05f7;
        // NOLINTEND

    public:
        // prevent constructor by default
        DataToSend& operator=(DataToSend const&);
        DataToSend(DataToSend const&);
        DataToSend();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DataToSend(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id, ::dcsctp::Data data);

        MCNAPI ~DataToSend();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint> message_id, ::dcsctp::Data data);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendQueue() = default;

    // vIndex: 1
    virtual ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64) = 0;

    // vIndex: 2
    virtual bool Discard(
        ::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>,
        ::webrtc::StrongAlias<::dcsctp::OutgoingMessageIdTag, uint>
    ) = 0;

    // vIndex: 3
    virtual void PrepareResetStream(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) = 0;

    // vIndex: 4
    virtual bool HasStreamsReadyToBeReset() const = 0;

    // vIndex: 5
    virtual ::std::vector<::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>> GetStreamsReadyToBeReset() = 0;

    // vIndex: 6
    virtual void CommitResetStreams() = 0;

    // vIndex: 7
    virtual void RollbackResetStreams() = 0;

    // vIndex: 8
    virtual void Reset() = 0;

    // vIndex: 9
    virtual uint64 buffered_amount(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    // vIndex: 10
    virtual uint64 total_buffered_amount() const = 0;

    // vIndex: 11
    virtual uint64 buffered_amount_low_threshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>) const = 0;

    // vIndex: 12
    virtual void SetBufferedAmountLowThreshold(::webrtc::StrongAlias<::dcsctp::StreamIDTag, ushort>, uint64) = 0;

    // vIndex: 13
    virtual void EnableMessageInterleaving(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
