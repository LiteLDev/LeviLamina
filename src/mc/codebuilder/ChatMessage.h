#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_CHATMESSAGE
public:
    ChatMessage& operator=(ChatMessage const&) = delete;
    ChatMessage(ChatMessage const&)            = delete;
    ChatMessage()                              = delete;
#endif

public:
    /**
     * @symbol ??1ChatMessage\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~ChatMessage();
};

}; // namespace CodeBuilder
