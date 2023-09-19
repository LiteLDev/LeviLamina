#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IResponseBody {
public:
    // prevent constructor by default
    IResponseBody& operator=(IResponseBody const&);
    IResponseBody(IResponseBody const&);
    IResponseBody();
};

}; // namespace Bedrock::Http::Internal
