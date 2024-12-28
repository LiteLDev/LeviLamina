#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChatOptions {
public:
    // prevent constructor by default
    ChatOptions& operator=(ChatOptions const&);
    ChatOptions(ChatOptions const&);
    ChatOptions();
};
