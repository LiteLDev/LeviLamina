#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    [[nodiscard]] constexpr bool operator==(ActorRuntimeID const& other) const noexcept { return rawID == other.rawID; }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ActorRuntimeID const& other) const noexcept {
        return rawID <=> other.rawID;
    }

    [[nodiscard]] constexpr ActorRuntimeID() : rawID(0) {}
    [[nodiscard]] constexpr ActorRuntimeID(uint64 x) : rawID(x) {}

    [[nodiscard]] constexpr operator uint64() const { return rawID; }

public:
    // member variables
    // NOLINTBEGIN
    uint64 rawID;
    // NOLINTEND

};

namespace std {
template <>
class hash<ActorRuntimeID> {
public:
    size_t operator()(ActorRuntimeID const& id) const { return std::hash<int64>()(id.rawID); }
};
} // namespace std
