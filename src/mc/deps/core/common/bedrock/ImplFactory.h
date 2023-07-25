#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Detail {

template <typename T0>
class ImplFactory {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_DETAIL_IMPLFACTORY
public:
    ImplFactory& operator=(ImplFactory const&) = delete;
    ImplFactory(ImplFactory const&)            = delete;
    ImplFactory()                              = delete;
#endif

public:
};

}; // namespace Bedrock::Detail
