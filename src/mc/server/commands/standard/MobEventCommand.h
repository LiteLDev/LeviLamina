#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class MobEventCommand : public ::Command {
public:
    // MobEventCommand inner types declare
    // clang-format off
    struct InitProxy;
    // clang-format on

    // MobEventCommand inner types define
    struct InitProxy {
    public:
        // prevent constructor by default
        InitProxy& operator=(InitProxy const&);
        InitProxy(InitProxy const&);
        InitProxy();

    public:
        // NOLINTBEGIN
        MCAPI explicit InitProxy(class ServerLevel& level);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    MobEventCommand& operator=(MobEventCommand const&);
    MobEventCommand(MobEventCommand const&);
    MobEventCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MobEventCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, struct MobEventCommand::InitProxy&& dependencies);

    // NOLINTEND
};
