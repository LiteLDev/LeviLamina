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
    MCAPI static void initialize(struct StructureTemplateRegistrationContext&, class JigsawStructureRegistry&);

    MCAPI static std::string_view const START;

    // NOLINTEND
};
