#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerChangeDimensionRequestComponent {
public:
    // prevent constructor by default
    PlayerChangeDimensionRequestComponent& operator=(PlayerChangeDimensionRequestComponent const&);
    PlayerChangeDimensionRequestComponent(PlayerChangeDimensionRequestComponent const&);
    PlayerChangeDimensionRequestComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4PlayerChangeDimensionRequestComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PlayerChangeDimensionRequestComponent& operator=(struct PlayerChangeDimensionRequestComponent&&);

    // symbol: ??1PlayerChangeDimensionRequestComponent@@QEAA@XZ
    MCAPI ~PlayerChangeDimensionRequestComponent();

    // NOLINTEND
};
