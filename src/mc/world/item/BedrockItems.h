#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

class BedrockItems {
public:
    // prevent constructor by default
    BedrockItems& operator=(BedrockItems const&);
    BedrockItems(BedrockItems const&);
    BedrockItems();

public:
    // NOLINTBEGIN
    MCAPI static void registerItems(class ItemRegistryRef);

    MCAPI static void unregisterItems(class ItemRegistryRef);

    MCAPI static class WeakPtr<class Item> mAir;

    // NOLINTEND
};
