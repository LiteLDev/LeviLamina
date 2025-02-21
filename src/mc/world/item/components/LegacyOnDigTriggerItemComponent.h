#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class DefinitionTrigger;
class HashedString;
class ItemStack;
class SemVersion;
struct DiggerBlockDefinitionTrigger;
struct LegacyOnDigTriggerItemComponentData;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mCanUseOnDig;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mOnMineBlockSubscription;
    ::ll::TypedStorage<8, 264, ::std::optional<::DefinitionTrigger>>         mOnDigDefault;
    ::ll::TypedStorage<8, 24, ::std::vector<::DiggerBlockDefinitionTrigger>> mOnDigTriggers;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 6
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnDigTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnDigTriggerItemComponent(::LegacyOnDigTriggerItemComponentData&& componentData);

    MCAPI void _onMineBlock(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&& componentData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
