/**
 * @file  VanillaBastionJigsawStructureElements.hpp
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
 * @brief MC class VanillaBastionJigsawStructureElements.
 *
 */
class VanillaBastionJigsawStructureElements {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABASTIONJIGSAWSTRUCTUREELEMENTS
public:
    class VanillaBastionJigsawStructureElements& operator=(class VanillaBastionJigsawStructureElements const &) = delete;
    VanillaBastionJigsawStructureElements(class VanillaBastionJigsawStructureElements const &) = delete;
    VanillaBastionJigsawStructureElements() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaBastionJigsawStructureElements\@\@SAXV?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@gsl\@\@AEAVFeatureRegistry\@\@AEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class FeatureRegistry &, class JigsawStructureRegistry &);

};