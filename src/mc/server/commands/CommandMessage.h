#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
struct GenerateMessageResult;
// clang-format on

class CommandMessage {
public:
    // CommandMessage inner types declare
    // clang-format off
    struct MessageComponent;
    // clang-format on

    // CommandMessage inner types define
    struct MessageComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                string;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandSelector<::Actor>>> selection;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandMessage::MessageComponent>> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::GenerateMessageResult generateMessage(::CommandOrigin const& origin, int maxLength) const;
    // NOLINTEND
};
