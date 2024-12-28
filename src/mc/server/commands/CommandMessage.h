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

    public:
        // prevent constructor by default
        MessageComponent& operator=(MessageComponent const&);
        MessageComponent(MessageComponent const&);
        MessageComponent();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI MessageComponent(::CommandMessage::MessageComponent&& m);

        MCAPI explicit MessageComponent(::std::string&& s);

        MCAPI explicit MessageComponent(::std::unique_ptr<::CommandSelector<::Actor>>&& s);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::CommandMessage::MessageComponent&& m);

        MCAPI void* $ctor(::std::string&& s);

        MCAPI void* $ctor(::std::unique_ptr<::CommandSelector<::Actor>>&& s);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandMessage::MessageComponent>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&);
    CommandMessage(CommandMessage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandMessage();

    MCAPI ::GenerateMessageResult generateMessage(::CommandOrigin const& origin, int maxLength) const;

    MCAPI ~CommandMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
