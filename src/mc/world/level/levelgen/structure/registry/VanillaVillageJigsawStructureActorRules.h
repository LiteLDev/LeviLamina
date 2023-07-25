#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureActorRules {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREACTORRULES
public:
    VanillaVillageJigsawStructureActorRules& operator=(VanillaVillageJigsawStructureActorRules const&) = delete;
    VanillaVillageJigsawStructureActorRules(VanillaVillageJigsawStructureActorRules const&)            = delete;
    VanillaVillageJigsawStructureActorRules()                                                          = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureActorRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
};
