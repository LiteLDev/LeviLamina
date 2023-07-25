#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLootComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENT
public:
    BlockLootComponent& operator=(BlockLootComponent const&) = delete;
    BlockLootComponent(BlockLootComponent const&)            = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLOOTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockLootComponent();
#endif
    /**
     * @symbol ??0BlockLootComponent\@\@QEAA\@XZ
     */
    MCAPI BlockLootComponent();
    /**
     * @symbol
     * ?getLootTable\@BlockLootComponent\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getLootTable() const;
};
