#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SendQueue.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class InverseWeightTag; }
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class VirtualTimeTag; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class StreamScheduler {
public:
    // StreamScheduler inner types declare
    // clang-format off
    struct ActiveStreamComparator;
    class InverseWeight;
    class StreamProducer;
    class VirtualTime;
    class Stream;
    // clang-format on

    // StreamScheduler inner types define
    struct ActiveStreamComparator {};

    class InverseWeight : public ::webrtc::StrongAlias<::dcsctp::InverseWeightTag, double> {};

    class StreamProducer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~StreamProducer() = default;

        virtual ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64) = 0;

        virtual uint64 bytes_to_send_in_next_message() const = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class VirtualTime : public ::webrtc::StrongAlias<::dcsctp::VirtualTimeTag, double> {};

    class Stream {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka4fd2e;
        ::ll::UntypedStorage<8, 8> mUnk21a4b1;
        ::ll::UntypedStorage<2, 2> mUnk8e1ebe;
        ::ll::UntypedStorage<2, 2> mUnk7eaf9b;
        ::ll::UntypedStorage<8, 8> mUnkd86953;
        ::ll::UntypedStorage<8, 8> mUnk403ab8;
        ::ll::UntypedStorage<8, 8> mUnkf90a93;
        // NOLINTEND

    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dcsctp::StreamScheduler::VirtualTime CalculateFinishTime(uint64 bytes_to_send_next) const;

        MCNAPI void ForceMarkInactive();

        MCNAPI void MakeActive(uint64 bytes_to_send_next);

        MCNAPI void MakeInactive();

        MCNAPI void MaybeMakeActive();

        MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp now, uint64 max_size);

        MCNAPI void SetPriority(::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort> priority);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1757e1;
    ::ll::UntypedStorage<8, 8>  mUnke02039;
    ::ll::UntypedStorage<8, 8>  mUnk5cbf11;
    ::ll::UntypedStorage<8, 8>  mUnk13540b;
    ::ll::UntypedStorage<1, 1>  mUnk6fbf0c;
    ::ll::UntypedStorage<1, 1>  mUnk25051d;
    ::ll::UntypedStorage<8, 32> mUnk792589;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamScheduler& operator=(StreamScheduler const&);
    StreamScheduler(StreamScheduler const&);
    StreamScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp now, uint64 max_size);

    MCNAPI ~StreamScheduler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
