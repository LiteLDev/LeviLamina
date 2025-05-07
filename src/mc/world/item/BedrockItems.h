#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemRegistryRef;
// clang-format on

class BedrockItems {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void registerItems(::ItemRegistryRef itemRegistry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::WeakPtr<::Item>& mAir();
    // NOLINTEND
};
