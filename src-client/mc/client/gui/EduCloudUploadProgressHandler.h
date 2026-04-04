#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/edu_cloud/UploadWorldProgress.h"
#include "mc/client/gui/EmptyProgressHandler.h"
#include "mc/client/gui/ProgressAnimation.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

class EduCloudUploadProgressHandler : public ::EmptyProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem>> mEduCloudSaveSystem;
    ::ll::TypedStorage<4, 4, ::LoadingState>                                               mLoadingState;
    ::ll::TypedStorage<4, 4, ::EduCloud::UploadWorldProgress>                              mUploadWorldProgress;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<::Bedrock::Result<bool>>>        mUploadHandle;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>                      mCloudSaveLevelInfo;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<::Bedrock::Result<::MSGraph::Models::DriveItem, ::MSGraph::Models::GraphError>>>
                                                          mEduCloudWorldHandle;
    ::ll::TypedStorage<8, 32, ::std::string>              mLevelId;
    ::ll::TypedStorage<8, 32, ::std::string>              mLevelName;
    ::ll::TypedStorage<4, 4, ::MSGraph::GraphResponse>    mErrorStatus;
    ::ll::TypedStorage<1, 1, bool>                        mShouldRetryAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                        mHasRetriedAsNewFile;
    ::ll::TypedStorage<1, 1, bool>                        mExitingErrorScreen;
    ::ll::TypedStorage<1, 1, bool>                        mCanceled;
    ::ll::TypedStorage<8, 32, ::std::string>              mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>              mProgressText;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mEduCloudIsDoneInterval;
    ::ll::TypedStorage<1, 1, bool>                        mIsSyncing;
    ::ll::TypedStorage<8, 32, ::std::string>              mPreviousProgressText;
    ::ll::TypedStorage<4, 4, float>                       mResumableLoadingProgress;
    ::ll::TypedStorage<4, 4, float>                       mLoadingCompletedSpeed;
    ::ll::TypedStorage<8, 8, uint64>                      mFileSize;
    ::ll::TypedStorage<8, 8, uint64>                      mResumableCurrentUploadedAmount;
    ::ll::TypedStorage<8, 8, uint64>                      mResumableCurrentChunkSize;
    // NOLINTEND

public:
    // prevent constructor by default
    EduCloudUploadProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onCancel(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual void onStart(::MinecraftScreenModel& minecraftScreenModel) /*override*/;

    virtual ::LoadingState getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual float getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const /*override*/;

    virtual ::std::string getTitleText() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ProgressAnimation showLoadingBar() const /*override*/;

    virtual ~EduCloudUploadProgressHandler() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EduCloudUploadProgressHandler(
        ::std::string                                               levelId,
        ::std::string                                               levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveLevelInfo
    );

    MCAPI ::std::string const getUploadErrorCode() const;

    MCAPI void getUploadErrorStrings(::MSGraph::GraphResponse errorStatus);

    MCAPI void startUpload();

    MCAPI void updateText(::MinecraftScreenModel& minecraftScreenModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                               levelId,
        ::std::string                                               levelName,
        ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem> eduCloudSaveSystem,
        ::std::optional<::CloudSaveLevelInfo>                       cloudSaveLevelInfo
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onCancel(::MinecraftScreenModel& minecraftScreenModel);

    MCAPI void $onStart(::MinecraftScreenModel& minecraftScreenModel);

    MCFOLD ::LoadingState $getLoadingState(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getProgressMessage(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI float $getLoadingProgress(::MinecraftScreenModel& minecraftScreenModel) const;

    MCAPI ::std::string $getTitleText() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::ProgressAnimation $showLoadingBar() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
