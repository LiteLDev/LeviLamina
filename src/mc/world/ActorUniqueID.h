#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUNIQUEID
public:
    ActorUniqueID& operator=(ActorUniqueID const&) = delete;
    ActorUniqueID(ActorUniqueID const&)            = delete;
    ActorUniqueID()                                = delete;
#endif

public:
    /**
     * @symbol ?getHash\@ActorUniqueID\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?INVALID_ID\@ActorUniqueID\@\@2U1\@B
     */
    MCAPI static struct ActorUniqueID const INVALID_ID;
};
