#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_COMMANDMESSAGE
public:
    CommandMessage& operator=(CommandMessage const&) = delete;
    CommandMessage(CommandMessage const&)            = delete;
    CommandMessage()                                 = delete;
#endif

public:
    /**
     * @symbol ??1CommandMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~CommandMessage();
};

}; // namespace CodeBuilder
