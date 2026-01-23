#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

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
            ::std::vector<::SharedTypes::v1_21_110::BlockDefinition::DestructibleByMiningComponent::ItemSpecificSpeed>>
            mItemSpecificSpeeds;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DetailedMiningSpeed();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            bool,
            ::SharedTypes::v1_21_110::BlockDefinition::DestructibleByMiningComponent::DetailedMiningSpeed>>
        mMiningSpeedValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DestructibleByMiningComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DestroySpeedId();

    MCAPI static ::std::string_view const& ItemId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& SecondsToDestroyId();

    MCAPI static ::std::string_view const& SpecificSpeedsId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
