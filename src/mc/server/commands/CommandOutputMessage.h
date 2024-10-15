#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class CommandOutputMessage const& rhs);

    MCAPI void* ctor$(class CommandOutputMessage&& rhs);

    MCAPI void* ctor$(::CommandOutputMessageType type, std::string const& msgId, std::vector<std::string>&& params);

    MCAPI void dtor$();

    // NOLINTEND
};
