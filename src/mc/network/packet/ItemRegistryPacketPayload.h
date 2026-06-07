#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
struct ItemData;
// clang-format on

struct ItemRegistryPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemData>> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemRegistryPacketPayload(::ItemRegistryRef itemRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};
