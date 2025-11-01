#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/AllowOffHandItemComponent.h"
#include "mc/world/item/components/CanDestroyInCreativeItemComponent.h"
#include "mc/world/item/components/ChargeableItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/CooldownItemComponent.h"
#include "mc/world/item/components/DamageItemComponent.h"
#include "mc/world/item/components/DiggerItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/DisplayNameItemComponent.h"
#include "mc/world/item/components/DurabilityItemComponent.h"
#include "mc/world/item/components/EnchantableItemComponent.h"
#include "mc/world/item/components/EntityPlacerItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/FoodItemComponentData_v1_20_30.h"
#include "mc/world/item/components/FuelItemComponent.h"
#include "mc/world/item/components/GlintItemComponent.h"
#include "mc/world/item/components/HandEquippedItemComponent.h"
#include "mc/world/item/components/HoverTextColorItemComponent.h"
#include "mc/world/item/components/IconItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/InteractButtonItemComponent.h"
#include "mc/world/item/components/LiquidClippedItemComponent.h"
#include "mc/world/item/components/MaxStackSizeItemComponent.h"
#include "mc/world/item/components/PlanterItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/ProjectileItemComponent.h"
#include "mc/world/item/components/RecordItemComponent.h"
#include "mc/world/item/components/RepairableItemComponent.h"
#include "mc/world/item/components/ShooterItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/ShouldDespawnItemComponent.h"
#include "mc/world/item/components/StackedByDataItemComponent.h"
#include "mc/world/item/components/ThrowableItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/UseAnimationItemComponent.h"
#include "mc/world/item/components/UseModifiersItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/WearableItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_40 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::optional<::ChargeableItemComponentLegacyFactoryData>> chargeableItemComponent;
    ::ll::TypedStorage<8, 80, ::std::optional<::CooldownItemComponent>> cooldownItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::DurabilityItemComponent>> durabilityItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::DiggerItemComponentLegacyFactoryData>> diggerItemComponent;
    ::ll::TypedStorage<8, 56, ::std::optional<::DisplayNameItemComponent>> displayNameItemComponent;
    ::ll::TypedStorage<8, 240, ::std::optional<::EntityPlacerItemComponentLegacyFactoryData>> entityPlacerItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::FoodItemComponentData_v1_20_30>> foodItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::FuelItemComponent>> fuelItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::IconItemComponentLegacyFactoryData>> iconItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::PlanterItemComponentLegacyFactoryData>> planterItemComponent;
    ::ll::TypedStorage<8, 208, ::std::optional<::ProjectileItemComponent>> projectileItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::RepairableItemComponent>> repairableItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::ShooterItemComponentLegacyFactoryData>> shooterItemComponent;
    ::ll::TypedStorage<4, 40, ::std::optional<::ThrowableItemComponentLegacyFactoryData>> throwableItemComponent;
    ::ll::TypedStorage<4, 24, ::std::optional<::WearableItemComponentLegacyFactoryData>> wearableItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::RecordItemComponent>> recordItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::MaxStackSizeItemComponent>> maxStackSizeItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::CanDestroyInCreativeItemComponent>> canDestroyInCreativeItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::HoverTextColorItemComponent>> hoverTextColorItemComponent;
    ::ll::TypedStorage<4, 24, ::std::optional<::UseModifiersItemComponentLegacyFactoryData>> useModifiersItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::StackedByDataItemComponent>> stackedByDataItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::GlintItemComponent>> glintItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::HandEquippedItemComponent>> handEquippedItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::ShouldDespawnItemComponent>> shouldDespawnItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::DamageItemComponent>> damageItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::AllowOffHandItemComponent>> allowOffHandItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::LiquidClippedItemComponent>> liquidClippedItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::UseAnimationItemComponent>> useAnimationItemComponent;
    ::ll::TypedStorage<8, 64, ::std::optional<::EnchantableItemComponent>> enchantableItemComponent;
    ::ll::TypedStorage<8, 64, ::std::optional<::InteractButtonItemComponent>> interactButtonItemComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemComponentData_v1_20_40();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemComponentData_v1_20_40(::ComponentItemComponentData_v1_20_40 const&);

    MCAPI ComponentItemComponentData_v1_20_40(::ComponentItemComponentData_v1_20_40&&);

    MCAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40&&);

    MCAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40 const&);

    MCAPI ~ComponentItemComponentData_v1_20_40();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemComponentData_v1_20_40 const&);

    MCAPI void* $ctor(::ComponentItemComponentData_v1_20_40&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
