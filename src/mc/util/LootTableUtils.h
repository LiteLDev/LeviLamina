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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string convertFromJavaLootTableName(::std::string const& lootTableName);

    MCAPI static int dropItems(
        ::BlockSource&                    region,
        ::Spawner&                        spawner,
        ::Actor*                          summoner,
        ::std::vector<::ItemStack> const& items,
        ::BlockPos const&                 position
    );

    MCAPI static int fillContainer(::Container& container, ::std::vector<::ItemStack>& items);

    MCAPI static void fillContainer(
        ::Level&             level,
        ::Container&         container,
        ::Random&            random,
        ::std::string const& tableName,
        ::DimensionType      dimensionId,
        ::Actor*             entity
    );

    MCAPI static ::std::vector<::ItemStack> generateRandomDeathLoot(
        ::LootTable const&         table,
        ::Actor&                   entity,
        ::ActorDamageSource const* damageSource,
        ::ItemStack const*         tool,
        ::Player*                  killer,
        float                      luck
    );

    MCAPI static ::std::vector<::ItemStack>
    getRandomItems(::LootTable const& table, ::Random& random, ::LootTableContext& context);

    MCAPI static ::std::vector<::ItemStack>
    getRandomItems(::std::string const& tableName, ::Random& random, ::LootTableContext& context);

    MCAPI static int givePlayer(::Player& player, ::std::vector<::ItemStack>& items, bool shouldAddWhenFull);

    MCAPI static ::LootTable* lookupLootTable(::std::string const& tableName, ::ILevel& level);
    // NOLINTEND
};

} // namespace Util
