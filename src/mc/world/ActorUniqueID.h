#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {

public:
    // prevent constructor by default
    ActorUniqueID& operator=(ActorUniqueID const&) = delete;
    ActorUniqueID(ActorUniqueID const&)            = delete;
    ActorUniqueID()                                = delete;

public:
    /**
     * @symbol ?getHash\@ActorUniqueID\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const; // NOLINT
    /**
     * @symbol ?INVALID_ID\@ActorUniqueID\@\@2U1\@B
     */
    MCAPI static struct ActorUniqueID const INVALID_ID; // NOLINT
};
