/**
 * @file  VanillaBastionJigsawStructures.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaBastionJigsawStructures.
 *
 */
class VanillaBastionJigsawStructures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTURES
public:
    class VanillaBastionJigsawStructures& operator=(class VanillaBastionJigsawStructures const &) = delete;
    VanillaBastionJigsawStructures(class VanillaBastionJigsawStructures const &) = delete;
    VanillaBastionJigsawStructures() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaBastionJigsawStructures\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};