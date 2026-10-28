#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/components/BlockEntityComponent.h"

namespace SharedTypes::v1_26_60::BlockDefinition {

struct BlockEntityComponent {
public:
    // BlockEntityComponent inner types define
    using ContainerData = ::SharedTypes::v1_26_20::BlockDefinition::BlockEntityComponent::ContainerData;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDynamicProperties;
    ::ll::TypedStorage<1, 1, bool> mEntityStorage;
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

    MCAPI static ::std::string_view const& EntityStorageId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
