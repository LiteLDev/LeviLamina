#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaVillageJigsawStructures {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTURES
public:
    VanillaVillageJigsawStructures& operator=(VanillaVillageJigsawStructures const&) = delete;
    VanillaVillageJigsawStructures(VanillaVillageJigsawStructures const&)            = delete;
    VanillaVillageJigsawStructures()                                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaVillageJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
};
