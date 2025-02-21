#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DefinitionTrigger;
class HashedString;
class ItemStack;
struct LegacyOnConsumeTriggerItemComponentData;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LegacyOnConsumeTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOnConsumeSubscription;
    ::ll::TypedStorage<8, 264, ::std::optional<::DefinitionTrigger>> mOnConsumeTrigger;
    // NOLINTEND

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
    MCAPI explicit LegacyOnConsumeTriggerItemComponent(::LegacyOnConsumeTriggerItemComponentData&& data);

    MCAPI void _consume(::ItemStack const& item, ::ItemStack& actor, ::Actor&);
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
