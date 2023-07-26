/**
 * @file  StructurePoolActorRule.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolActorRule.
 *
 */
class StructurePoolActorRule {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLACTORRULE
public:
    class StructurePoolActorRule& operator=(class StructurePoolActorRule const &) = delete;
    StructurePoolActorRule(class StructurePoolActorRule const &) = delete;
    StructurePoolActorRule() = delete;
#endif

public:
    /**
     * @symbol  ??0StructurePoolActorRule\@\@QEAA\@$$QEAV?$unique_ptr\@VIStructurePoolActorPredicate\@\@U?$default_delete\@VIStructurePoolActorPredicate\@\@\@std\@\@\@std\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@2\@\@Z
     */
    MCAPI StructurePoolActorRule(std::unique_ptr<class IStructurePoolActorPredicate> &&, std::string);
    /**
     * @symbol  ?processRule\@StructurePoolActorRule\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV23\@\@Z
     */
    MCAPI bool processRule(std::string const &, std::string &) const;

};