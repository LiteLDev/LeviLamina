#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Player;
class ProjectileItemComponent;
class SemVersion;
// clang-format on

class ThrowableItemComponent : public ::NetworkedItemComponent<::ThrowableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mDoSwing;
    ::ll::TypedStorage<4, 4, float>                            mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float>                            mDrawDuration;
    ::ll::TypedStorage<4, 4, float>                            mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float>                            mMaxLaunchPower;
    ::ll::TypedStorage<1, 1, bool>                             mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                             mTriggerActorUseItemEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~ThrowableItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _doThrow(
        ::ItemStack&                     item,
        ::Player&                        player,
        ::ProjectileItemComponent const& projectileComponent,
        float                            power
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
