#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
class CreativeItemRegistry;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>             mRegistry;
    ::ll::TypedStorage<8, 48, ::HashedString>                     mName;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                    mIcon;
    ::ll::TypedStorage<4, 4, uint>                                mIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                mItemIndexes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeGroupInfo() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addCreativeItemEntry(::CreativeItemEntry* itemEntry);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
