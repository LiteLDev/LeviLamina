#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IMessenger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_IMESSENGER
public:
    IMessenger& operator=(IMessenger const&) = delete;
    IMessenger(IMessenger const&)            = delete;
    IMessenger()                             = delete;
#endif

public:
};

}; // namespace CodeBuilder
