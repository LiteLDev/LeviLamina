#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Status {

public:
    // prevent constructor by default
    Status& operator=(Status const&) = delete;
    Status(Status const&)            = delete;
    Status()                         = delete;
};

}; // namespace Bedrock::Http
