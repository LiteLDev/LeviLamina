#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StrongAlias.h"
#include "mc/deps/webrtc/detail/SendQueue.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class StreamPriorityTag; }
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class StreamScheduler {
public:
    // StreamScheduler inner types declare
    // clang-format off
    class VirtualTime;
    class Stream;
    // clang-format on

    // StreamScheduler inner types define
    class VirtualTime {
    public:
        // prevent constructor by default
        VirtualTime& operator=(VirtualTime const&);
        VirtualTime(VirtualTime const&);
        VirtualTime();
    };

    class Stream {
    public:
        // prevent constructor by default
        Stream& operator=(Stream const&);
        Stream(Stream const&);
        Stream();

    public:
        // NOLINTBEGIN
        // symbol: ?MakeInactive@Stream@StreamScheduler@dcsctp@@QEAAXXZ
        MCAPI void MakeInactive();

        // symbol: ?MaybeMakeActive@Stream@StreamScheduler@dcsctp@@QEAAXXZ
        MCAPI void MaybeMakeActive();

        // symbol:
        // ?SetPriority@Stream@StreamScheduler@dcsctp@@QEAAXV?$StrongAlias@VStreamPriorityTag@dcsctp@@G@webrtc@@@Z
        MCAPI void SetPriority(class webrtc::StrongAlias<class dcsctp::StreamPriorityTag, ushort>);

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol: ?CalculateFinishTime@Stream@StreamScheduler@dcsctp@@AEBA?AVVirtualTime@23@_K@Z
        MCAPI class dcsctp::StreamScheduler::VirtualTime CalculateFinishTime(uint64) const;

        // symbol: ?ForceMarkInactive@Stream@StreamScheduler@dcsctp@@AEAAXXZ
        MCAPI void ForceMarkInactive();

        // symbol: ?MakeActive@Stream@StreamScheduler@dcsctp@@AEAAX_K@Z
        MCAPI void MakeActive(uint64);

        // symbol:
        // ?Produce@Stream@StreamScheduler@dcsctp@@AEAA?AV?$optional@UDataToSend@SendQueue@dcsctp@@@std@@VTimeMs@3@_K@Z
        MCAPI std::optional<struct dcsctp::SendQueue::DataToSend> Produce(class dcsctp::TimeMs, uint64);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StreamScheduler& operator=(StreamScheduler const&);
    StreamScheduler(StreamScheduler const&);
    StreamScheduler();

public:
    // NOLINTBEGIN
    // symbol: ?Produce@StreamScheduler@dcsctp@@QEAA?AV?$optional@UDataToSend@SendQueue@dcsctp@@@std@@VTimeMs@2@_K@Z
    MCAPI std::optional<struct dcsctp::SendQueue::DataToSend> Produce(class dcsctp::TimeMs, uint64);

    // symbol: ??1StreamScheduler@dcsctp@@QEAA@XZ
    MCAPI ~StreamScheduler();

    // NOLINTEND
};

}; // namespace dcsctp
