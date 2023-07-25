#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandRequest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_COMMANDREQUEST
public:
    CommandRequest& operator=(CommandRequest const&) = delete;
    CommandRequest(CommandRequest const&)            = delete;
    CommandRequest()                                 = delete;
#endif

public:
    /**
     * @symbol ??1CommandRequest\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~CommandRequest();
};

}; // namespace CodeBuilder
