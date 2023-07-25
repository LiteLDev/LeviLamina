#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaVillageJigsawStructureElements {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREELEMENTS
public:
    VanillaVillageJigsawStructureElements& operator=(VanillaVillageJigsawStructureElements const&) = delete;
    VanillaVillageJigsawStructureElements(VanillaVillageJigsawStructureElements const&)            = delete;
    VanillaVillageJigsawStructureElements()                                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaVillageJigsawStructureElements\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
};
