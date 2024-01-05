#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChangeSettingCommand {
public:
    // prevent constructor by default
    ChangeSettingCommand& operator=(ChangeSettingCommand const&);
    ChangeSettingCommand(ChangeSettingCommand const&);
    ChangeSettingCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ChangeSettingCommand@@UEAA@XZ
    virtual ~ChangeSettingCommand() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@ChangeSettingCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    // symbol: ?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
