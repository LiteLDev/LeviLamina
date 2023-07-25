#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

template <typename T0>
class IAsyncResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_IASYNCRESULT
public:
    IAsyncResult& operator=(IAsyncResult const&) = delete;
    IAsyncResult(IAsyncResult const&)            = delete;
    IAsyncResult()                               = delete;
#endif

public:
};

}; // namespace Bedrock::Threading
