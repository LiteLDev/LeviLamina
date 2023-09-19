#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HttpInterface_windows {
public:
    // prevent constructor by default
    HttpInterface_windows& operator=(HttpInterface_windows const&);
    HttpInterface_windows(HttpInterface_windows const&);
    HttpInterface_windows();
};

}; // namespace Bedrock::Http
