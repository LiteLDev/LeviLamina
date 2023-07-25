#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnActorLeaveVolumeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORLEAVEVOLUMEDEFINITION
public:
    OnActorLeaveVolumeDefinition& operator=(OnActorLeaveVolumeDefinition const&) = delete;
    OnActorLeaveVolumeDefinition(OnActorLeaveVolumeDefinition const&)            = delete;
    OnActorLeaveVolumeDefinition()                                               = delete;
#endif

public:
    /**
     * @symbol ??4OnActorLeaveVolumeDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct OnActorLeaveVolumeDefinition& operator=(struct OnActorLeaveVolumeDefinition&&);
    /**
     * @symbol ??1OnActorLeaveVolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~OnActorLeaveVolumeDefinition();
    /**
     * @symbol
     * ?NAME\@OnActorLeaveVolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol ?bindType\@OnActorLeaveVolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
};
