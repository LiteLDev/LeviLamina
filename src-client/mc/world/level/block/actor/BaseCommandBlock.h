#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
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
    ::ll::TypedStorage<8, 32, ::std::string>                       mLastOutputId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>        mLastOutputParams;
    ::ll::TypedStorage<8, 32, ::std::string>                       mCommand;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>>         mCompiledCommand;
    ::ll::TypedStorage<8, 8, uint64>                               mLastExecution;
    ::ll::TypedStorage<4, 4, int>                                  mVersion;
    ::ll::TypedStorage<4, 4, int>                                  mSuccessCount;
    ::ll::TypedStorage<4, 4, int>                                  mTickDelay;
    ::ll::TypedStorage<1, 1, bool>                                 mExecuteOnFirstTick;
    ::ll::TypedStorage<1, 1, bool>                                 mTrackOutput;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&);
    BaseCommandBlock(BaseCommandBlock const&);
    BaseCommandBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _performCommand(::BlockSource& region, ::CommandOrigin const& origin, bool& markForSaving);

    MCAPI void _setCommand(::BlockSource& region, ::CommandOrigin const& origin, ::std::string const& command);

    MCAPI void compile(::CommandOrigin const& origin, ::Level& level);

    MCAPI ::std::string getLastOutput() const;

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);

    MCAPI bool save(::CompoundTag& tag) const;

    MCAPI void setCommand(::BlockSource& region, ::ActorUniqueID const& entityId, ::std::string const& command);

    MCAPI void setLastOutput(::std::string const& lastOutput, ::std::vector<::std::string> const& params);

    MCAPI void setTrackOutput(bool trackOutput);

    MCAPI ~BaseCommandBlock();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Safety::RedactableString const& DefaultCommandBlockName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
