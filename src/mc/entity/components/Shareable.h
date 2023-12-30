#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Shareable {
public:
    // prevent constructor by default
    Shareable& operator=(Shareable const&);
    Shareable(Shareable const&);
    Shareable();

public:
    // NOLINTBEGIN
    // symbol: ?setCraftInto@Shareable@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCraftInto(std::string const& name);

    // symbol: ?setItem@Shareable@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setItem(std::string const& name);

    // NOLINTEND
};
