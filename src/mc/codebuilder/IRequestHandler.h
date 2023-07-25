#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IRequestHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_IREQUESTHANDLER
public:
    IRequestHandler& operator=(IRequestHandler const&) = delete;
    IRequestHandler(IRequestHandler const&)            = delete;
    IRequestHandler()                                  = delete;
#endif

public:
};

}; // namespace CodeBuilder
