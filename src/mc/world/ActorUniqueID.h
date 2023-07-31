#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {

public:
    long long id;
    ActorUniqueID() { id = -1; }

    explicit ActorUniqueID(long long i) { id = i; }

    [[nodiscard]] inline long long get() const { return id; }

    inline explicit operator long long() const { return id; }
public:
    // NOLINTBEGIN
    /**
     * @symbol ?getHash\@ActorUniqueID\@\@QEBA_KXZ
     */
    MCAPI uint64_t getHash() const;
    /**
     * @symbol ?INVALID_ID\@ActorUniqueID\@\@2U1\@B
     */
    MCAPI static struct ActorUniqueID const INVALID_ID;
    // NOLINTEND
};
