#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScorePacketInfo {
public:
    // prevent constructor by default
    ScorePacketInfo& operator=(ScorePacketInfo const&);
    ScorePacketInfo(ScorePacketInfo const&);
    ScorePacketInfo();

public:
    // NOLINTBEGIN
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&);

    MCAPI ~ScorePacketInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
