#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/StorageMigrationState.h"
#include "mc/deps/core/file/PathBuffer.h"

struct StorageMigrationStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mCurrentFolderName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mSourceFolderName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mDestinationFolderName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mProgressMessage;
    ::ll::TypedStorage<4, 4, ::std::atomic<float>>                    mPercentComplete;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                     mNumFilesCopied;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                     mNumFilesTotal;
    ::ll::TypedStorage<4, 4, ::std::atomic<uint>>                     mBytesTransferred;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>                   mBytesTotal;
    ::ll::TypedStorage<4, 4, ::std::atomic<::StorageMigrationState>>  mState;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                      mErrorCode;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mStartTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StorageMigrationStatus();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
