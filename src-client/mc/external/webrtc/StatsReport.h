#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct StatsReport {
public:
    // StatsReport inner types declare
    // clang-format off
    struct IdBase;
    struct Value;
    // clang-format on

    // StatsReport inner types define
    enum class Direction : uint {};

    enum class StatsType : uint {};

    enum class StatsValueName : uint {};

    struct IdBase {};

    struct Value {
    public:
        // Value inner types define
        enum class Type : uint {};

        union InternalType {};
    };
};

} // namespace webrtc
