#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/dcsctp/SendQueue.h"
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class StreamPriorityTag; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace dcsctp {

class StreamScheduler {
public:
    // StreamScheduler inner types declare
    // clang-format off
    class Stream;
    class VirtualTime;
    // clang-format on

    // StreamScheduler inner types define
    class Stream {
    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::dcsctp::StreamScheduler::VirtualTime CalculateFinishTime(uint64) const;

        MCAPI void ForceMarkInactive();

        MCAPI void MakeActive(uint64);

        MCAPI void MakeInactive();

        MCAPI void MaybeMakeActive();

        MCAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64);

        MCAPI void SetPriority(::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>);
        // NOLINTEND
    };

    class VirtualTime {
    public:
        // prevent constructor by default
        VirtualTime& operator=(VirtualTime const&);
        VirtualTime(VirtualTime const&);
        VirtualTime();
    };

public:
    // prevent constructor by default
    StreamScheduler& operator=(StreamScheduler const&);
    StreamScheduler(StreamScheduler const&);
    StreamScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64);

    MCAPI ~StreamScheduler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
