#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureActorRules {

public:
    // prevent constructor by default
    VanillaVillageJigsawStructureActorRules& operator=(VanillaVillageJigsawStructureActorRules const&) = delete;
    VanillaVillageJigsawStructureActorRules(VanillaVillageJigsawStructureActorRules const&)            = delete;
    VanillaVillageJigsawStructureActorRules()                                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureActorRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
    // NOLINTEND
};
