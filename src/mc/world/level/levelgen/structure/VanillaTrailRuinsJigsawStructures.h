#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrailRuinsJigsawStructures {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATRAILRUINSJIGSAWSTRUCTURES
public:
    VanillaTrailRuinsJigsawStructures& operator=(VanillaTrailRuinsJigsawStructures const&) = delete;
    VanillaTrailRuinsJigsawStructures(VanillaTrailRuinsJigsawStructures const&)            = delete;
    VanillaTrailRuinsJigsawStructures()                                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaTrailRuinsJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class JigsawStructureRegistry&);
};
