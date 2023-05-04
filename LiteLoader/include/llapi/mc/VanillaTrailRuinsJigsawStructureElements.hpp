/**
 * @file  VanillaTrailRuinsJigsawStructureElements.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VanillaTrailRuinsJigsawStructureElements {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLATRAILRUINSJIGSAWSTRUCTUREELEMENTS
public:
    class VanillaTrailRuinsJigsawStructureElements& operator=(class VanillaTrailRuinsJigsawStructureElements const &) = delete;
    VanillaTrailRuinsJigsawStructureElements(class VanillaTrailRuinsJigsawStructureElements const &) = delete;
    VanillaTrailRuinsJigsawStructureElements() = delete;
#endif

public:
    /**
     * @symbol ?initialize\@VanillaTrailRuinsJigsawStructureElements\@\@SAXAEBV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>> const &, class JigsawStructureRegistry &);

};
