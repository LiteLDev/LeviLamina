#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1e10fb;
    ::ll::UntypedStorage<8, 32> mUnkdc9074;
    ::ll::UntypedStorage<8, 32> mUnka490a2;
    ::ll::UntypedStorage<8, 32> mUnk8af4dc;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&);
    ChatMessage(ChatMessage const&);
    ChatMessage();
};

} // namespace CodeBuilder
