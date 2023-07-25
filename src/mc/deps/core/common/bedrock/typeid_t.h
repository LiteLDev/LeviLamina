#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class typeid_t {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_TYPEID_T
public:
    typeid_t& operator=(typeid_t const&) = delete;
    typeid_t(typeid_t const&)            = delete;
    typeid_t()                           = delete;
#endif

public:
};

}; // namespace Bedrock
