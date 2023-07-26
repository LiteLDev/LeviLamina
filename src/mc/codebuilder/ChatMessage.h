#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {

public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&) = delete;
    ChatMessage(ChatMessage const&)            = delete;
    ChatMessage()                              = delete;

public:
    /**
     * @symbol ??1ChatMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~ChatMessage(); // NOLINT
};

}; // namespace CodeBuilder
