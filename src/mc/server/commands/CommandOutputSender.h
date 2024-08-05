#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

class CommandOutputSender {
public:
    // prevent constructor by default
    CommandOutputSender& operator=(CommandOutputSender const&);
    CommandOutputSender(CommandOutputSender const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOutputSender() = default;

    // vIndex: 1
    virtual void send(class CommandOrigin const& origin, class CommandOutput const& output);

    // vIndex: 2
    virtual void registerOutputCallback(std::function<void(class AutomationCmdOutput&)> const& callback);

    MCAPI CommandOutputSender();

    MCAPI void sendToAdmins(
        class CommandOrigin const& origin,
        class CommandOutput const& output,
        ::CommandPermissionLevel   opPermLevel
    );

    MCAPI static std::vector<std::string> translate(std::vector<std::string> const& in);

    // NOLINTEND
};
