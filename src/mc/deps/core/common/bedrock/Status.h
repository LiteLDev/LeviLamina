#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Status {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_STATUS
public:
    Status& operator=(Status const&) = delete;
    Status(Status const&)            = delete;
    Status()                         = delete;
#endif

public:
};

}; // namespace Bedrock::Http
