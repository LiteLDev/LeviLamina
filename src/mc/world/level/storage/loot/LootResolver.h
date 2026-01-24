#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CommandOutput;
class Dimension;
class ItemStack;
class Level;
// clang-format on

class LootResolver {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::vector<::ItemStack>>
    getItemsFromKilling(::Actor* killer, ::Actor* victim, ::ItemStack const& tool, ::CommandOutput* commandOutput);

    MCAPI static ::std::optional<::std::vector<::ItemStack>> getItemsFromLooting(
        ::std::string const& lootTableDir,
        ::ItemStack const&   tool,
        ::Level&             level,
        ::DimensionType      dimensionId,
        ::CommandOutput*     commandOutput
    );

    MCAPI static ::std::optional<::std::vector<::ItemStack>>
    getItemsFromMining(::BlockSource const& region, ::BlockPos positionToMine, ::ItemStack const& tool);
    // NOLINTEND
};
