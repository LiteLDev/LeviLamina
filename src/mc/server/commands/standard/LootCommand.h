#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/block/BlockSlot.h"

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
class Player;
namespace Util { struct ReplacementResults; }
// clang-format on

class LootCommand : public ::Command {
public:
    // LootCommand inner types define
    enum class Source : int {
        Loot  = 0,
        Kill  = 1,
        Mine  = 2,
        Error = 3,
    };

    enum class Target : int {
        Spawn   = 0,
        Give    = 1,
        Insert  = 2,
        Replace = 3,
        Error   = 4,
    };

    enum class TargetIdentifier : int {
        Entity = 0,
        Block  = 1,
        Error  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>              mMinePosition;
    ::ll::TypedStorage<4, 4, ::LootCommand::Target>                mTarget;
    ::ll::TypedStorage<4, 4, ::LootCommand::Source>                mSource;
    ::ll::TypedStorage<4, 4, ::LootCommand::TargetIdentifier>      mReplacementIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                       mLootTable;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTool;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mEntitySource;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mEntityTarget;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Player>>        mPlayerTarget;
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<4, 4, int>                                  mConsecutiveSlotFillCount;
    ::ll::TypedStorage<1, 1, bool>                                 mSlotFillCountIsSet;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

#ifdef LL_PLAT_S
    virtual ~LootCommand() /*override*/;
#else // LL_PLAT_C
    virtual ~LootCommand() /*override*/ = default;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LootCommand();

    MCAPI ::std::optional<::std::vector<::ItemStack>> _getItemsFromSource(
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        ::ItemStack const&     tool,
        ::Level&               level,
        ::DimensionType        dimensionId
    ) const;

    MCAPI void
    _outputError(::CommandOutput& output, ::Util::ReplacementResults errorDetails, ::Actor const* entity) const;

    MCAPI void _outputSuccess(::CommandOutput& output, int numItemsDropped) const;

    MCAPI void _placeItemsInTarget(
        ::CommandOrigin const&      origin,
        ::CommandOutput&            output,
        ::std::vector<::ItemStack>& items
    ) const;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
