#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandMessage {

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&) = delete;
    CommandMessage(CommandMessage const&)            = delete;
    CommandMessage()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1CommandMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~CommandMessage();
    // NOLINTEND
};

}; // namespace CodeBuilder
