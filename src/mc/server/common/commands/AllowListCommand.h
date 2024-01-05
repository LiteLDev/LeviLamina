#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AllowListCommand {
public:
    // prevent constructor by default
    AllowListCommand& operator=(AllowListCommand const&);
    AllowListCommand(AllowListCommand const&);
    AllowListCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AllowListCommand@@UEAA@XZ
    virtual ~AllowListCommand() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@AllowListCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    // symbol: ?setup@AllowListCommand@@SAXAEAVCommandRegistry@@AEAVAllowListFile@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class AllowListFile&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mAllowListFile@AllowListCommand@@0PEAVAllowListFile@@EA
    MCAPI static class AllowListFile* mAllowListFile;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mAllowListFile() { return mAllowListFile; }

    // NOLINTEND
};
