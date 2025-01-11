#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Command;
class CommandOrigin;
class CompoundTag;
class DataLoadHelper;
class Level;
struct ActorUniqueID;
// clang-format on

class BaseCommandBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mLastOutputId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mLastOutputParams;
    ::ll::TypedStorage<8, 32, ::std::string>                mCommand;
    ::ll::TypedStorage<8, 32, ::std::string>                mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>>  mCompiledCommand;
    ::ll::TypedStorage<8, 8, uint64>                        mLastExecution;
    ::ll::TypedStorage<4, 4, int>                           mVersion;
    ::ll::TypedStorage<4, 4, int>                           mSuccessCount;
    ::ll::TypedStorage<4, 4, int>                           mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                          mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                          mTrackOutput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseCommandBlock();

    MCAPI bool _performCommand(::BlockSource& region, ::CommandOrigin const& origin, bool& markForSaving);

    MCAPI void _setCommand(::BlockSource& region, ::CommandOrigin const& origin, ::std::string const& command);

    MCAPI void compile(::CommandOrigin const& origin, ::Level& level);

    MCFOLD ::std::string const& getCommand() const;

    MCAPI ::std::string getLastOutput() const;

    MCAPI ::std::string const& getName() const;

    MCFOLD ::std::string const& getRawName() const;

    MCFOLD int getSuccessCount() const;

    MCFOLD int getTickDelay() const;

    MCFOLD bool getTrackOutput() const;

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);

    MCAPI bool performCommand(::BlockSource& region, ::ActorUniqueID const& minecartId);

    MCAPI bool performCommand(::BlockSource& region, ::BlockPos const& pos, bool& markForSaving);

    MCAPI bool save(::CompoundTag& tag) const;

    MCAPI void setCommand(::BlockSource& region, ::ActorUniqueID const& entityId, ::std::string const& command);

    MCAPI void setCommand(::BlockSource& region, ::BlockPos const& pos, ::std::string const& command);

    MCAPI void setLastOutput(::std::string const& lastOutput, ::std::vector<::std::string> const& params);

    MCAPI void setName(::std::string const& name);

    MCAPI void setShouldExecuteOnFirstTick(bool shouldExecute);

    MCFOLD void setSuccessCount(int successCount);

    MCFOLD void setTickDelay(int tickDelay);

    MCAPI void setTrackOutput(bool trackOutput);

    MCFOLD bool shouldExecuteOnFirstTick() const;

    MCAPI ~BaseCommandBlock();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DefaultCommandBlockName();
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
};
