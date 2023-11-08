#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GetEduServerInfoCommand {
public:
    // prevent constructor by default
    GetEduServerInfoCommand& operator=(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand(GetEduServerInfoCommand const&);
    GetEduServerInfoCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetEduServerInfoCommand@@UEAA@XZ
    virtual ~GetEduServerInfoCommand() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@GetEduServerInfoCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@GetEduServerInfoCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
