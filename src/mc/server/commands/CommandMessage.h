#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"

class CommandMessage {
public:
    // CommandMessage inner types declare
    // clang-format off
    struct MessageComponent;
    // clang-format on

    // CommandMessage inner types define
    struct MessageComponent {
    public:
        std::string                                   string;
        std::unique_ptr<CommandSelector<class Actor>> selection;

    public:
        // NOLINTBEGIN
        MCAPI explicit MessageComponent(std::string&& s);

        MCAPI explicit MessageComponent(std::unique_ptr<class CommandSelector<class Actor>>&& s);

        MCAPI MessageComponent(struct CommandMessage::MessageComponent&& m);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        // NOLINTEND
    };

public:
    std::vector<MessageComponent> components;

public:
    // NOLINTBEGIN
    MCAPI struct GenerateMessageResult generateMessage(class CommandOrigin const& origin, int maxLength) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
