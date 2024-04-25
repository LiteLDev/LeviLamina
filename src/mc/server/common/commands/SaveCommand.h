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
    // vIndex: 0, symbol: __gen_??1SaveCommand@@UEAA@XZ
    virtual ~SaveCommand() = default;

    // vIndex: 2, symbol: ?execute@SaveCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput& output) const;

    // symbol: ?setup@SaveCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?saveHold@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveHold(class CommandOutput& output);

    // symbol: ?saveResume@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveResume(class CommandOutput& output);

    // symbol: ?saveState@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveState(class CommandOutput& output);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mSaveAllFileList@SaveCommand@@0V?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@A
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;

    // symbol: ?mSaveAllMutex@SaveCommand@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mSaveAllMutex;

    // symbol: ?mState@SaveCommand@@0W4State@1@A
    MCAPI static ::SaveCommand::State mState;

    // NOLINTEND
};
