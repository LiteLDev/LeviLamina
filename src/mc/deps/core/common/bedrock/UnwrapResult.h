#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::AsyncResult {

template <typename T0>
class UnwrapResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_ASYNCRESULT_UNWRAPRESULT
public:
    UnwrapResult& operator=(UnwrapResult const&) = delete;
    UnwrapResult(UnwrapResult const&)            = delete;
    UnwrapResult()                               = delete;
#endif

public:
};

}; // namespace Bedrock::Threading::AsyncResult
