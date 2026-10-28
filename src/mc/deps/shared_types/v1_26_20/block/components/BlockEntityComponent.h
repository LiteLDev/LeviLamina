#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockEntityComponent {
public:
    // BlockEntityComponent inner types declare
    // clang-format off
    struct ContainerData;
    // clang-format on

    // BlockEntityComponent inner types define
    struct ContainerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar>                           mSlotCount;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTitle;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& SlotCountId();

        MCAPI static ::std::string_view const& TitleId();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    ::ll::TypedStorage<
        8,
        56,
        ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::BlockEntityComponent::ContainerData>>
        mContainer;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ContainerId();

    MCAPI static ::std::string_view const& DynamicPropertiesId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
