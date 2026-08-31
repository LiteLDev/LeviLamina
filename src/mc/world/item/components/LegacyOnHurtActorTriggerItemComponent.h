#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
namespace SharedTypes::Legacy { struct OnHurtActorTriggerItemComponent; }
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnHurtActorSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHurtActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnHurtActorTriggerItemComponent(
        ::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&& componentData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&& componentData);
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
