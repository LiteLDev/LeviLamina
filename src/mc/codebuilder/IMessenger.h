#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

class IMessenger {
public:
    // prevent constructor by default
    IMessenger& operator=(IMessenger const&);
    IMessenger(IMessenger const&);
    IMessenger();
};

}; // namespace CodeBuilder
