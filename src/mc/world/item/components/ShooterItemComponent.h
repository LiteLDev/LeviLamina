#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~ShooterItemComponent() /*override*/ = default;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const& component);

    MCNAPI void _consumeAmmunition(
        ::Player*          player,
        ::ItemStack const& ammunition,
        int                slotIndex,
        bool               infiniteAmmo,
        bool               fromOffhand
    ) const;

    MCNAPI int _getAmmunition(::Player const* player, bool ammo, ::ItemStack& fromOffhand, bool&) const;

    MCNAPI void _shootProjectiles(::ItemStack& shooterStack, ::Player* player, int durationLeft) const;

    MCNAPI bool releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCNAPI void use(bool& result, ::ItemStack& instance, ::Player& player) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const& component);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent();

    MCNAPI bool $checkComponentDataForContentErrors() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
