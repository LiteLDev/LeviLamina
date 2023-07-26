#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterface {

public:
    // prevent constructor by default
    HttpInterface& operator=(HttpInterface const&) = delete;
    HttpInterface(HttpInterface const&)            = delete;
    HttpInterface()                                = delete;
};

}; // namespace Bedrock::Http
