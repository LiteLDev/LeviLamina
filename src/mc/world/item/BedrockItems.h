#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

class BedrockItems {

public:
    // prevent constructor by default
    BedrockItems& operator=(BedrockItems const&) = delete;
    BedrockItems(BedrockItems const&)            = delete;
    BedrockItems()                               = delete;

public:
    /**
     * @symbol ?registerItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef); // NOLINT
    /**
     * @symbol ?unregisterItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void unregisterItems(class ItemRegistryRef); // NOLINT
    /**
     * @symbol ?mAir\@BedrockItems\@\@2V?$WeakPtr\@VItem\@\@\@\@A
     */
    MCAPI static class WeakPtr<class Item> mAir; // NOLINT
};
