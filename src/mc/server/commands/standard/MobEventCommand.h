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
        // symbol: ??0InitProxy@MobEventCommand@@QEAA@AEAVServerLevel@@@Z
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
    // vIndex: 0, symbol: __gen_??1MobEventCommand@@UEAA@XZ
    virtual ~MobEventCommand() = default;

    // vIndex: 2, symbol: ?execute@MobEventCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@MobEventCommand@@SAXAEAVCommandRegistry@@$$QEAUInitProxy@1@@Z
    MCAPI static void setup(class CommandRegistry& registry, struct MobEventCommand::InitProxy&& dependencies);

    // NOLINTEND
};
