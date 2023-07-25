#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaAncientCityJigsawStructureElements {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAANCIENTCITYJIGSAWSTRUCTUREELEMENTS
public:
    VanillaAncientCityJigsawStructureElements& operator=(VanillaAncientCityJigsawStructureElements const&) = delete;
    VanillaAncientCityJigsawStructureElements(VanillaAncientCityJigsawStructureElements const&)            = delete;
    VanillaAncientCityJigsawStructureElements()                                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaAncientCityJigsawStructureElements\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
};
