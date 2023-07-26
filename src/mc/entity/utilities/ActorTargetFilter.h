#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorTargetFilter {

public:
    // prevent constructor by default
    ActorTargetFilter& operator=(ActorTargetFilter const&) = delete;
    ActorTargetFilter(ActorTargetFilter const&)            = delete;
    ActorTargetFilter()                                    = delete;

public:
    /**
     * @symbol
     * ?ConditionPredicates\@ActorTargetFilter\@\@2V?$unordered_map\@VHashedString\@\@P6A_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@ZU?$hash\@VHashedString\@\@\@std\@\@U?$equal_to\@VHashedString\@\@\@5\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@P6A_NAEBUActorTargetFilter\@\@AEAVActor\@\@\@Z\@std\@\@\@5\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<
        class HashedString,
        bool (*)(struct ActorTargetFilter const&, class Actor&),
        struct std::hash<class HashedString>,
        struct std::equal_to<class HashedString>,
        class std::allocator<
            struct std::pair<class HashedString const, bool (*)(struct ActorTargetFilter const&, class Actor&)>>>
        ConditionPredicates; // NOLINT
};
