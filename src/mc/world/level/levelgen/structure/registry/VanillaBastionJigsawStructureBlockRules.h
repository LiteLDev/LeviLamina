#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaBastionJigsawStructureBlockRules {
public:
    // prevent constructor by default
    VanillaBastionJigsawStructureBlockRules& operator=(VanillaBastionJigsawStructureBlockRules const&);
    VanillaBastionJigsawStructureBlockRules(VanillaBastionJigsawStructureBlockRules const&);
    VanillaBastionJigsawStructureBlockRules();

public:
    // NOLINTBEGIN
    MCAPI static void initialize(class JigsawStructureRegistry& jigsawRegistry);

    // NOLINTEND
};
