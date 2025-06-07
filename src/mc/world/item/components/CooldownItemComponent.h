#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_50 { struct CooldownItemComponent; }
// clang-format on

class CooldownItemComponent : public ::NetworkedItemComponent<::CooldownItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mCoolDownType;
    ::ll::TypedStorage<4, 4, float>           mCooldownTime;
    // NOLINTEND

public:
    // prevent constructor by default
    CooldownItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CooldownItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CooldownItemComponent(::CooldownItemComponent const&);

    MCAPI explicit CooldownItemComponent(::SharedTypes::v1_20_50::CooldownItemComponent component);

    MCAPI ::CooldownItemComponent& operator=(::CooldownItemComponent&&);

    MCAPI ::CooldownItemComponent& operator=(::CooldownItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CooldownItemComponent const&);

    MCAPI void* $ctor(::SharedTypes::v1_20_50::CooldownItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
