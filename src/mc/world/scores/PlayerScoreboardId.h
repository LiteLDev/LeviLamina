#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mActorUniqueId;
    // NOLINTEND

public:
    bool operator==(PlayerScoreboardId const& rhs) const { return mActorUniqueId == rhs.mActorUniqueId; }

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PlayerScoreboardId const& INVALID();
    // NOLINTEND
};

namespace std {
template <>
struct hash<PlayerScoreboardId> {
    int64 operator()(PlayerScoreboardId const& d) const noexcept { return d.mActorUniqueId; }
};
} // namespace std
