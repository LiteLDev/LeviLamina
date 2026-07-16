#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // LegacyOnDigTriggerItemComponent inner types declare
    // clang-format off
    struct DiggerBlockDefinitionTrigger;
    // clang-format on

    // LegacyOnDigTriggerItemComponent inner types define
    struct DiggerBlockDefinitionTrigger {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::BlockDescriptor>  filter;
        ::ll::TypedStorage<8, 56, ::DefinitionTrigger> onDig;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                  mCanUseOnDig;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnMineBlockSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnDigDefault;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyOnDigTriggerItemComponent::DiggerBlockDefinitionTrigger>>
        mOnDigTriggers;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnDigTriggerItemComponent(
        ::SharedTypes::v1_20_50::DiggerItemComponent const& diggerComponentData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent const& diggerComponentData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI void $_initializeComponent(::ComponentItem& owner);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
