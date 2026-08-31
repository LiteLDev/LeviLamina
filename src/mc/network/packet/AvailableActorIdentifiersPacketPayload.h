#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorInfo.h"

// auto generated forward declare list
// clang-format off
struct ActorInfo;
// clang-format on

struct AvailableActorIdentifiersPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorInfo>> mIdentifierList;
    // NOLINTEND
};
