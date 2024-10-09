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
    MCAPI std::optional<uint64> getTicksSinceLastVibration(class ILevel const& level) const;

    MCAPI void setLastVibrationTick(struct Tick lastVibrationTick);

    // NOLINTEND
};
