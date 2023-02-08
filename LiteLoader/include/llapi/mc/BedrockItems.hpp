/**
 * @file  BedrockItems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   993156504
     * @symbol  ?mAir\@BedrockItems\@\@2V?$WeakPtr\@VItem\@\@\@\@A
     */
    MCAPI static class WeakPtr<class Item> mAir;
    /**
     * @hash   1075324014
     * @symbol  ?registerItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void registerItems(class ItemRegistryRef);
    /**
     * @hash   -2073612880
     * @symbol  ?unregisterItems\@BedrockItems\@\@SAXVItemRegistryRef\@\@\@Z
     */
    MCAPI static void unregisterItems(class ItemRegistryRef);

};