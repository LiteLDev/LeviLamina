/**
 * @file  LegacyActorExtractApplySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?createApplySystem\@LegacyActorExtractApplySystem\@\@SA?AUTickingSystemWithInfo\@\@AEBV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createApplySystem(std::vector<unsigned int> const &, bool);
    /**
     * @symbol  ?createExtractSystem\@LegacyActorExtractApplySystem\@\@SA?AUTickingSystemWithInfo\@\@AEBV?$vector\@IV?$allocator\@I\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createExtractSystem(std::vector<unsigned int> const &, bool);

};