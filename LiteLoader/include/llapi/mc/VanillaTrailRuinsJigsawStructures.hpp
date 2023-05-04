/**
 * @file  VanillaTrailRuinsJigsawStructures.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VanillaTrailRuinsJigsawStructures {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATRAILRUINSJIGSAWSTRUCTURES
public:
    class VanillaTrailRuinsJigsawStructures& operator=(class VanillaTrailRuinsJigsawStructures const &) = delete;
    VanillaTrailRuinsJigsawStructures(class VanillaTrailRuinsJigsawStructures const &) = delete;
    VanillaTrailRuinsJigsawStructures() = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaTrailRuinsJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class JigsawStructureRegistry &);

};
