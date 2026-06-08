#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

struct ScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                 mRawID;
    ::ll::TypedStorage<8, 8, ::IdentityDefinition*> mIdentityDef;
    // NOLINTEND

public:
    bool operator==(ScoreboardId const& other) const { return mRawID == other.mRawID; }

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScoreboardId& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(int64 bytes);

    MCFOLD void* $ctor(::ScoreboardId const& scoreboardId);
    // NOLINTEND
};

namespace std {
template <>
struct hash<::ScoreboardId> {
    size_t operator()(::ScoreboardId const& id) const noexcept {
        ActorUniqueID uId{};
        uId.rawID = id.mRawID;
        return std::hash<ActorUniqueID>()(uId);
    }
};
} // namespace std
