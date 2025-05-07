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
struct RepairItemEntry;
struct RepairItemResult;
namespace SharedTypes::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent : public ::NetworkedItemComponent<::RepairableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RepairItemEntry>> mRepairItems;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairableItemComponent& operator=(RepairableItemComponent const&);
    RepairableItemComponent(RepairableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepairableItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RepairableItemComponent(::SharedTypes::v1_20_50::RepairableItemComponent component);

    MCNAPI int
    _repairItem(::ItemStackBase& materialItem, ::ItemStackBase& resultItem, ::ExpressionNode repairAmountExpression)
        const;

    MCNAPI ::RepairItemResult
    handleItemRepair(::ItemStack& inputItem, ::ItemStack& materialItem, bool allowBidirectionalRepair) const;

    MCNAPI ::RepairableItemComponent& operator=(::RepairableItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& releasedMinFormatVersion,
        ::std::optional<::SemVersion>          requiredToggles
    );

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::RepairableItemComponent component);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
