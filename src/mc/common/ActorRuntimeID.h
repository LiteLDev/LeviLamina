#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    // member variables
    // NOLINTBEGIN
    uint64 rawID;
    // NOLINTEND

    [[nodiscard]] constexpr ActorRuntimeID() : rawID(0) {}
    [[nodiscard]] constexpr ActorRuntimeID(uint64 x) : rawID(x) {}

    [[nodiscard]] constexpr operator uint64() const { return rawID; }
};

namespace std {
template <>
class hash<ActorRuntimeID> {
public:
    size_t operator()(ActorRuntimeID const& id) const { return std::hash<int64>()(id.rawID); }
};
} // namespace std
