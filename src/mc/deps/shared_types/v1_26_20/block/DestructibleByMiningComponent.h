#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DestructibleByMiningComponent {
public:
    // DestructibleByMiningComponent inner types declare
    // clang-format off
    struct ItemSpecificSpeed;
    struct DetailedMiningSpeed;
    // clang-format on

    // DestructibleByMiningComponent inner types define
    struct ItemSpecificSpeed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItem;
        ::ll::TypedStorage<4, 4, float>                                  mBlockDestroySpeed;
        // NOLINTEND
    };

    struct DetailedMiningSpeed {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mSecondsToDestroy;
        ::ll::TypedStorage<
            8,
            24,
            ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::DestructibleByMiningComponent::ItemSpecificSpeed>>
            mItemSpecificSpeeds;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::
            variant<bool, ::SharedTypes::v1_26_20::BlockDefinition::DestructibleByMiningComponent::DetailedMiningSpeed>>
        mMiningSpeedValue;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
