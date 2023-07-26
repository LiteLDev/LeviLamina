#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCraftingTableComponent {

public:
    // prevent constructor by default
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&) = delete;
    BlockCraftingTableComponent(BlockCraftingTableComponent const&)            = delete;
    BlockCraftingTableComponent()                                              = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCRAFTINGTABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockCraftingTableComponent(); // NOLINT
#endif
    /**
     * @symbol ??4BlockCraftingTableComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockCraftingTableComponent& operator=(struct BlockCraftingTableComponent&&); // NOLINT
};
