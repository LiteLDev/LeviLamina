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
    MCAPI void clearLastVibrationPos();

    MCAPI std::optional<class BlockPos> const& getLastVibrationPos() const;

    MCAPI std::optional<uint64> getTicksSinceLastVibration(class ILevel const& level) const;

    MCAPI void setLastVibrationPos(class BlockPos pos, struct Tick tick);

    // NOLINTEND
};
