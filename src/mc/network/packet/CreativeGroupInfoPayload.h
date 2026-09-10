#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

struct CreativeGroupInfoPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCreativeItemCategory;
    ::ll::TypedStorage<8, 32, ::std::string>                      mName;
    ::ll::TypedStorage<8, 64, ::NetworkItemInstanceDescriptor>    mIcon;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CreativeGroupInfoPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
