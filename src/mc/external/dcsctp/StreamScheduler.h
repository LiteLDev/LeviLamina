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
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dcsctp::StreamScheduler::VirtualTime CalculateFinishTime(uint64) const;

        MCNAPI void ForceMarkInactive();

        MCNAPI void MakeActive(uint64);

        MCNAPI void MakeInactive();

        MCNAPI void MaybeMakeActive();

        MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64);

        MCNAPI void SetPriority(::webrtc::StrongAlias<::dcsctp::StreamPriorityTag, ushort>);
        // NOLINTEND
    };

    class VirtualTime {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::dcsctp::SendQueue::DataToSend> Produce(::webrtc::Timestamp, uint64);

    MCNAPI ~StreamScheduler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
