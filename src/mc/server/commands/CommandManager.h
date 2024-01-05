#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/common/CommandOriginSystem.h"
#include "mc/enums/CurrentCmdVersion.h"

class CommandManager {
public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&);
    CommandManager(CommandManager const&);
    CommandManager();

public:
    // NOLINTBEGIN
    // symbol: ??0CommandManager@@QEAA@AEAVMinecraftCommands@@@Z
    MCAPI explicit CommandManager(class MinecraftCommands& commands);

    // symbol: ?getCommands@CommandManager@@QEAAAEAVMinecraftCommands@@XZ
    MCAPI class MinecraftCommands& getCommands();

    // symbol: ?getFunctionManager@CommandManager@@QEAAAEAVFunctionManager@@XZ
    MCAPI class FunctionManager& getFunctionManager();

    // symbol:
    // ?initialize@CommandManager@@QEAAXV?$unique_ptr@VFunctionManager@@U?$default_delete@VFunctionManager@@@std@@@std@@@Z
    MCAPI void initialize(std::unique_ptr<class FunctionManager> functionManager);

    // symbol: ?loadFunctionManager@CommandManager@@QEAAXAEAVResourcePackManager@@@Z
    MCAPI void loadFunctionManager(class ResourcePackManager& resourcePackManager);

    // symbol: ?runCommand@CommandManager@@QEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
    MCAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    // symbol:
    // ?runCommand@CommandManager@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
    MCAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    // symbol: ?tick@CommandManager@@QEAAXXZ
    MCAPI void tick();

    // symbol: ??1CommandManager@@QEAA@XZ
    MCAPI ~CommandManager();

    // NOLINTEND
};
