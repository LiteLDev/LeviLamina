/**
 * @file  VanillaAncientCityJigsawStructureElements.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaAncientCityJigsawStructureElements.
 *
 */
class VanillaAncientCityJigsawStructureElements {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAANCIENTCITYJIGSAWSTRUCTUREELEMENTS
public:
    class VanillaAncientCityJigsawStructureElements& operator=(class VanillaAncientCityJigsawStructureElements const &) = delete;
    VanillaAncientCityJigsawStructureElements(class VanillaAncientCityJigsawStructureElements const &) = delete;
    VanillaAncientCityJigsawStructureElements() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaAncientCityJigsawStructureElements\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};