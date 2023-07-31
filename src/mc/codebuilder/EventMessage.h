#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EventMessage {

public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&) = delete;
    EventMessage(EventMessage const&)            = delete;
    EventMessage()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1EventMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~EventMessage();
    // NOLINTEND
};

}; // namespace CodeBuilder
