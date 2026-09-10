#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"

struct PlayerLocationPacketPayload {
public:
    // PlayerLocationPacketPayload inner types declare
    // clang-format off
    struct CoordinatesLocation;
    struct HiddenLocation;
    // clang-format on

    // PlayerLocationPacketPayload inner types define
    enum class Type : int {
        Coordinates = 0,
        Hide        = 1,
    };

    struct CoordinatesLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::PlayerLocationPacketPayload::Type> mType;
        ::ll::TypedStorage<4, 12, ::Vec3>                             mPos;
        // NOLINTEND
    };

    struct HiddenLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::PlayerLocationPacketPayload::Type> mType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
    ::ll::TypedStorage<
        4,
        20,
        ::std::
            variant<::PlayerLocationPacketPayload::CoordinatesLocation, ::PlayerLocationPacketPayload::HiddenLocation>>
        mLocation;
    // NOLINTEND
};
