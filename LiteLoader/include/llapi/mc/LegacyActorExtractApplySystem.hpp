/**
 * @file  LegacyActorExtractApplySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyActorExtractApplySystem.
 *
 */
class LegacyActorExtractApplySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYACTOREXTRACTAPPLYSYSTEM
public:
    class LegacyActorExtractApplySystem& operator=(class LegacyActorExtractApplySystem const &) = delete;
    LegacyActorExtractApplySystem(class LegacyActorExtractApplySystem const &) = delete;
    LegacyActorExtractApplySystem() = delete;
#endif

public:
    /**
     * @hash   -2128377967
     * @symbol ?createApplySystem@LegacyActorExtractApplySystem@@SA?AUTickingSystemWithInfo@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z
     */
    MCAPI static struct TickingSystemWithInfo createApplySystem(std::vector<unsigned int> const &);
    /**
     * @hash   -1561879269
     * @symbol ?createExtractSystem@LegacyActorExtractApplySystem@@SA?AUTickingSystemWithInfo@@AEBV?$vector@IV?$allocator@I@std@@@std@@@Z
     */
    MCAPI static struct TickingSystemWithInfo createExtractSystem(std::vector<unsigned int> const &);

};