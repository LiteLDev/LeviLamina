#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HashedString;
class ItemStack;
struct LegacyOnConsumeTriggerItemComponentData;
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOnConsumeSubscription;
    ::ll::TypedStorage<8, 264, ::std::optional<::DefinitionTrigger>> mOnConsumeTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnConsumeTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnConsumeTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyOnConsumeTriggerItemComponent(::LegacyOnConsumeTriggerItemComponentData&& data);

    MCNAPI void _consume(::ItemStack const& item, ::ItemStack& actor, ::Actor&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnConsumeTriggerItemComponentData&& data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
