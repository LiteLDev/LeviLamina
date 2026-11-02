#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/managers/MinecartCommandBlockManager.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockPos;
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
    MCNAPI CommandBlockManager(::Player& player, ::BlockPos pos, ::ActorUniqueID entityUniqueID);

    MCNAPI void _loadFromEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player& player, ::BlockPos pos, ::ActorUniqueID entityUniqueID);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI bool $setBlockTypeMode(::CommandBlockMode mode);

    MCNAPI bool $setConditional(bool mode);

    MCNAPI bool $setRedstone(bool mode);

    MCNAPI void $saveAndExit();

    MCNAPI ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCNAPI bool $isConditionalMode() const;

    MCNAPI bool $isRedstoneMode() const;

    MCNAPI bool $getLastPerformedConditionalMode();

    MCNAPI bool $getLastPerformedRedstoneMode();

    MCNAPI ::CommandBlockMode $getLastPerformedCBMode();

    MCNAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCNAPI ::std::unique_ptr<::CommandOrigin> $getCommandOrigin() const;

    MCNAPI bool $isMinecartCommandBlock() const;
    // NOLINTEND
};
