#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

class BedrockItems {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKITEMS
public:
    BedrockItems& operator=(BedrockItems const&) = delete;
    BedrockItems(BedrockItems const&)            = delete;
    BedrockItems()                               = delete;
#endif

public:
    /**
     * @symbol ?mAir\@BedrockItems\@\@2V?$WeakPtr\@VItem\@\@\@\@A
     */
    MCAPI static class WeakPtr<class Item> mAir;
    /**
     * @symbol ?registerItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef);
    /**
     * @symbol ?unregisterItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void unregisterItems(class ItemRegistryRef);
};
