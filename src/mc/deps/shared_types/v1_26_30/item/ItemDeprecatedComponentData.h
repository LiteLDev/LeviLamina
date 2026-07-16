#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ItemDeprecatedComponentData.h"
#include "mc/deps/shared_types/v1_21_60/item/CustomComponentsItemComponent.h"

namespace SharedTypes::v1_26_30 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_50::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::std::optional<::SharedTypes::v1_20_50::DiggerItemComponent>>
        legacyOnDigTriggerItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>>
        customComponentsItemComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDeprecatedComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCAPI bool operator==(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&) const;

    MCAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
