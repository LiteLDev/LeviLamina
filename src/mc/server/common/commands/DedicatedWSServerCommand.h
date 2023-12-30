#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DedicatedWSServerCommand {
public:
    // prevent constructor by default
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand(DedicatedWSServerCommand const&);
    DedicatedWSServerCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DedicatedWSServerCommand@@UEAA@XZ
    virtual ~DedicatedWSServerCommand() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@DedicatedWSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@DedicatedWSServerCommand@@SAXAEAVCommandRegistry@@AEAVIMinecraftApp@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class IMinecraftApp& app);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mApp@DedicatedWSServerCommand@@0PEAVIMinecraftApp@@EA
    MCAPI static class IMinecraftApp* mApp;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mApp() { return mApp; }

    // NOLINTEND
};
