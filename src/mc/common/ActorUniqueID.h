#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct ActorUniqueID {
public:
    int64 id{};

public:
    // NOLINTBEGIN
    MCAPI uint64 getHash() const;

    MCAPI static struct ActorUniqueID fromUUID(class mce::UUID const& uuid);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct ActorUniqueID const& INVALID_ID();

    // NOLINTEND
};

namespace std {
template <>
class hash<ActorUniqueID> {
public:
    size_t operator()(ActorUniqueID const& id) const { return id.getHash(); }
};
} // namespace std
