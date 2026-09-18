#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
        ::ll::TypedStorage<1, 1, uchar> mSlotCount;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& SlotCountId();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    ::ll::TypedStorage<
        1,
        2,
        ::std::optional<::SharedTypes::v1_26_20::BlockDefinition::BlockEntityComponent::ContainerData>>
        mContainer;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
