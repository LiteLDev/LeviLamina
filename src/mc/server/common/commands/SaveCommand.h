#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class SaveCommand : public ::ServerCommand {
public:
    // SaveCommand inner types define
    enum class State {};

public:
    // prevent constructor by default
    SaveCommand& operator=(SaveCommand const&);
    SaveCommand(SaveCommand const&);
    SaveCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaveCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void saveHold(class CommandOutput& output);

    MCAPI static void saveResume(class CommandOutput& output);

    MCAPI static void saveState(class CommandOutput& output);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;

    MCAPI static class Bedrock::Threading::Mutex mSaveAllMutex;

    MCAPI static ::SaveCommand::State mState;

    // NOLINTEND
};
