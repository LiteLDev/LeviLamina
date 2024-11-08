#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    uint64 id;

    [[nodiscard]] constexpr ActorRuntimeID() : id(0) {}
    [[nodiscard]] constexpr ActorRuntimeID(uint64 x) : id(x) {}

    [[nodiscard]] constexpr operator uint64() const { return id; }
};

namespace std {
template <>
class hash<ActorRuntimeID> {
public:
    size_t operator()(ActorRuntimeID const& id) const { return std::hash<int64>()(id.id); }
};
} // namespace std
