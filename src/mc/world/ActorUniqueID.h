#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {

public:
    int64_t id;
    ActorUniqueID() { id = -1; }

    explicit ActorUniqueID(int64_t i) { id = i; }

    [[nodiscard]] constexpr int64_t get() const { return id; }

    constexpr explicit operator int64_t() const { return id; }

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
