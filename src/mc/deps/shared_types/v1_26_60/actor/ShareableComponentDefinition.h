#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60 {

struct ShareableComponentDefinition {
public:
    // ShareableComponentDefinition inner types declare
    // clang-format off
    struct ShareableData;
    // clang-format on

    // ShareableComponentDefinition inner types define
    struct ShareableData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::SharedTypes::Legacy::ItemDescriptor> mItemDescriptor;
        ::ll::TypedStorage<4, 4, int>                                    mWantAmount;
        ::ll::TypedStorage<4, 4, int>                                    mSurplusAmount;
        ::ll::TypedStorage<4, 4, int>                                    mMaxAmount;
        ::ll::TypedStorage<4, 4, int>                                    mPickupLimit;
        ::ll::TypedStorage<8, 32, ::std::string>                         mStringCraftInto;
        ::ll::TypedStorage<4, 4, int>                                    mItemPriority;
        ::ll::TypedStorage<1, 1, bool>                                   mAdmire;
        ::ll::TypedStorage<1, 1, bool>                                   mBarter;
        ::ll::TypedStorage<1, 1, bool>                                   mStoredInInventory;
        ::ll::TypedStorage<1, 1, bool>                                   mConsumeItem;
        ::ll::TypedStorage<1, 1, bool>                                   mPickupOnly;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShareableData(ShareableData const&);
        ShareableData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_26_60::ShareableComponentDefinition::ShareableData&
        operator=(::SharedTypes::v1_26_60::ShareableComponentDefinition::ShareableData const&);

        MCAPI bool operator==(::SharedTypes::v1_26_60::ShareableComponentDefinition::ShareableData const&) const;

        MCAPI ~ShareableData();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::ShareableComponentDefinition::ShareableData>>
                                   mItems;
    ::ll::TypedStorage<1, 1, bool> mShareAllItems;
    ::ll::TypedStorage<4, 4, int>  mAllItemWantAmount;
    ::ll::TypedStorage<4, 4, int>  mAllItemSurplusAmount;
    ::ll::TypedStorage<4, 4, int>  mAllItemMaxAmount;
    ::ll::TypedStorage<1, 1, bool> mSingularPickup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addShareable(::SharedTypes::v1_26_60::ShareableComponentDefinition::ShareableData const& shareable);

    MCAPI void addShareableByName(::SharedTypes::Legacy::ItemDescriptor const& itemDescriptor);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
