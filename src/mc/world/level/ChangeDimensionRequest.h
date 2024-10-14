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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
