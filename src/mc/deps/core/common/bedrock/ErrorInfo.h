#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
struct ErrorInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_ERRORINFO
public:
    ErrorInfo& operator=(ErrorInfo const&) = delete;
    ErrorInfo(ErrorInfo const&)            = delete;
    ErrorInfo()                            = delete;
#endif

public:
};

}; // namespace Bedrock
