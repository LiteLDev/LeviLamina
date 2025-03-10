#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {
public:
    [[nodiscard]] constexpr bool operator==(ActorUniqueID const& other) const noexcept { return rawID == other.rawID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ActorUniqueID const& other) const noexcept {
        return rawID <=> other.rawID;
    }

public:
    // member variables
    // NOLINTBEGIN
    int64 rawID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 getHash() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorUniqueID const& INVALID_ID();
    // NOLINTEND
};

namespace std {
template <>
class hash<ActorUniqueID> {
public:
    size_t operator()(ActorUniqueID const& id) const { return id.getHash(); }
};
} // namespace std
