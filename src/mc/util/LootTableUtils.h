#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

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
    MCAPI static std::string convertFromJavaLootTableName(std::string const&);

    MCAPI static int dropItems(
        class BlockSource&                  region,
        class Spawner&                      spawner,
        class Actor*                        summoner,
        std::vector<class ItemStack> const& items,
        class BlockPos const&               position
    );

    MCAPI static int fillContainer(class Container& container, std::vector<class ItemStack>& items);

    MCAPI static void fillContainer(
        class Level&       level,
        class Container&   container,
        class Random&      random,
        std::string const& tableName,
        DimensionType      dimensionId,
        class Actor*       entity
    );

    MCAPI static std::vector<class ItemStack> generateRandomDeathLoot(
        class LootTable const&         table,
        class Actor&                   entity,
        class ActorDamageSource const* damageSource,
        class ItemStack const*         tool,
        class Player*                  killer,
        float                          luck
    );

    MCAPI static std::vector<class ItemStack>
    getRandomItems(class LootTable const& table, class Random& random, class LootTableContext& context);

    MCAPI static std::vector<class ItemStack>
    getRandomItems(std::string const& tableName, class Random& random, class LootTableContext& context);

    MCAPI static int givePlayer(class Player& player, std::vector<class ItemStack>& items, bool shouldAddWhenFull);

    MCAPI static class LootTable* lookupLootTable(std::string const& tableName, class ILevel& level);

    // NOLINTEND
};

}; // namespace Util
