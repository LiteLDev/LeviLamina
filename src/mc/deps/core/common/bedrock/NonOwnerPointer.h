#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class NonOwnerPointer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_NONOWNERPOINTER
public:
    NonOwnerPointer& operator=(NonOwnerPointer const&) = delete;
    NonOwnerPointer(NonOwnerPointer const&)            = delete;
    NonOwnerPointer()                                  = delete;
#endif

public:
};

}; // namespace Bedrock
