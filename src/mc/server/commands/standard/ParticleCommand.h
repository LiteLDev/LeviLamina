#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ParticleCommand : public ::Command {
public:
    // prevent constructor by default
    ParticleCommand& operator=(ParticleCommand const&) = delete;
    ParticleCommand(ParticleCommand const&)            = delete;
    ParticleCommand()                                  = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?execute@ParticleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ParticleCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
