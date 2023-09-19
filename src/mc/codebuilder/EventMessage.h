#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EventMessage {
public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // NOLINTBEGIN
    // symbol: ??1EventMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~EventMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
