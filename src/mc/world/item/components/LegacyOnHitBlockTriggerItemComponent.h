#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class DefinitionTrigger;
class HashedString;
class ItemStack;
class Mob;
struct LegacyOnHitBlockTriggerItemComponentData;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LegacyOnHitBlockTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mOnHitBlockSubscription;
    ::ll::TypedStorage<8, 264, ::std::optional<::DefinitionTrigger>> mOnHitBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnHitBlockTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnHitBlockTriggerItemComponent(::LegacyOnHitBlockTriggerItemComponentData&& componentData);

    MCAPI void _onHitBlock(::ItemStack& item, ::Block const& blockPos, ::BlockPos const& attacker, ::Mob&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnHitBlockTriggerItemComponentData&& componentData);
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
