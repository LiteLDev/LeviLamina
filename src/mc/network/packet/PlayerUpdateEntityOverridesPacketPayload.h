#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct PlayerUpdateEntityOverridesPacketPayload {
public:
    // PlayerUpdateEntityOverridesPacketPayload inner types declare
    // clang-format off
    struct ClearOverride;
    struct FloatOverride;
    struct IntOverride;
    struct RemoveOverride;
    // clang-format on

    // PlayerUpdateEntityOverridesPacketPayload inner types define
    struct ClearOverride {};

    struct FloatOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mValue;
        // NOLINTEND
    };

    struct IntOverride {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND
    };

    struct RemoveOverride {};

    using Update = ::std::variant<
        ::PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::IntOverride,
        ::PlayerUpdateEntityOverridesPacketPayload::FloatOverride>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
    ::ll::TypedStorage<4, 4, uint>            mPropertyIndex;
    ::ll::TypedStorage<
        4,
        8,
        ::std::variant<
            ::PlayerUpdateEntityOverridesPacketPayload::ClearOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::RemoveOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::IntOverride,
            ::PlayerUpdateEntityOverridesPacketPayload::FloatOverride>>
        mUpdate;
    // NOLINTEND
};
