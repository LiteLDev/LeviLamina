#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Detail {

template <typename T0>
class ImplFactory {
public:
    // prevent constructor by default
    ImplFactory& operator=(ImplFactory const&);
    ImplFactory(ImplFactory const&);
    ImplFactory();
};

}; // namespace Bedrock::Detail
