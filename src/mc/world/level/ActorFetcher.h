#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DimensionManager;
class Mob;
class StrictEntityContext;
struct ActorUniqueID;
// clang-format on

class ActorFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> const> mDimensionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFetcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorFetcher(::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> dimensionManager);

    MCAPI ::Actor* fetchActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;

    MCAPI ::Mob* fetchMobAllDimensions(::ActorUniqueID mobId) const;

    MCAPI ::StrictEntityContext fetchStrictActorAllDimensions(::ActorUniqueID actorId, bool getRemoved) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::DimensionManager const> dimensionManager);
    // NOLINTEND
};
