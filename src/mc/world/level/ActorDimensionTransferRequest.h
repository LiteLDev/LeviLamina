#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/dimension/DimensionType.h"

struct ActorDimensionTransferRequest {
public:
    // ActorDimensionTransferRequest inner types define
    enum class TargetPolicy : int {
        LegacyAuto    = 0,
        ForceExplicit = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>                               mFromId;
    ::ll::TypedStorage<4, 4, ::DimensionType>                               mToId;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                      mExplicitTarget;
    ::ll::TypedStorage<4, 4, ::ActorDimensionTransferRequest::TargetPolicy> mTargetPolicy;
    // NOLINTEND
};
