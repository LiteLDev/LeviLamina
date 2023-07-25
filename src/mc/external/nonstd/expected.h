#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace nonstd::expected_lite {

template <typename T0, typename T1>
class expected {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NONSTD_EXPECTED_LITE_EXPECTED
public:
    expected& operator=(expected const&) = delete;
    expected(expected const&)            = delete;
    expected()                           = delete;
#endif

public:
};

}; // namespace nonstd::expected_lite
