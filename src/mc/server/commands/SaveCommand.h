#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
struct SnapshotFilenameAndLength;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class SaveCommand : public ::ServerCommand {
public:
    // SaveCommand inner types define
    enum class Mode : int {
        Hold   = 0,
        Resume = 1,
        Query  = 2,
    };

    enum class State : int {
        Idle     = 0,
        Saving   = 1,
        Complete = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdbb95;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveCommand& operator=(SaveCommand const&);
    SaveCommand(SaveCommand const&);
    SaveCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const&, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~SaveCommand() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void saveHold(::CommandOutput& output);

    MCAPI static void saveResume(::CommandOutput& output);

    MCAPI static void saveState(::CommandOutput& output);

    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::SnapshotFilenameAndLength>& mSaveAllFileList();

    MCAPI static ::Bedrock::Threading::Mutex& mSaveAllMutex();

    MCAPI static ::SaveCommand::State& mState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const&, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
