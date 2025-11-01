#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class ItemRegistryRef;
class ItemStack;
class Level;
namespace Util { struct ReplacementResults; }
// clang-format on

class LootCommand : public ::Command {
public:
    // LootCommand inner types define
    enum class Target : int {
        Spawn = 0,
        Give = 1,
        Insert = 2,
        Replace = 3,
        Error = 4,
    };
    
    enum class TargetIdentifier : int {
        Entity = 0,
        Block = 1,
        Error = 2,
    };
    
    enum class Source : int {
        Loot = 0,
        Kill = 1,
        Mine = 2,
        Error = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk61ee00;
    ::ll::UntypedStorage<4, 16> mUnkc2d44e;
    ::ll::UntypedStorage<4, 4> mUnkd99ddd;
    ::ll::UntypedStorage<4, 4> mUnk143aa3;
    ::ll::UntypedStorage<4, 4> mUnkc6ab40;
    ::ll::UntypedStorage<8, 32> mUnk37e4b5;
    ::ll::UntypedStorage<8, 32> mUnk1f092c;
    ::ll::UntypedStorage<8, 200> mUnkab3570;
    ::ll::UntypedStorage<8, 200> mUnke13a5c;
    ::ll::UntypedStorage<8, 200> mUnk94a0af;
    ::ll::UntypedStorage<4, 4> mUnk9b05e5;
    ::ll::UntypedStorage<4, 4> mUnkc35383;
    ::ll::UntypedStorage<4, 4> mUnk98643d;
    ::ll::UntypedStorage<4, 4> mUnk5aa67b;
    ::ll::UntypedStorage<1, 1> mUnkb95b3a;
    // NOLINTEND

public:
    // prevent constructor by default
    LootCommand& operator=(LootCommand const&);
    LootCommand(LootCommand const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~LootCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LootCommand();

    MCAPI ::std::optional<::std::vector<::ItemStack>> _getItemsFromSource(::CommandOrigin const& origin, ::CommandOutput& output, ::ItemStack const& tool, ::Level& level, ::DimensionType dimensionId) const;

    MCAPI void _outputError(::CommandOutput& output, ::Util::ReplacementResults errorDetails, ::Actor const* entity) const;

    MCAPI void _outputSuccess(::CommandOutput& output, int numItemsDropped) const;

    MCAPI void _placeItemsInTarget(::CommandOrigin const& origin, ::CommandOutput& output, ::std::vector<::ItemStack>& items) const;

    MCAPI ::ItemStack getToolItemStack(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::ItemRegistryRef itemRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
