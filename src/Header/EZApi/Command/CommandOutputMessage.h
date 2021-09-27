#pragma once

#include <string>
#include <vector>

#include "CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    CommandOutputMessageType type;
    std::string              message_id;
    std::vector<std::string> params;
};