#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class Level;
struct SnapshotFilenameAndLength;
// clang-format on

class SaveCommandImpl {
public:
    // SaveCommandImpl inner types define
    enum class Errors : int {
        InvalidState   = 0,
        MutexLockFail  = 1,
        NoFileArchiver = 2,
    };

    enum class State : int {
        Idle     = 0,
        Saving   = 1,
        Complete = 2,
        Failed   = 3,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::nonstd::expected<::Bedrock::Threading::Async<void>, ::SaveCommandImpl::Errors>
    saveHold(::Level& level, ::FileArchiver* fileArchiver);

    MCAPI static ::nonstd::expected<::Bedrock::Threading::Async<void>, ::SaveCommandImpl::Errors>
    saveResume(::Level& level);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string& mGeneratedVanillaLevelDataPath();

    MCAPI static ::std::vector<::SnapshotFilenameAndLength>& mSaveAllFileList();

    MCAPI static ::std::mutex& mSaveAllMutex();

    MCAPI static ::SaveCommandImpl::State& mState();
    // NOLINTEND
};
