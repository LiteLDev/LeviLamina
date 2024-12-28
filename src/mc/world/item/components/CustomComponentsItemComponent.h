#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace SharedTypes::v1_20_80 { struct CustomComponentsItemComponent; }
// clang-format on

class CustomComponentsItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7cb388;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomComponentsItemComponent& operator=(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent(CustomComponentsItemComponent const&);
    CustomComponentsItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomComponentsItemComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CustomComponentsItemComponent(::SharedTypes::v1_20_80::CustomComponentsItemComponent component);

    MCAPI ::std::vector<::std::string> const& getComponentNames() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::CustomComponentsItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
