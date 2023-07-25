#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

namespace Util {

class LootTableUtils {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_LOOTTABLEUTILS
public:
    LootTableUtils& operator=(LootTableUtils const&) = delete;
    LootTableUtils(LootTableUtils const&)            = delete;
    LootTableUtils()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?dropItems\@LootTableUtils\@Util\@\@SAHAEAVBlockSource\@\@AEAVSpawner\@\@PEAVActor\@\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static int
    dropItems(class BlockSource&, class Spawner&, class Actor*, std::vector<class ItemStack> const&, class BlockPos const&);
    /**
     * @symbol
     * ?fillContainer\@LootTableUtils\@Util\@\@SAHAEAVContainer\@\@AEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static int fillContainer(class Container&, std::vector<class ItemStack>&);
    /**
     * @symbol
     * ?fillContainer\@LootTableUtils\@Util\@\@SAXAEAVLevel\@\@AEAVContainer\@\@AEAVRandom\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@PEAVActor\@\@\@Z
     */
    MCAPI static void
    fillContainer(class Level&, class Container&, class Random&, std::string const&, class AutomaticID<class Dimension, int>, class Actor*);
    /**
     * @symbol
     * ?generateRandomDeathLoot\@LootTableUtils\@Util\@\@SA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVLootTable\@\@AEAVActor\@\@PEBVActorDamageSource\@\@PEBVItemStack\@\@PEAVPlayer\@\@M\@Z
     */
    MCAPI static std::vector<class ItemStack> generateRandomDeathLoot(
        class LootTable const&,
        class Actor&,
        class ActorDamageSource const*,
        class ItemStack const*,
        class Player*,
        float
    );
    /**
     * @symbol
     * ?getRandomItems\@LootTableUtils\@Util\@\@SA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@4\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack>
    getRandomItems(std::string const&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?getRandomItems\@LootTableUtils\@Util\@\@SA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVLootTable\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    MCAPI static std::vector<class ItemStack>
    getRandomItems(class LootTable const&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?givePlayer\@LootTableUtils\@Util\@\@SAHAEAVPlayer\@\@AEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI static int givePlayer(class Player&, std::vector<class ItemStack>&, bool);
    /**
     * @symbol
     * ?lookupLootTable\@LootTableUtils\@Util\@\@SAPEAVLootTable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVILevel\@\@\@Z
     */
    MCAPI static class LootTable* lookupLootTable(std::string const&, class ILevel&);
};

}; // namespace Util
