#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IResponseBody {

public:
    // prevent constructor by default
    IResponseBody& operator=(IResponseBody const&) = delete;
    IResponseBody(IResponseBody const&)            = delete;
    IResponseBody()                                = delete;
};

}; // namespace Bedrock::Http::Internal
