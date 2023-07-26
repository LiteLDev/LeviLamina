#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnActorLeaveVolumeDefinition {

public:
    // prevent constructor by default
    OnActorLeaveVolumeDefinition& operator=(OnActorLeaveVolumeDefinition const&) = delete;
    OnActorLeaveVolumeDefinition(OnActorLeaveVolumeDefinition const&)            = delete;
    OnActorLeaveVolumeDefinition()                                               = delete;

public:
    /**
     * @symbol ??4OnActorLeaveVolumeDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct OnActorLeaveVolumeDefinition& operator=(struct OnActorLeaveVolumeDefinition&&); // NOLINT
    /**
     * @symbol ??1OnActorLeaveVolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~OnActorLeaveVolumeDefinition(); // NOLINT
    /**
     * @symbol ?bindType\@OnActorLeaveVolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NAME\@OnActorLeaveVolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME; // NOLINT
};
