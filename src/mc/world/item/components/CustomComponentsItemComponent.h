#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct ItemCustomComponentData;
namespace SharedTypes::v1_21_60 { struct CustomComponentsItemComponent; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemCustomComponentData>> mComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomComponentsItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomComponentsItemComponent(::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_60::CustomComponentsItemComponent const& component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
