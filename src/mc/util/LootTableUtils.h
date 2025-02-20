#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Container;
class Dimension;
class ItemStack;
class Level;
class LootTable;
class LootTableContext;
class Player;
class Random;
// clang-format on

namespace Util {

class LootTableUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string convertFromJavaLootTableName(::std::string const& lootTableName);

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
    getRandomItems(::std::string const& tableName, ::Random& random, ::LootTableContext& context);

    MCAPI static int givePlayer(::Player& player, ::std::vector<::ItemStack>& items, bool shouldAddWhenFull);
    // NOLINTEND
};

} // namespace Util
