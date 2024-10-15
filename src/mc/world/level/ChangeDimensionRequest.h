#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

class ChangeDimensionRequest {
public:
    // prevent constructor by default
    ChangeDimensionRequest& operator=(ChangeDimensionRequest const&);
    ChangeDimensionRequest(ChangeDimensionRequest const&);

public:
    // NOLINTBEGIN
    MCAPI ChangeDimensionRequest();

    MCAPI ChangeDimensionRequest(class ChangeDimensionRequest&& other);

    MCAPI ChangeDimensionRequest(
        DimensionType fromId,
        DimensionType toId,
        class Vec3    fromLocation,
        class Vec3    toLocation,
        bool          usePortal,
        bool          respawn
    );

    MCAPI class ChangeDimensionRequest& operator=(class ChangeDimensionRequest&& other);

    MCAPI ~ChangeDimensionRequest();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        DimensionType fromId,
        DimensionType toId,
        class Vec3    fromLocation,
        class Vec3    toLocation,
        bool          usePortal,
        bool          respawn
    );

    MCAPI void* ctor$(class ChangeDimensionRequest&& other);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
