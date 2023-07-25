#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class VanillaAncientCityJigsawStructures {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAANCIENTCITYJIGSAWSTRUCTURES
public:
    VanillaAncientCityJigsawStructures& operator=(VanillaAncientCityJigsawStructures const&) = delete;
    VanillaAncientCityJigsawStructures(VanillaAncientCityJigsawStructures const&)            = delete;
    VanillaAncientCityJigsawStructures()                                                     = delete;
#endif

public:
    /**
     * @symbol
     * ?initialize\@VanillaAncientCityJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void
    initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry&, class JigsawStructureRegistry&);
};
