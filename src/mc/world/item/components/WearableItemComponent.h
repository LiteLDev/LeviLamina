#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CerealSchemaUpgradeSet;
class ComponentItem;
class Container;
class HashedString;
class ItemStack;
class Player;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_21_90 { struct WearableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WearableItemComponent : public ::NetworkedItemComponent<::WearableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mProtection;
    ::ll::TypedStorage<1, 1, bool>                                 mHidesPlayerLocation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WearableItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WearableItemComponent(::SharedTypes::v1_21_90::WearableItemComponent component);

    MCAPI WearableItemComponent(::SharedTypes::Legacy::EquipmentSlot slot, int protection, bool hidesPlayerLocation);

    MCAPI bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos) const;

    MCFOLD int getArmorValue() const;

    MCAPI ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    MCFOLD ::SharedTypes::Legacy::EquipmentSlot getSlot() const;

    MCFOLD bool hidesPlayerLocation() const;

    MCAPI bool isHumanoidArmor() const;

    MCAPI bool shouldAllowStacking() const;

    MCAPI bool shouldForceAllowOffHand() const;

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

    MCAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet& schemaUpgrades);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_90::WearableItemComponent component);

    MCAPI void* $ctor(::SharedTypes::Legacy::EquipmentSlot slot, int protection, bool hidesPlayerLocation);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
