#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    CommandOutputMessageType mType;
    std::string              mMessageId;
    std::vector<std::string> mParams;

    // prevent constructor by default
    CommandOutputMessage& operator=(CommandOutputMessage const&);
    CommandOutputMessage();

public:
    // NOLINTBEGIN
    MCAPI CommandOutputMessage(class CommandOutputMessage&& rhs);

    MCAPI CommandOutputMessage(class CommandOutputMessage const& rhs);

    MCAPI
    CommandOutputMessage(::CommandOutputMessageType type, std::string const& msgId, std::vector<std::string>&& params);

    MCAPI std::string const& getMessageId() const;

    MCAPI std::vector<std::string> const& getParams() const;

    MCAPI ::CommandOutputMessageType getType() const;

    MCAPI ~CommandOutputMessage();

    // NOLINTEND
};
