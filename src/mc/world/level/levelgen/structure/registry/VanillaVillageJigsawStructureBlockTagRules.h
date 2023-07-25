#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockTagRules {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREBLOCKTAGRULES
public:
    VanillaVillageJigsawStructureBlockTagRules& operator=(VanillaVillageJigsawStructureBlockTagRules const&) = delete;
    VanillaVillageJigsawStructureBlockTagRules(VanillaVillageJigsawStructureBlockTagRules const&)            = delete;
    VanillaVillageJigsawStructureBlockTagRules()                                                             = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureBlockTagRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
};
