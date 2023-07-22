/**
 * @file  BedrockItems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BedrockItems.
 *
 */
class BedrockItems {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKITEMS
public:
    class BedrockItems& operator=(class BedrockItems const &) = delete;
    BedrockItems(class BedrockItems const &) = delete;
    BedrockItems() = delete;
#endif

public:
    /**
     * @symbol  ?mAir\@BedrockItems\@\@2V?$WeakPtr\@VItem\@\@\@\@A
     */
    MCAPI static class WeakPtr<class Item> mAir;
    /**
     * @symbol  ?registerItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef);
    /**
     * @symbol  ?unregisterItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void unregisterItems(class ItemRegistryRef);

};