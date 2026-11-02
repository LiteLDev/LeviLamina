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
    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCNAPI ItemDeprecatedComponentData(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCNAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCNAPI ::SharedTypes::v1_26_30::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&) const;

    MCNAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ItemDeprecatedComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
