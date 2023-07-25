#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCraftingTableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCRAFTINGTABLECOMPONENT
public:
    BlockCraftingTableComponent& operator=(BlockCraftingTableComponent const&) = delete;
    BlockCraftingTableComponent(BlockCraftingTableComponent const&)            = delete;
    BlockCraftingTableComponent()                                              = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCRAFTINGTABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockCraftingTableComponent();
#endif
    /**
     * @symbol ??4BlockCraftingTableComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct BlockCraftingTableComponent& operator=(struct BlockCraftingTableComponent&&);
};
