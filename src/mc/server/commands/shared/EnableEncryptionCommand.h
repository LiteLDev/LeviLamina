#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class EnableEncryptionCommand : public ::Command {
public:
    // prevent constructor by default
    EnableEncryptionCommand& operator=(EnableEncryptionCommand const&);
    EnableEncryptionCommand(EnableEncryptionCommand const&);
    EnableEncryptionCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableEncryptionCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, class IMinecraftApp& app);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class IMinecraftApp* mApp;

    // NOLINTEND
};
