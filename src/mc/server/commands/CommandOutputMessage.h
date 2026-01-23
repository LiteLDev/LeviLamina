#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommandOutputMessageType>    mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mMessageId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mParams;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputMessage(CommandOutputMessage const&);
    CommandOutputMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CommandOutputMessage& operator=(::CommandOutputMessage const& rhs);

    MCAPI bool operator==(::CommandOutputMessage const& other) const;
    // NOLINTEND
};
