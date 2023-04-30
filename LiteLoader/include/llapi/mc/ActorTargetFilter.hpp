/**
 * @file  ActorTargetFilter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ActorTargetFilter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTARGETFILTER
public:
    struct ActorTargetFilter& operator=(struct ActorTargetFilter const &) = delete;
    ActorTargetFilter(struct ActorTargetFilter const &) = delete;
    ActorTargetFilter() = delete;
#endif

public:
    /**
     * @symbol ?ConditionPredicates\@ActorTargetFilter\@\@2V?$unordered_map\@VHashedString\@\@P6A_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@ZU?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@P6A_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<class HashedString, bool ( *)(struct ActorTargetFilter const &, class Actor &), struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, bool ( *)(struct ActorTargetFilter const &, class Actor &)>>> ConditionPredicates;

};