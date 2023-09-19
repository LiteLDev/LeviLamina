#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {
public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&);
    ChatMessage(ChatMessage const&);
    ChatMessage();

public:
    // NOLINTBEGIN
    // symbol: ??1ChatMessage@CodeBuilder@@QEAA@XZ
    MCAPI ~ChatMessage();

    // NOLINTEND
};

}; // namespace CodeBuilder
