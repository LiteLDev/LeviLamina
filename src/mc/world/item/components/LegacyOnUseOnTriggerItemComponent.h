#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class HashedString;
class ItemStack;
class OnUseOnItemComponentLegacyFactoryData;
class Vec3;
// clang-format on

class LegacyOnUseOnTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnUseOnSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnUseOnTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseOnTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void _initializeComponent() /*override*/;

    // vIndex: 0
    virtual ~LegacyOnUseOnTriggerItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LegacyOnUseOnTriggerItemComponent(::OnUseOnItemComponentLegacyFactoryData&& data);

    MCAPI void _useOn(
        bool&              result,
        ::ItemStack const& initialItemStack,
        ::ItemStack&       currentItemStack,
        ::Actor&           entity,
        ::BlockPos const&  pos,
        uchar              face,
        ::Vec3 const&      clickPos
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OnUseOnItemComponentLegacyFactoryData&& data);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_initializeComponent();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
