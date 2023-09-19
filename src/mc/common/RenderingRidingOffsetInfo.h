#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderingRidingOffsetInfo {
public:
    // prevent constructor by default
    RenderingRidingOffsetInfo& operator=(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo(RenderingRidingOffsetInfo const&);
    RenderingRidingOffsetInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0RenderingRidingOffsetInfo@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI RenderingRidingOffsetInfo(std::string const&, std::string const&);

    // symbol: ??1RenderingRidingOffsetInfo@@QEAA@XZ
    MCAPI ~RenderingRidingOffsetInfo();

    // NOLINTEND
};
