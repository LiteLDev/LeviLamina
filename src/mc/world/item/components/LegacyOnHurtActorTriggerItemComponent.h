#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class ItemStack;
class Mob;
struct LegacyOnHurtActorTriggerItemComponentData;
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk7bbca1;
    ::ll::UntypedStorage<8, 264> mUnkb52210;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent& operator=(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent(LegacyOnHurtActorTriggerItemComponent const&);
    LegacyOnHurtActorTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnHurtActorTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnHurtActorTriggerItemComponent(::LegacyOnHurtActorTriggerItemComponentData&& componentData);

    MCAPI void _onHurtActor(int& durabilityDamage, ::ItemStack& item, ::Actor& actor, ::Mob& attacker);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnHurtActorTriggerItemComponentData&& componentData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
