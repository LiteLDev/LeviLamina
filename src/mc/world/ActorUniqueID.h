#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct ActorUniqueID {
public:
    int64 id;
    ActorUniqueID() : id(INVALID_ID) {}

    explicit ActorUniqueID(int64 id) : id(id) {}

    [[nodiscard]] constexpr int64 get() const { return id; }

    [[nodiscard]] constexpr operator int64() const { return id; } // NOLINT

public:
    // NOLINTBEGIN
    // symbol: ?fromUUID@ActorUniqueID@@SA?AU1@AEBVUUID@mce@@@Z
    MCAPI static struct ActorUniqueID fromUUID(class mce::UUID const&);

    // symbol: ?INVALID_ID@ActorUniqueID@@2U1@B
    MCAPI static struct ActorUniqueID const INVALID_ID;

    // NOLINTEND
};

namespace std {
template <>
class hash<ActorUniqueID> {
public:
    size_t operator()(ActorUniqueID const& id) const { return std::hash<int64>()(id.id); }
};
} // namespace std
