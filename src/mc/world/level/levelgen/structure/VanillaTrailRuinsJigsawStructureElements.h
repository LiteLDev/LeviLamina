#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaTrailRuinsJigsawStructureElements {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATRAILRUINSJIGSAWSTRUCTUREELEMENTS
public:
    VanillaTrailRuinsJigsawStructureElements& operator=(VanillaTrailRuinsJigsawStructureElements const&) = delete;
    VanillaTrailRuinsJigsawStructureElements(VanillaTrailRuinsJigsawStructureElements const&)            = delete;
    VanillaTrailRuinsJigsawStructureElements()                                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaTrailRuinsJigsawStructureElements\@\@SAXAEBV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const&, class JigsawStructureRegistry&);
};
