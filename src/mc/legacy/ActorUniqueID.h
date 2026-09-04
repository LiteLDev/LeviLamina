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
struct hash<ActorUniqueID> {
    size_t operator()(ActorUniqueID const& id) const noexcept {
        static std::hash<int64> hasher;
        size_t                  seed  = 0;
        seed                         ^= hasher(id.rawID >> 32) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        seed                         ^= hasher(id.rawID & 0xffffff) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
        return seed;
    }
};
} // namespace std
