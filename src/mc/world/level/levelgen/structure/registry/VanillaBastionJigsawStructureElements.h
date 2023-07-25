#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaBastionJigsawStructureElements {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTUREELEMENTS
public:
    VanillaBastionJigsawStructureElements& operator=(VanillaBastionJigsawStructureElements const&) = delete;
    VanillaBastionJigsawStructureElements(VanillaBastionJigsawStructureElements const&)            = delete;
    VanillaBastionJigsawStructureElements()                                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaBastionJigsawStructureElements\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
};
