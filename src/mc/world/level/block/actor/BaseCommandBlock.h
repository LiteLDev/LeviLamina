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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _performCommand(::BlockSource& region, ::CommandOrigin const& origin, bool& markForSaving);

    MCNAPI void _setCommand(::BlockSource& region, ::CommandOrigin const& origin, ::std::string const& command);

    MCNAPI void compile(::CommandOrigin const& origin, ::Level& level);

    MCNAPI ::std::string getLastOutput() const;

    MCNAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);

    MCNAPI bool save(::CompoundTag& tag) const;

    MCNAPI void setLastOutput(::std::string const& lastOutput, ::std::vector<::std::string> const& params);

    MCNAPI ~BaseCommandBlock();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Safety::RedactableString const& DefaultCommandBlockName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
