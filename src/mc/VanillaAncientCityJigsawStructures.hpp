/**
 * @file  VanillaAncientCityJigsawStructures.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaAncientCityJigsawStructures.
 *
 */
class VanillaAncientCityJigsawStructures {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAANCIENTCITYJIGSAWSTRUCTURES
public:
    class VanillaAncientCityJigsawStructures& operator=(class VanillaAncientCityJigsawStructures const &) = delete;
    VanillaAncientCityJigsawStructures(class VanillaAncientCityJigsawStructures const &) = delete;
    VanillaAncientCityJigsawStructures() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaAncientCityJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};