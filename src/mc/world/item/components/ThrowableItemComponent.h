#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemStack;
class Player;
class ProjectileItemComponent;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ThrowableItemComponent : public ::NetworkedItemComponent<::ThrowableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc1676f;
    ::ll::UntypedStorage<4, 4>  mUnk1f0ce3;
    ::ll::UntypedStorage<4, 4>  mUnk23ffa3;
    ::ll::UntypedStorage<4, 4>  mUnkc7e551;
    ::ll::UntypedStorage<4, 4>  mUnke21ec1;
    ::ll::UntypedStorage<1, 1>  mUnkebd949;
    ::ll::UntypedStorage<1, 1>  mUnkc139a5;
    ::ll::UntypedStorage<8, 16> mUnkacf3b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);
    ThrowableItemComponent();

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
    MCAPI explicit ThrowableItemComponent(bool doSwing);

    MCAPI void
    _doThrow(::ItemStack& item, ::Player& player, ::ProjectileItemComponent const& projectileComponent, float power)
        const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool doSwing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
