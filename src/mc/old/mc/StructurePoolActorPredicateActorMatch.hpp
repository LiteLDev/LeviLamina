/**
 * @file  StructurePoolActorPredicateActorMatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolActorPredicateActorMatch.
 *
 */
class StructurePoolActorPredicateActorMatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLACTORPREDICATEACTORMATCH
public:
    class StructurePoolActorPredicateActorMatch& operator=(class StructurePoolActorPredicateActorMatch const &) = delete;
    StructurePoolActorPredicateActorMatch(class StructurePoolActorPredicateActorMatch const &) = delete;
    StructurePoolActorPredicateActorMatch() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructurePoolActorPredicateActorMatch();
    /**
     * @vftbl  1
     * @symbol  ?test\@StructurePoolActorPredicateActorMatch\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool test(std::string const &) const;
    /**
     * @symbol  ??0StructurePoolActorPredicateActorMatch\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI StructurePoolActorPredicateActorMatch(std::string);

};