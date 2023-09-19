#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/ICommandDispatcher.h"

class CommandDispatcher : public ::ICommandDispatcher {
public:
    // prevent constructor by default
    CommandDispatcher& operator=(CommandDispatcher const&);
    CommandDispatcher(CommandDispatcher const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?performCommand@CommandDispatcher@@UEAAHAEBVCommandOrigin@@AEAVCommand@@@Z
    virtual int performCommand(class CommandOrigin const&, class Command&);

    // symbol: ??0CommandDispatcher@@QEAA@XZ
    MCAPI CommandDispatcher();

    // NOLINTEND
};
