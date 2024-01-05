#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientVibrationComponent {
public:
    // prevent constructor by default
    ClientVibrationComponent& operator=(ClientVibrationComponent const&);
    ClientVibrationComponent(ClientVibrationComponent const&);
    ClientVibrationComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getTicksSinceLastVibration@ClientVibrationComponent@@QEBA?AV?$optional@_K@std@@AEBVILevel@@@Z
    MCAPI std::optional<uint64> getTicksSinceLastVibration(class ILevel const& level) const;

    // symbol: ?setLastVibrationTick@ClientVibrationComponent@@QEAAXUTick@@@Z
    MCAPI void setLastVibrationTick(struct Tick);

    // NOLINTEND
};
