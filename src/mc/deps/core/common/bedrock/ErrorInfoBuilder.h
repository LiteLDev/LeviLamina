#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Detail {

template <typename T0>
struct ErrorInfoBuilder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_DETAIL_ERRORINFOBUILDER
public:
    ErrorInfoBuilder& operator=(ErrorInfoBuilder const&) = delete;
    ErrorInfoBuilder(ErrorInfoBuilder const&)            = delete;
    ErrorInfoBuilder()                                   = delete;
#endif

public:
};

}; // namespace Bedrock::Detail
