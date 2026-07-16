#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/OnHitActorTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnHitBlockTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnHurtActorTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnUseOnTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/OnUseTriggerItemComponent.h"
#include "mc/deps/shared_types/legacy/item/RenderOffsetsItemComponent.h"
#include "mc/deps/shared_types/v1_20_30/item/ItemDeprecatedComponentData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_40 {

struct ItemDeprecatedComponentData : public ::SharedTypes::v1_20_30::ItemDeprecatedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnUseTriggerItemComponent>>
        legacyOnUseTriggerItemComponent;
    ::ll::TypedStorage<8, 96, ::std::optional<::SharedTypes::Legacy::OnUseOnTriggerItemComponent>>
        legacyOnUseOnTriggerItemComponent;
    ::ll::TypedStorage<4, 148, ::std::optional<::SharedTypes::Legacy::RenderOffsetsItemComponent>>
        renderOffsetsItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHurtActorTriggerItemComponent>>
        legacyOnHurtActorTriggerItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHitActorTriggerItemComponent>>
        legacyOnHitActorTriggerItemComponent;
    ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::Legacy::OnHitBlockTriggerItemComponent>>
        legacyOnHitBlockTriggerItemComponent;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDeprecatedComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);

    MCAPI ItemDeprecatedComponentData(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);

    MCAPI ::SharedTypes::v1_20_40::ItemDeprecatedComponentData&
    operator=(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);

    MCAPI bool operator==(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&) const;

    MCAPI ~ItemDeprecatedComponentData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_40::ItemDeprecatedComponentData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_40
