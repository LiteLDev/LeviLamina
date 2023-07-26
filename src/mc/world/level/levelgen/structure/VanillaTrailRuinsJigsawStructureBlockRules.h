#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaTrailRuinsJigsawStructureBlockRules {

public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructureBlockRules& operator=(VanillaTrailRuinsJigsawStructureBlockRules const&) = delete;
    VanillaTrailRuinsJigsawStructureBlockRules(VanillaTrailRuinsJigsawStructureBlockRules const&)            = delete;
    VanillaTrailRuinsJigsawStructureBlockRules()                                                             = delete;

public:
    /**
     * @symbol ?initialize\@VanillaTrailRuinsJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&); // NOLINT
};
