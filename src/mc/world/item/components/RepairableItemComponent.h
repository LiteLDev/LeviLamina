#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
struct RepairItemResult;
namespace SharedTypes::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent : public ::NetworkedItemComponent<::RepairableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb9cd42;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepairableItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RepairableItemComponent(::RepairableItemComponent const&);

    MCAPI explicit RepairableItemComponent(::SharedTypes::v1_20_50::RepairableItemComponent component);

    MCAPI int
    _repairItem(::ItemStackBase& materialItem, ::ItemStackBase& resultItem, ::ExpressionNode repairAmountExpression)
        const;

    MCAPI ::RepairItemResult
    handleItemRepair(::ItemStack& inputItem, ::ItemStack& materialItem, bool allowBidirectionalRepair) const;

    MCAPI ::RepairableItemComponent& operator=(::RepairableItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );

    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RepairableItemComponent const&);

    MCAPI void* $ctor(::SharedTypes::v1_20_50::RepairableItemComponent component);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
