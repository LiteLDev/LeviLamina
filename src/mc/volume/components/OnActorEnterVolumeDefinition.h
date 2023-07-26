#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnActorEnterVolumeDefinition {

public:
    // prevent constructor by default
    OnActorEnterVolumeDefinition& operator=(OnActorEnterVolumeDefinition const&) = delete;
    OnActorEnterVolumeDefinition(OnActorEnterVolumeDefinition const&)            = delete;
    OnActorEnterVolumeDefinition()                                               = delete;

public:
    /**
     * @symbol ??4OnActorEnterVolumeDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct OnActorEnterVolumeDefinition& operator=(struct OnActorEnterVolumeDefinition&&); // NOLINT
    /**
     * @symbol ??1OnActorEnterVolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~OnActorEnterVolumeDefinition(); // NOLINT
    /**
     * @symbol ?bindType\@OnActorEnterVolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NAME\@OnActorEnterVolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME; // NOLINT
};
