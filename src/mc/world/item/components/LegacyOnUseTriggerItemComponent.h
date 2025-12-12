#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Player;
struct LegacyOnUseTriggerItemComponentData;
// clang-format on

class LegacyOnUseTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnUseSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnUseTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    virtual ~LegacyOnUseTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnUseTriggerItemComponent(::LegacyOnUseTriggerItemComponentData&& data);

    MCAPI void _use(bool& result, ::ItemStack& item, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnUseTriggerItemComponentData&& data);
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
