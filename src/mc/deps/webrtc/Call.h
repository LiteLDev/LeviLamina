#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Call {
public:
    // Call inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // Call inner types define
    struct Stats {
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // prevent constructor by default
    Call& operator=(Call const&);
    Call(Call const&);
    Call();
};

}; // namespace webrtc
