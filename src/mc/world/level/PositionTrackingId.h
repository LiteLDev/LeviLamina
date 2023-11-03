#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionTrackingId {
public:
    // prevent constructor by default
    PositionTrackingId();

public:
    // NOLINTBEGIN
    // symbol: ??0PositionTrackingId@@QEAA@$$QEAV0@@Z
    MCAPI PositionTrackingId(class PositionTrackingId&&);

    // symbol: ??0PositionTrackingId@@QEAA@AEBV0@@Z
    MCAPI PositionTrackingId(class PositionTrackingId const&);

    // symbol: ?fromTag@PositionTrackingId@@QEAAXPEBVTag@@@Z
    MCAPI void fromTag(class Tag const*);

    // symbol: ?getTag@PositionTrackingId@@QEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class Tag> getTag() const;

    // symbol: ??4PositionTrackingId@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId&&);

    // symbol: ??4PositionTrackingId@@QEAAAEAV0@AEBV0@@Z
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId const&);

    // symbol: ?toString@PositionTrackingId@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const toString() const;

    // symbol: ?INVALID_ID@PositionTrackingId@@2V1@B
    MCAPI static class PositionTrackingId const INVALID_ID;

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?sNextId@PositionTrackingId@@1IA
    MCAPI static uint sNextId;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $sNextId() { return sNextId; }

    // NOLINTEND
};
