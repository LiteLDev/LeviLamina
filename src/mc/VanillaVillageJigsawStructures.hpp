/**
 * @file  VanillaVillageJigsawStructures.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaVillageJigsawStructures.
 *
 */
class VanillaVillageJigsawStructures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTURES
public:
    class VanillaVillageJigsawStructures& operator=(class VanillaVillageJigsawStructures const &) = delete;
    VanillaVillageJigsawStructures(class VanillaVillageJigsawStructures const &) = delete;
    VanillaVillageJigsawStructures() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaVillageJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};