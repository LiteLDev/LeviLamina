#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EventMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_EVENTMESSAGE
public:
    EventMessage& operator=(EventMessage const&) = delete;
    EventMessage(EventMessage const&)            = delete;
    EventMessage()                               = delete;
#endif

public:
    /**
     * @symbol ??1EventMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~EventMessage();
};

}; // namespace CodeBuilder
