#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Player;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct ShooterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShooterItemComponent : public ::NetworkedItemComponent<::ShooterItemComponent> {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    class DrawDuration;
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponent inner types define
    class DrawDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkab3a3e;
        // NOLINTEND

    public:
        // prevent constructor by default
        DrawDuration& operator=(DrawDuration const&);
        DrawDuration(DrawDuration const&);
        DrawDuration();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI float getData() const;

        MCNAPI void setValue(float duration);
        // NOLINTEND
    };

    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk247bf5;
        ::ll::UntypedStorage<1, 1>  mUnk4a1ba9;
        ::ll::UntypedStorage<1, 1>  mUnk3c5257;
        ::ll::UntypedStorage<1, 1>  mUnk851fe8;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShooterAmmunitionEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ShooterAmmunitionEntry(::ShooterItemComponent::ShooterAmmunitionEntry const&);

        MCNAPI ::ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(::ShooterItemComponent::ShooterAmmunitionEntry const&);

        MCNAPI ~ShooterAmmunitionEntry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ShooterItemComponent::ShooterAmmunitionEntry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterItemComponent::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, ::ShooterItemComponent::DrawDuration>                           mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mChargeOnDraw;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShooterItemComponent() /*override*/ = default;

    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    virtual bool checkComponentDataForContentErrors() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const& component);

    MCAPI void _consumeAmmunition(
        ::Player*          player,
        ::ItemStack const& ammunition,
        int                slotIndex,
        bool               infiniteAmmo,
        bool               fromOffhand
    ) const;

    MCAPI int _getAmmunition(::Player const* player, bool, ::ItemStack& ammo, bool& fromOffhand) const;

    MCAPI void _shootProjectiles(::ItemStack& shooterStack, ::Player* player, int durationLeft) const;

    MCAPI bool releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCAPI void use(bool& result, ::ItemStack& instance, ::Player& player) const;
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
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const& component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);

    MCAPI bool $checkComponentDataForContentErrors() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
