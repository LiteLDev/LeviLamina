#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"

namespace npc {

struct StoredCommand {
public:
    // prevent constructor by default
    StoredCommand& operator=(StoredCommand const&);
    StoredCommand(StoredCommand const&);
    StoredCommand();

public:
    // NOLINTBEGIN
    // symbol: ??0StoredCommand@npc@@QEAA@W4CurrentCmdVersion@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI StoredCommand(::CurrentCmdVersion, std::string_view);

    // symbol: ??1StoredCommand@npc@@QEAA@XZ
    MCAPI ~StoredCommand();

    // NOLINTEND
};

}; // namespace npc
