#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaAncientCityJigsawStructureBlockRules {

public:
    // prevent constructor by default
    VanillaAncientCityJigsawStructureBlockRules& operator=(VanillaAncientCityJigsawStructureBlockRules const&) = delete;
    VanillaAncientCityJigsawStructureBlockRules(VanillaAncientCityJigsawStructureBlockRules const&)            = delete;
    VanillaAncientCityJigsawStructureBlockRules()                                                              = delete;

public:
    /**
     * @symbol ?initialize\@VanillaAncientCityJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&); // NOLINT
};
