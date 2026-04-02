#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandItem.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/level/block/BlockSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
namespace Util { struct ReplacementResults; }
// clang-format on

class ReplaceItemCommand : public ::Command {
public:
    // ReplaceItemCommand inner types define
    enum class ReplaceMode : int {
        Destroy = 0,
        Keep    = 1,
    };

    enum class TargetType : int {
        Block     = 0,
        Entity    = 1,
        Undefined = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::TargetType>     mTargetType;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>         mTargetEntity;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                   mTargetBlock;
    ::ll::TypedStorage<4, 4, ::BlockSlot>                          mBlockSlot;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mSlotId;
    ::ll::TypedStorage<8, 8, ::CommandItem>                        mItem;
    ::ll::TypedStorage<4, 4, int>                                  mAmount;
    ::ll::TypedStorage<4, 4, int>                                  mData;
    ::ll::TypedStorage<4, 4, ::ReplaceItemCommand::ReplaceMode>    mReplaceMode;
    ::ll::TypedStorage<8, 16, ::Json::Value>                       mComponents;
    ::ll::TypedStorage<1, 1, bool>                                 mHaveComponents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~ReplaceItemCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _outputError(::CommandOutput& output, ::Util::ReplacementResults errorDetails, ::std::string const& itemName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
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
