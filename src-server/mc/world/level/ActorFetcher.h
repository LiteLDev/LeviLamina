#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DimensionManager;
struct ActorUniqueID;
// clang-format on

class ActorFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> const> mDimensionManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;
    // NOLINTEND

};
