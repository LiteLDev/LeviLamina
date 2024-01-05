#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VibrationDataComponent {
public:
    // prevent constructor by default
    VibrationDataComponent& operator=(VibrationDataComponent const&);
    VibrationDataComponent(VibrationDataComponent const&);
    VibrationDataComponent();

public:
    // NOLINTBEGIN
    // symbol: ?clearLastVibrationPos@VibrationDataComponent@@QEAAXXZ
    MCAPI void clearLastVibrationPos();

    // symbol: ?getLastVibrationPos@VibrationDataComponent@@QEBAAEBV?$optional@VBlockPos@@@std@@XZ
    MCAPI std::optional<class BlockPos> const& getLastVibrationPos() const;

    // symbol: ?getTicksSinceLastVibration@VibrationDataComponent@@QEBA?AV?$optional@_K@std@@AEBVILevel@@@Z
    MCAPI std::optional<uint64> getTicksSinceLastVibration(class ILevel const& level) const;

    // symbol: ?setLastVibrationPos@VibrationDataComponent@@QEAAXVBlockPos@@UTick@@@Z
    MCAPI void setLastVibrationPos(class BlockPos pos, struct Tick tick);

    // NOLINTEND
};
