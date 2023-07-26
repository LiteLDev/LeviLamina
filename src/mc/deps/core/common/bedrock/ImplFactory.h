#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Detail {

template <typename T0>
class ImplFactory {

public:
    // prevent constructor by default
    ImplFactory& operator=(ImplFactory const&) = delete;
    ImplFactory(ImplFactory const&)            = delete;
    ImplFactory()                              = delete;
};

}; // namespace Bedrock::Detail
