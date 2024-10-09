#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"

class BedrockItems {
public:
    // prevent constructor by default
    BedrockItems& operator=(BedrockItems const&);
    BedrockItems(BedrockItems const&);
    BedrockItems();

public:
    // NOLINTBEGIN
    MCAPI static void registerItems(class ItemRegistryRef itemRegistry);

    MCAPI static void unregisterItems(class ItemRegistryRef itemRegistry);

    MCAPI static class WeakPtr<class Item> mAir;

    // NOLINTEND
};
