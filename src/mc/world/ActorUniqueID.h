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
    // symbol: ?getHash@ActorUniqueID@@QEBA_KXZ
    MCAPI uint64 getHash() const;

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
    size_t operator()(ActorUniqueID const& id) const { return id.getHash(); }
};
} // namespace std
