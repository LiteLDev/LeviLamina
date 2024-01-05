#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CameraShakeCommand : public ::Command {
public:
    // prevent constructor by default
    CameraShakeCommand& operator=(CameraShakeCommand const&);
    CameraShakeCommand(CameraShakeCommand const&);
    CameraShakeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CameraShakeCommand@@UEAA@XZ
    virtual ~CameraShakeCommand() = default;

    // vIndex: 2, symbol: ?execute@CameraShakeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@CameraShakeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_executeAdd@CameraShakeCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeAdd(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?_executeStop@CameraShakeCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void _executeStop(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
