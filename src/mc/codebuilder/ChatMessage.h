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
    MCAPI ~ChatMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
