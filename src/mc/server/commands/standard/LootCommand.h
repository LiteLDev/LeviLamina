#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class ItemRegistryRef;
class Player;
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
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry, ::ItemRegistryRef itemRegistry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
