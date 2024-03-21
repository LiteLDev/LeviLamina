#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockPos;
class BlockSource;
class Container;
class Dimension;
class ILevel;
class ItemStack;
class Level;
class LootTable;
class LootTableContext;
class Player;
class Random;
class Spawner;
// clang-format on

namespace Util {

class LootTableUtils {
public:
    // prevent constructor by default
    LootTableUtils& operator=(LootTableUtils const&);
    LootTableUtils(LootTableUtils const&);
    LootTableUtils();

public:
    // NOLINTBEGIN
    // symbol:
    // ?convertFromJavaLootTableName@LootTableUtils@Util@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV34@@Z
    MCAPI static std::string convertFromJavaLootTableName(std::string const&);

    // symbol:
    // ?dropItems@LootTableUtils@Util@@SAHAEAVBlockSource@@AEAVSpawner@@PEAVActor@@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVBlockPos@@@Z
    MCAPI static int dropItems(
        class BlockSource&                  region,
        class Spawner&                      spawner,
        class Actor*                        summoner,
        std::vector<class ItemStack> const& items,
        class BlockPos const&               position
    );

    // symbol:
    // ?fillContainer@LootTableUtils@Util@@SAHAEAVContainer@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI static int fillContainer(class Container& container, std::vector<class ItemStack>& items);

    // symbol:
    // ?fillContainer@LootTableUtils@Util@@SAXAEAVLevel@@AEAVContainer@@AEAVRandom@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@PEAVActor@@@Z
    MCAPI static void fillContainer(
        class Level&       level,
        class Container&   container,
        class Random&      random,
        std::string const& tableName,
        DimensionType      dimensionId,
        class Actor*       entity
    );

    // symbol:
    // ?generateRandomDeathLoot@LootTableUtils@Util@@SA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVLootTable@@AEAVActor@@PEBVActorDamageSource@@PEBVItemStack@@PEAVPlayer@@M@Z
    MCAPI static std::vector<class ItemStack> generateRandomDeathLoot(
        class LootTable const&         table,
        class Actor&                   entity,
        class ActorDamageSource const* damageSource,
        class ItemStack const*,
        class Player*,
        float luck
    );

    // symbol:
    // ?getRandomItems@LootTableUtils@Util@@SA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVLootTable@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI static std::vector<class ItemStack>
    getRandomItems(class LootTable const& table, class Random& random, class LootTableContext& context);

    // symbol:
    // ?getRandomItems@LootTableUtils@Util@@SA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI static std::vector<class ItemStack>
    getRandomItems(std::string const& tableName, class Random& random, class LootTableContext& context);

    // symbol:
    // ?givePlayer@LootTableUtils@Util@@SAHAEAVPlayer@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@_N@Z
    MCAPI static int givePlayer(class Player& player, std::vector<class ItemStack>& items, bool);

    // symbol:
    // ?lookupLootTable@LootTableUtils@Util@@SAPEAVLootTable@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVILevel@@@Z
    MCAPI static class LootTable* lookupLootTable(std::string const& tableName, class ILevel& level);

    // NOLINTEND
};

}; // namespace Util
