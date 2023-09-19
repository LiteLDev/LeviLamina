#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Status {
public:
    // prevent constructor by default
    Status& operator=(Status const&);
    Status(Status const&);
    Status();
};

}; // namespace Bedrock::Http
