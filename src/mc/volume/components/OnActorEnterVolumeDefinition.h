#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OnActorEnterVolumeDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONACTORENTERVOLUMEDEFINITION
public:
    OnActorEnterVolumeDefinition& operator=(OnActorEnterVolumeDefinition const&) = delete;
    OnActorEnterVolumeDefinition(OnActorEnterVolumeDefinition const&)            = delete;
    OnActorEnterVolumeDefinition()                                               = delete;
#endif

public:
    /**
     * @symbol ??4OnActorEnterVolumeDefinition\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct OnActorEnterVolumeDefinition& operator=(struct OnActorEnterVolumeDefinition&&);
    /**
     * @symbol ??1OnActorEnterVolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~OnActorEnterVolumeDefinition();
    /**
     * @symbol
     * ?NAME\@OnActorEnterVolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol ?bindType\@OnActorEnterVolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
};
