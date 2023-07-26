#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace nonstd::expected_lite {

template <typename T0, typename T1>
class expected {

public:
    // prevent constructor by default
    expected& operator=(expected const&) = delete;
    expected(expected const&)            = delete;
    expected()                           = delete;
};

}; // namespace nonstd::expected_lite
