#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VanillaBastionJigsawStructureBlockRules {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTUREBLOCKRULES
public:
    VanillaBastionJigsawStructureBlockRules& operator=(VanillaBastionJigsawStructureBlockRules const&) = delete;
    VanillaBastionJigsawStructureBlockRules(VanillaBastionJigsawStructureBlockRules const&)            = delete;
    VanillaBastionJigsawStructureBlockRules()                                                          = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaBastionJigsawStructureBlockRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry&);
};
