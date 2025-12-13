#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
class HashedString;
class ItemStack;
struct LegacyOnConsumeTriggerItemComponentData;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnConsumeSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnConsumeTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;

    virtual ~LegacyOnConsumeTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnConsumeTriggerItemComponent(::LegacyOnConsumeTriggerItemComponentData&& data);

    MCAPI void _consume(::ItemStack const&, ::ItemStack& item, ::Actor& actor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnConsumeTriggerItemComponentData&& data);
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
