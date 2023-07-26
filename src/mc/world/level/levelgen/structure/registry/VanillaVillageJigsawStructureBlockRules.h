#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockRules {

public:
    // prevent constructor by default
    VanillaVillageJigsawStructureBlockRules& operator=(VanillaVillageJigsawStructureBlockRules const&) = delete;
    VanillaVillageJigsawStructureBlockRules(VanillaVillageJigsawStructureBlockRules const&)            = delete;
    VanillaVillageJigsawStructureBlockRules()                                                          = delete;

public:
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&); // NOLINT
};
