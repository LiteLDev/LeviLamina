#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/Command.h"

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
    // vIndex: 0
    virtual ~LootCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI class ItemStack getToolItemStack(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry, class ItemRegistryRef itemRegistry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<std::vector<class ItemStack>> _getItemsFromSource(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class ItemStack const&     tool,
        class Level&               level,
        DimensionType              dimensionId
    ) const;

    MCAPI void
    _outputError(class CommandOutput& output, struct Util::ReplacementResults errorDetails, class Actor const* entity)
        const;

    MCAPI void _outputSuccess(class CommandOutput& output, int numItemsDropped) const;

    MCAPI void _placeItemsInTarget(
        class CommandOrigin const&    origin,
        class CommandOutput&          output,
        std::vector<class ItemStack>& items
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
