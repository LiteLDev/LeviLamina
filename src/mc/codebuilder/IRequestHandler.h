#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IRequestHandler {

public:
    // prevent constructor by default
    IRequestHandler& operator=(IRequestHandler const&) = delete;
    IRequestHandler(IRequestHandler const&)            = delete;
    IRequestHandler()                                  = delete;
};

}; // namespace CodeBuilder
