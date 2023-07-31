#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaBastionJigsawStructureBlockRules {

public:
    // prevent constructor by default
    VanillaBastionJigsawStructureBlockRules& operator=(VanillaBastionJigsawStructureBlockRules const&) = delete;
    VanillaBastionJigsawStructureBlockRules(VanillaBastionJigsawStructureBlockRules const&)            = delete;
    VanillaBastionJigsawStructureBlockRules()                                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?initialize\@VanillaBastionJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
    // NOLINTEND
};
