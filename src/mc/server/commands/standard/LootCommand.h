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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LootCommand() = default;

    // vIndex: 2, symbol: ?execute@LootCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?getToolItemStack@LootCommand@@QEBA?AVItemStack@@AEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI class ItemStack getToolItemStack(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@LootCommand@@SAXAEAVCommandRegistry@@VItemRegistryRef@@@Z
    MCAPI static void setup(class CommandRegistry&, class ItemRegistryRef);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getItemsFromSource@LootCommand@@AEBA?AV?$optional@V?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@std@@AEBVCommandOrigin@@AEAVCommandOutput@@AEBVItemStack@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI std::optional<std::vector<class ItemStack>> _getItemsFromSource(
        class CommandOrigin const&,
        class CommandOutput&,
        class ItemStack const&,
        class Level&,
        DimensionType
    ) const;

    // symbol: ?_outputError@LootCommand@@AEBAXAEAVCommandOutput@@UReplacementResults@Util@@PEBVActor@@@Z
    MCAPI void _outputError(class CommandOutput&, struct Util::ReplacementResults, class Actor const*) const;

    // symbol: ?_outputSuccess@LootCommand@@AEBAXAEAVCommandOutput@@H@Z
    MCAPI void _outputSuccess(class CommandOutput&, int) const;

    // symbol:
    // ?_placeItemsInTarget@LootCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@@Z
    MCAPI void
    _placeItemsInTarget(class CommandOrigin const&, class CommandOutput&, std::vector<class ItemStack>&) const;

    // NOLINTEND
};
