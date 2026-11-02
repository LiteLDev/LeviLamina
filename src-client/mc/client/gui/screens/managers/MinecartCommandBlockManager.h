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
    virtual ~MinecartCommandBlockManager() = default;

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
    MCNAPI void _loadFromBaseCommandBlock();

    MCNAPI void _saveToBaseCommandBlock(::BaseCommandBlock& baseCommandBlock);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init();

    MCNAPI bool $setCommand(::std::string const& command);

    MCNAPI bool $setHoverName(::Bedrock::Safety::RedactableString const& name);

    MCNAPI bool $setTickDelay(uint delay);

    MCNAPI bool $setShouldExecuteOnFirstTick(bool shouldExecute);

    MCNAPI bool $setLastOutput(::std::string const& lastOutput);

    MCNAPI bool $setTrackOutput(bool trackOutput);

    MCNAPI bool $setBlockTypeMode(::CommandBlockMode mode);

    MCNAPI bool $setConditional(bool mode);

    MCNAPI bool $setRedstone(bool mode);

    MCNAPI void $saveAndExit();

    MCNAPI ::std::string const& $getCommand() const;

    MCNAPI ::std::string const& $getOutput() const;

    MCNAPI bool $getTrackOutput() const;

    MCNAPI bool $isConditionalMode() const;

    MCNAPI bool $isRedstoneMode() const;

    MCNAPI bool $isMinecartCommandBlock() const;

    MCNAPI ::CommandBlockMode $getCommandBlockTypeMode() const;

    MCNAPI bool $getLastPerformedConditionalMode();

    MCNAPI bool $getLastPerformedRedstoneMode();

    MCNAPI ::CommandBlockMode $getLastPerformedCBMode();

    MCNAPI ::Bedrock::Safety::RedactableString const& $getHoverName() const;

    MCNAPI uint $getTickDelay() const;

    MCNAPI bool $shouldExecuteOnFirstTick() const;

    MCNAPI ::BaseCommandBlock* $getBaseCommandBlock();

    MCNAPI ::std::unique_ptr<::CommandOrigin> $getCommandOrigin() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
