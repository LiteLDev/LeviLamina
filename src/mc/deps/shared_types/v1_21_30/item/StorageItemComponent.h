#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ItemDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct StorageItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mNumSlots;
    ::ll::TypedStorage<4, 4, int>                                                   mWeightLimit;
    ::ll::TypedStorage<4, 4, int>                                                   mWeightInStorageItem;
    ::ll::TypedStorage<1, 1, bool>                                                  mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mBannedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mAllowedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_30::StorageItemComponent&
    operator=(::SharedTypes::v1_21_30::StorageItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
