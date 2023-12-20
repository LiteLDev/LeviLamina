#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace nonstd::expected_lite::detail {

template <typename T0, typename T1, int T2, int T3>
class storage_t {
public:
    // prevent constructor by default
    storage_t& operator=(storage_t const&);
    storage_t(storage_t const&);
    storage_t();
};

}; // namespace nonstd::expected_lite::detail
