#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class typeid_t {

public:
    // prevent constructor by default
    typeid_t& operator=(typeid_t const&) = delete;
    typeid_t(typeid_t const&)            = delete;
    typeid_t()                           = delete;
};

}; // namespace Bedrock
