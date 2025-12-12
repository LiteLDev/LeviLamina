#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct ActorUniqueID;
// clang-format on

class PlayerLocationReceiver {
public:
    // PlayerLocationReceiver inner types declare
    // clang-format off
    struct ActorUniqueIDCompare;
    // clang-format on

    // PlayerLocationReceiver inner types define
    struct ActorUniqueIDCompare {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::ActorUniqueID,
            ::std::optional<::Vec3>,
            ::PlayerLocationReceiver::ActorUniqueIDCompare,
            ::std::vector<::ActorUniqueID>,
            ::std::vector<::std::optional<::Vec3>>>>
        mCurrentPlayerLocationData;
    // NOLINTEND
};
