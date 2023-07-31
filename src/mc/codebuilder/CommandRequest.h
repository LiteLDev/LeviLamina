#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandRequest {

public:
    // prevent constructor by default
    CommandRequest& operator=(CommandRequest const&) = delete;
    CommandRequest(CommandRequest const&)            = delete;
    CommandRequest()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1CommandRequest\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~CommandRequest();
    // NOLINTEND
};

}; // namespace CodeBuilder
