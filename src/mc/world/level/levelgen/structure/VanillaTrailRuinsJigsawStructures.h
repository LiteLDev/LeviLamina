#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaTrailRuinsJigsawStructures {
public:
    // prevent constructor by default
    VanillaTrailRuinsJigsawStructures& operator=(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures(VanillaTrailRuinsJigsawStructures const&);
    VanillaTrailRuinsJigsawStructures();

public:
    // NOLINTBEGIN
    // symbol:
    // ?initialize@VanillaTrailRuinsJigsawStructures@@SAXAEAUStructureTemplateRegistrationContext@@AEAVJigsawStructureRegistry@@@Z
    MCAPI static void initialize(struct StructureTemplateRegistrationContext&, class JigsawStructureRegistry&);

    // symbol: ?START@VanillaTrailRuinsJigsawStructures@@2V?$basic_string_view@DU?$char_traits@D@std@@@std@@B
    MCAPI static std::string_view const START;

    // NOLINTEND
};
