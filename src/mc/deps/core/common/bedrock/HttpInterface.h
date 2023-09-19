#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterface {
public:
    // prevent constructor by default
    HttpInterface& operator=(HttpInterface const&);
    HttpInterface(HttpInterface const&);
    HttpInterface();
};

}; // namespace Bedrock::Http
