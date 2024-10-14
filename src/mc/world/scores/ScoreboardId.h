#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreboardId {
public:
    // NOLINTBEGIN
    MCAPI ScoreboardId();

    MCAPI explicit ScoreboardId(int64 bytes);

    MCAPI ScoreboardId(struct ScoreboardId const& scoreboardId);

    MCAPI uint64 getHash() const;

    MCAPI class IdentityDefinition const& getIdentityDef() const;

    MCAPI bool isValid() const;

    MCAPI explicit operator bool() const;

    MCAPI bool operator!=(struct ScoreboardId const& rhs) const;

    MCAPI struct ScoreboardId& operator++();

    MCAPI struct ScoreboardId& operator=(struct ScoreboardId const& scoreboardId);

    MCAPI bool operator==(struct ScoreboardId const& rhs) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static struct ScoreboardId& INVALID();

    // NOLINTEND
};
