#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace Bedrock {

struct LevelChunkTimingData {
public:
    // LevelChunkTimingData inner types define
    using Clock = ::Bedrock::Profiling::PerfClock;

    using StateTimes = ::std::array<
        ::std::chrono::time_point<
            ::Bedrock::Profiling::PerfClock,
            ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>>,
        12>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        96,
        ::std::array<
            ::std::chrono::time_point<
                ::Bedrock::Profiling::PerfClock,
                ::std::chrono::duration<int64, ::std::ratio<1, 1000000000000000000>>>,
            12>>
        mStateTimes;
    // NOLINTEND
};

} // namespace Bedrock
