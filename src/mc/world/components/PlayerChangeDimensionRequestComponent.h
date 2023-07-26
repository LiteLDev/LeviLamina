#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerChangeDimensionRequestComponent {

public:
    // prevent constructor by default
    PlayerChangeDimensionRequestComponent& operator=(PlayerChangeDimensionRequestComponent const&) = delete;
    PlayerChangeDimensionRequestComponent(PlayerChangeDimensionRequestComponent const&)            = delete;
    PlayerChangeDimensionRequestComponent()                                                        = delete;

public:
    /**
     * @symbol ??4PlayerChangeDimensionRequestComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PlayerChangeDimensionRequestComponent&
    operator=(struct PlayerChangeDimensionRequestComponent&&); // NOLINT
    /**
     * @symbol ??1PlayerChangeDimensionRequestComponent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerChangeDimensionRequestComponent(); // NOLINT
};
