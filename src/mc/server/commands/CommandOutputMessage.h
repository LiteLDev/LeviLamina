#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    CommandOutputMessageType mType;
    std::string              mMessageId;
    std::vector<std::string> mParams;
};
