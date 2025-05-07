#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class HashedString;
class ItemStack;
class SemVersion;
struct DiggerBlockDefinitionTrigger;
struct LegacyOnDigTriggerItemComponentData;
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
    MCNAPI explicit LegacyOnDigTriggerItemComponent(::LegacyOnDigTriggerItemComponentData&& componentData);

    MCNAPI void
    _onMineBlock(bool& result, ::ItemStack& item, ::Block const& block, int x, int y, int z, ::Actor& owner);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyOnDigTriggerItemComponentData&& componentData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCNAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
