#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItemDeprecatedComponentData_v1_20_30.h"
#include "mc/world/item/components/LegacyOnHitActorTriggerItemComponentData.h"
#include "mc/world/item/components/LegacyOnHitBlockTriggerItemComponentData.h"
#include "mc/world/item/components/LegacyOnHurtActorTriggerItemComponentData.h"
#include "mc/world/item/components/OnUseItemComponent.h"
#include "mc/world/item/components/OnUseOnItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/RenderOffsetsItemComponent.h"

struct ComponentItemDeprecatedComponentData_v1_20_40 : public ::ComponentItemDeprecatedComponentData_v1_20_30 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::optional<::OnUseItemComponent>> onUseItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::OnUseOnItemComponentLegacyFactoryData>> legacyOnUseOnTriggerItemComponent;
    ::ll::TypedStorage<8, 168, ::std::optional<::RenderOffsetsItemComponent>> renderOffsetsItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnHurtActorTriggerItemComponentData>> legacyOnHurtActorTriggerItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnHitActorTriggerItemComponentData>> legacyOnHitActorTriggerItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::LegacyOnHitBlockTriggerItemComponentData>> legacyOnHitBlockTriggerItemComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDeprecatedComponentData_v1_20_40();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI ComponentItemDeprecatedComponentData_v1_20_40(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_40& operator=(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI ::ComponentItemDeprecatedComponentData_v1_20_40& operator=(::ComponentItemDeprecatedComponentData_v1_20_40&&);

    MCAPI ~ComponentItemDeprecatedComponentData_v1_20_40();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40 const&);

    MCAPI void* $ctor(::ComponentItemDeprecatedComponentData_v1_20_40&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
