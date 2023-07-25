#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IResponseBody {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_INTERNAL_IRESPONSEBODY
public:
    IResponseBody& operator=(IResponseBody const&) = delete;
    IResponseBody(IResponseBody const&)            = delete;
    IResponseBody()                                = delete;
#endif

public:
};

}; // namespace Bedrock::Http::Internal
