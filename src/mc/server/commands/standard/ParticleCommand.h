#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ParticleCommand : public ::Command {
public:
    // prevent constructor by default
    ParticleCommand& operator=(ParticleCommand const&);
    ParticleCommand(ParticleCommand const&);
    ParticleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ParticleCommand@@UEAA@XZ
    virtual ~ParticleCommand() = default;

    // vIndex: 2, symbol: ?execute@ParticleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ParticleCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
