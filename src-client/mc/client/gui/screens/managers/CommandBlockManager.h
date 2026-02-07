#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/MinecartCommandBlockManager.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockPos;
class CommandBlockActor;
class CommandOrigin;
class Player;
struct ActorUniqueID;
// clang-format on

class CommandBlockManager : public ::MinecartCommandBlockManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::CommandBlockMode> mCBMode;
    ::ll::TypedStorage<1, 1, bool>               mIsConditionalMode;
    ::ll::TypedStorage<1, 1, bool>               mIsRedstoneMode;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandBlockManager() /*override*/ = default;

    virtual void init() /*override*/;

    virtual bool setBlockTypeMode(::CommandBlockMode mode) /*override*/;

    virtual bool setConditional(bool mode) /*override*/;

    virtual bool setRedstone(bool mode) /*override*/;

    virtual void saveAndExit() /*override*/;

    virtual ::CommandBlockMode getCommandBlockTypeMode() const /*override*/;

    virtual bool isConditionalMode() const /*override*/;

    virtual bool isRedstoneMode() const /*override*/;

    virtual bool getLastPerformedConditionalMode() /*override*/;

    virtual bool getLastPerformedRedstoneMode() /*override*/;

    virtual ::CommandBlockMode getLastPerformedCBMode() /*override*/;

    virtual ::BaseCommandBlock* getBaseCommandBlock() /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> getCommandOrigin() const /*override*/;

    virtual bool isMinecartCommandBlock() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockManager(::Player& player, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCAPI ::CommandBlockActor* _getCommandBlockEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::BlockPos pos, ::ActorUniqueID entityUniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();

    MCAPI bool $setBlockTypeMode(::CommandBlockMode mode);

    MCAPI bool $setConditional(bool mode);

    MCAPI bool $setRedstone(bool mode);

    MCAPI void $saveAndExit();

    MCAPI ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCAPI bool $isConditionalMode() const;

    MCAPI bool $isRedstoneMode() const;

    MCAPI bool $getLastPerformedConditionalMode();

    MCAPI bool $getLastPerformedRedstoneMode();

    MCAPI ::CommandBlockMode $getLastPerformedCBMode();

    MCAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCAPI ::std::unique_ptr<::CommandOrigin> $getCommandOrigin() const;

    MCFOLD bool $isMinecartCommandBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
