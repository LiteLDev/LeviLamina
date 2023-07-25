#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockRules {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREBLOCKRULES
public:
    VanillaVillageJigsawStructureBlockRules& operator=(VanillaVillageJigsawStructureBlockRules const&) = delete;
    VanillaVillageJigsawStructureBlockRules(VanillaVillageJigsawStructureBlockRules const&)            = delete;
    VanillaVillageJigsawStructureBlockRules()                                                          = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
};
