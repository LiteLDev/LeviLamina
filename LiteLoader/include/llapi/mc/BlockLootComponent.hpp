/**
 * @file  MC/BlockLootComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockLootComponent.
 *
 */
class BlockLootComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLOOTCOMPONENT
public:
    class BlockLootComponent& operator=(class BlockLootComponent const &) = delete;
    BlockLootComponent(class BlockLootComponent const &) = delete;
#endif

public:
    /**
     * @hash   -1148370220
     * @symbol ??0BlockLootComponent@@QEAA@XZ
     */
    MCAPI BlockLootComponent();
    /**
     * @hash   68779083
     * @symbol ?spawnResources@BlockLootComponent@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@PEAV?$vector@PEBVItem@@V?$allocator@PEBVItem@@@std@@@std@@MHAEBVItemStack@@@Z
     */
    MCAPI void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, class ItemStack const &) const;

};