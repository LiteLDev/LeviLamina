#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaVillageJigsawStructureBlockTagRules {

public:
    // prevent constructor by default
    VanillaVillageJigsawStructureBlockTagRules& operator=(VanillaVillageJigsawStructureBlockTagRules const&) = delete;
    VanillaVillageJigsawStructureBlockTagRules(VanillaVillageJigsawStructureBlockTagRules const&)            = delete;
    VanillaVillageJigsawStructureBlockTagRules()                                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@VanillaVillageJigsawStructureBlockTagRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
    // NOLINTEND
};
