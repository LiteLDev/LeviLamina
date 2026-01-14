#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_50 {

struct RepairableItemComponent {
public:
    // RepairableItemComponent inner types declare
    // clang-format off
    struct RepairItemEntry;
    // clang-format on

    // RepairableItemComponent inner types define
    struct RepairItemEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mItems;
        ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                mRepairAmount;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~RepairItemEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_20_50::RepairableItemComponent::RepairItemEntry>>
        mRepairItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RepairableItemComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
