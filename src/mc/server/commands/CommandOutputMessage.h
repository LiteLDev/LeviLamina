#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::CommandOutputMessageType   mType;
    ::std::string                mMessageId;
    ::std::vector<::std::string> mParams;
    // NOLINTEND

    CommandOutputMessage(
        ::CommandOutputMessageType   type,
        ::std::string                messageId,
        ::std::vector<::std::string> params = {}
    )
    : mType(type),
      mMessageId(std::move(messageId)),
      mParams(std::move(params)) {}

public:
    CommandOutputMessage& operator=(CommandOutputMessage const&) = default;
    CommandOutputMessage(CommandOutputMessage const&)            = default;
    CommandOutputMessage()                                       = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CommandOutputMessage& operator=(::CommandOutputMessage const& rhs);

    MCAPI bool operator==(::CommandOutputMessage const& other) const;
    // NOLINTEND
};
