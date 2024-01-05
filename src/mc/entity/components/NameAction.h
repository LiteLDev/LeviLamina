#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NameAction {
public:
    // prevent constructor by default
    NameAction& operator=(NameAction const&);
    NameAction();

public:
    // NOLINTBEGIN
    // symbol: ??0NameAction@@QEAA@AEBU0@@Z
    MCAPI NameAction(struct NameAction const&);

    // symbol: ?addNameFilterByName@NameAction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void addNameFilterByName(std::string const& name);

    // symbol: ??1NameAction@@QEAA@XZ
    MCAPI ~NameAction();

    // NOLINTEND
};
