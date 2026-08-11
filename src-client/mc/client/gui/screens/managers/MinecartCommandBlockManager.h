#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/CommandBlockMode.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class CommandOrigin;
class Player;
// clang-format on

class MinecartCommandBlockManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                            mPlayer;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mActorUniqueId;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCommand;
    ::ll::TypedStorage<8, 32, ::std::string>                       mLastOutput;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mHoverName;
    ::ll::TypedStorage<4, 4, uint>                                 mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartCommandBlockManager& operator=(MinecartCommandBlockManager const&);
    MinecartCommandBlockManager(MinecartCommandBlockManager const&);
    MinecartCommandBlockManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartCommandBlockManager();

    virtual void init();

    virtual bool setCommand(::std::string const& command);

    virtual bool setHoverName(::Bedrock::Safety::RedactableString const& name);

    virtual bool setTickDelay(uint delay);

    virtual bool setShouldExecuteOnFirstTick(bool shouldExecute);

    virtual bool setLastOutput(::std::string const& lastOutput);

    virtual bool setTrackOutput(bool trackOutput);

    virtual bool setBlockTypeMode(::CommandBlockMode mode);

    virtual bool setConditional(bool mode);

    virtual bool setRedstone(bool mode);

    virtual void saveAndExit();

    virtual ::std::string const& getCommand() const;

    virtual ::std::string const& getOutput() const;

    virtual bool getTrackOutput() const;

    virtual bool isConditionalMode() const;

    virtual bool isRedstoneMode() const;

    virtual bool isMinecartCommandBlock() const;

    virtual ::CommandBlockMode getCommandBlockTypeMode() const;

    virtual bool getLastPerformedConditionalMode();

    virtual bool getLastPerformedRedstoneMode();

    virtual ::CommandBlockMode getLastPerformedCBMode();

    virtual ::Bedrock::Safety::RedactableString const& getHoverName() const;

    virtual uint getTickDelay() const;

    virtual bool shouldExecuteOnFirstTick() const;

    virtual ::BaseCommandBlock* getBaseCommandBlock();

    virtual ::std::unique_ptr<::CommandOrigin> getCommandOrigin() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadFromBaseCommandBlock();

    MCAPI void _saveToBaseCommandBlock(::BaseCommandBlock& baseCommandBlock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init();

    MCAPI bool $setCommand(::std::string const& command);

    MCAPI bool $setHoverName(::Bedrock::Safety::RedactableString const& name);

    MCAPI bool $setTickDelay(uint delay);

    MCAPI bool $setShouldExecuteOnFirstTick(bool shouldExecute);

    MCAPI bool $setLastOutput(::std::string const& lastOutput);

    MCAPI bool $setTrackOutput(bool trackOutput);

    MCFOLD bool $setBlockTypeMode(::CommandBlockMode mode);

    MCFOLD bool $setConditional(bool mode);

    MCFOLD bool $setRedstone(bool mode);

    MCAPI void $saveAndExit();

    MCFOLD ::std::string const& $getCommand() const;

    MCFOLD ::std::string const& $getOutput() const;

    MCAPI bool $getTrackOutput() const;

    MCFOLD bool $isConditionalMode() const;

    MCFOLD bool $isRedstoneMode() const;

    MCFOLD bool $isMinecartCommandBlock() const;

    MCFOLD ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCFOLD bool $getLastPerformedConditionalMode();

    MCFOLD bool $getLastPerformedRedstoneMode();

    MCFOLD ::CommandBlockMode $getLastPerformedCBMode();

    MCFOLD ::Bedrock::Safety::RedactableString const& $getHoverName() const;

    MCFOLD uint $getTickDelay() const;

    MCAPI bool $shouldExecuteOnFirstTick() const;

    MCAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCAPI ::std::unique_ptr<::CommandOrigin> $getCommandOrigin() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
