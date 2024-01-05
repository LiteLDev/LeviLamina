#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace Util { struct ReplacementResults; }
// clang-format on

class LootCommand : public ::Command {
public:
    // prevent constructor by default
    LootCommand& operator=(LootCommand const&);
    LootCommand(LootCommand const&);
    LootCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LootCommand@@UEAA@XZ
    virtual ~LootCommand() = default;

    // vIndex: 2, symbol: ?execute@LootCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?getToolItemStack@LootCommand@@QEBA?AVItemStack@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI class ItemStack getToolItemStack(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@LootCommand@@SAXAEAVCommandRegistry@@VItemRegistryRef@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class ItemRegistryRef);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getItemsFromSource@LootCommand@@AEBA?AV?$optional@V?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBVItemStack@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::optional<std::vector<class ItemStack>> _getItemsFromSource(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class ItemStack const&,
        class Level&  level,
        DimensionType dimensionId
    ) const;

    // symbol: ?_outputError@LootCommand@@AEBAXAEAVCommandOutput@@UReplacementResults@Util@@PEBVActor@@@Z
    MCAPI void
    _outputError(class CommandOutput& output, struct Util::ReplacementResults, class Actor const* entity) const;

    // symbol: ?_outputSuccess@LootCommand@@AEBAXAEAVCommandOutput@@H@Z
    MCAPI void _outputSuccess(class CommandOutput& output, int) const;

    // symbol:
    // ?_placeItemsInTarget@LootCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI void _placeItemsInTarget(
        class CommandOrigin const&    origin,
        class CommandOutput&          output,
        std::vector<class ItemStack>& items
    ) const;

    // NOLINTEND
};
