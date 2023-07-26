/**
 * @file  VanillaVillageJigsawStructureActorRules.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaVillageJigsawStructureActorRules.
 *
 */
class VanillaVillageJigsawStructureActorRules {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTUREACTORRULES
public:
    class VanillaVillageJigsawStructureActorRules& operator=(class VanillaVillageJigsawStructureActorRules const &) = delete;
    VanillaVillageJigsawStructureActorRules(class VanillaVillageJigsawStructureActorRules const &) = delete;
    VanillaVillageJigsawStructureActorRules() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VanillaVillageJigsawStructureActorRules\@\@SAXAEAVJigsawStructureRegistry\@\@\@Z
     */
    MCAPI static void initialize(class JigsawStructureRegistry &);

};