#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_50/item/AllowOffHandItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/CanDestroyInCreativeItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/CooldownItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/DamageItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/DiggerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/DisplayNameItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/DurabilityItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/EnchantableItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/EntityPlacerItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/FoodItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/FuelItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/GlintItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/HandEquippedItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/HoverTextColorItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/InteractButtonItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/LiquidClippedItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/MaxStackSizeItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ProjectileItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/RecordItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/RepairableItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ShooterItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ShouldDespawnItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/StackedByDataItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/TagsItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/ThrowableItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/UseAnimationItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/UseModifiersItemComponent.h"
#include "mc/deps/shared_types/v1_20_50/item/WearableItemComponent.h"
#include "mc/deps/shared_types/v1_21_10/item/DamageAbsorptionItemComponent.h"
#include "mc/deps/shared_types/v1_21_10/item/DurabilitySensorItemComponent.h"
#include "mc/deps/shared_types/v1_21_30/item/BundleInteractionItemComponent.h"
#include "mc/deps/shared_types/v1_21_30/item/DyeableItemComponent.h"
#include "mc/deps/shared_types/v1_21_30/item/RarityItemComponent.h"
#include "mc/deps/shared_types/v1_21_40/item/PlanterItemComponent.h"
#include "mc/deps/shared_types/v1_21_50/item/CompostableItemComponent.h"
#include "mc/deps/shared_types/v1_21_60/item/CustomComponentsItemComponent.h"
#include "mc/deps/shared_types/v1_21_60/item/StorageItemComponent.h"
#include "mc/deps/shared_types/v1_21_60/item/StorageWeightLimitItemComponent.h"
#include "mc/deps/shared_types/v1_21_60/item/StorageWeightModifierItemComponent.h"
#include "mc/deps/shared_types/v1_21_80/item/IconItemComponent.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct ComponentItemComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::AllowOffHandItemComponent>>
        allowOffHandItemComponent;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_21_30::BundleInteractionItemComponent>>
        bundleInteractionItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::CanDestroyInCreativeItemComponent>>
        canDestroyInCreativeItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_20_50::CooldownItemComponent>> cooldownItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_21_50::CompostableItemComponent>>
        compostableItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_60::CustomComponentsItemComponent>>
        customComponentsItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::SharedTypes::v1_21_10::DamageAbsorptionItemComponent>>
        damageAbsorptionItemComponent;
    ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::v1_20_50::DamageItemComponent>>  damageItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_50::DiggerItemComponent>> diggerItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_50::DisplayNameItemComponent>>
        displayNameItemComponent;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_20_50::DurabilityItemComponent>>
        durabilityItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::SharedTypes::v1_21_10::DurabilitySensorItemComponent>>
        durabilitySensorItemComponent;
    ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::v1_21_30::DyeableItemComponent>> dyeableItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_20_50::EnchantableItemComponent>>
        enchantableItemComponent;
    ::ll::TypedStorage<8, 88, ::std::optional<::SharedTypes::v1_20_50::EntityPlacerItemComponent>>
                                                                                           entityPlacerItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_20_50::FoodItemComponent>> foodItemComponent;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_20_50::FuelItemComponent>>  fuelItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::GlintItemComponent>> glintItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::HandEquippedItemComponent>>
        handEquippedItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_50::HoverTextColorItemComponent>>
                                                                                           hoverTextColorItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_80::IconItemComponent>> iconItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_20_50::InteractButtonItemComponent>>
        interactButtonItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::LiquidClippedItemComponent>>
        liquidClippedItemComponent;
    ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::v1_20_50::MaxStackSizeItemComponent>>
                                                                                              maxStackSizeItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::SharedTypes::v1_21_40::PlanterItemComponent>> planterItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::SharedTypes::v1_20_50::ProjectileItemComponent>>
                                                                                             projectileItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_21_30::RarityItemComponent>> rarityItemComponent;
    ::ll::TypedStorage<4, 16, ::std::optional<::SharedTypes::v1_20_50::RecordItemComponent>> recordItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::SharedTypes::v1_20_50::RepairableItemComponent>>
                                                                                              repairableItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_50::ShooterItemComponent>> shooterItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::ShouldDespawnItemComponent>>
        shouldDespawnItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::StackedByDataItemComponent>>
        stackedByDataItemComponent;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_21_60::StorageItemComponent>> storageItemComponent;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_21_60::StorageWeightLimitItemComponent>>
        storageWeightLimitItemComponent;
    ::ll::TypedStorage<4, 8, ::std::optional<::SharedTypes::v1_21_60::StorageWeightModifierItemComponent>>
        storageWeightModifierItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::SharedTypes::v1_20_50::TagsItemComponent>>      tagsItemComponent;
    ::ll::TypedStorage<4, 24, ::std::optional<::SharedTypes::v1_20_50::ThrowableItemComponent>> throwableItemComponent;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_20_50::UseAnimationItemComponent>>
        useAnimationItemComponent;
    ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::v1_20_50::UseModifiersItemComponent>>
        useModifiersItemComponent;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::v1_20_50::WearableItemComponent>> wearableItemComponent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData();

    MCAPI ComponentItemComponentData(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCAPI ComponentItemComponentData(::SharedTypes::v1_21_80::ComponentItemComponentData const&);

    MCFOLD ::SharedTypes::v1_21_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCFOLD ::SharedTypes::v1_21_80::ComponentItemComponentData&
    operator=(::SharedTypes::v1_21_80::ComponentItemComponentData const&);

    MCAPI ~ComponentItemComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersion const& FIRST_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::SharedTypes::v1_21_80::ComponentItemComponentData&&);

    MCFOLD void* $ctor(::SharedTypes::v1_21_80::ComponentItemComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
