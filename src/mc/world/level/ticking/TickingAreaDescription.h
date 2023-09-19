#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingAreaDescription {
public:
    // prevent constructor by default
    TickingAreaDescription& operator=(TickingAreaDescription const&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription();

public:
    // NOLINTBEGIN
    // symbol: ?asString@TickingAreaDescription@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string asString() const;

    // symbol: ??1TickingAreaDescription@@QEAA@XZ
    MCAPI ~TickingAreaDescription();

    // NOLINTEND
};
