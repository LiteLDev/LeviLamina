#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class SaveCommand {
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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: ?execute@SaveCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@SaveCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?saveHold@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveHold(class CommandOutput&);

    // symbol: ?saveResume@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveResume(class CommandOutput&);

    // symbol: ?saveState@SaveCommand@@CAXAEAVCommandOutput@@@Z
    MCAPI static void saveState(class CommandOutput&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mSaveAllFileList@SaveCommand@@0V?$vector@USnapshotFilenameAndLength@@V?$allocator@USnapshotFilenameAndLength@@@std@@@std@@A
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;

    // symbol: ?mSaveAllMutex@SaveCommand@@0VMutex@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::Mutex mSaveAllMutex;

    // symbol: ?mState@SaveCommand@@0W4State@1@A
    MCAPI static ::SaveCommand::State mState;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mSaveAllFileList() { return mSaveAllFileList; }

    auto& $mSaveAllMutex() { return mSaveAllMutex; }

    auto& $mState() { return mState; }

    // NOLINTEND
};
