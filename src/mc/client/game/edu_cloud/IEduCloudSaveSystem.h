#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/edu_cloud/CloudItemType.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/game/edu_cloud/DrivePaths.h"
#include "mc/client/game/edu_cloud/LaunchOptions.h"
#include "mc/client/game/edu_cloud/UploadWorldProgress.h"
#include "mc/client/services/ms_graph/GraphResponse.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/client/util/edu_cloud_utils/UploadType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Copyable.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace MSGraph::Models { struct DownloadUrlInfo; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
// clang-format on

namespace EduCloud {

struct IEduCloudSaveSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IEduCloudSaveSystem() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IEduCloudSaveSystem() /*override*/;
#endif

    virtual void update() = 0;

    virtual bool needsCloudChecks(::LevelSummary&, ::EduCloud::LaunchOptions) = 0;

    virtual bool readyToLaunch(::std::string&, ::EduCloud::LaunchOptions&) = 0;

    virtual void onLocalLaunch(::std::string const&) = 0;

    virtual bool getShowingConflictPopup() = 0;

    virtual void setShowingConflictPopup(bool) = 0;

    virtual void
    queueCloudWorldDownload(::std::string const&, ::std::string const&, ::EduCloud::LaunchOptions, bool const) = 0;

    virtual ::EduCloudUtils::Operation getCurrentOperation() = 0;

    virtual ::EduCloudUtils::UploadType getWorldUploadType() = 0;

    virtual ::Bedrock::Threading::Async<
        ::Bedrock::Copyable<::Bedrock::Result<::std::string, ::MSGraph::Models::GraphError>>>
    getUploadFolderUrl() = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Copyable<::Bedrock::Result<bool>>> uploadWorld(
        ::std::string const&,
        ::std::string const&,
        ::std::function<void(::EduCloud::UploadWorldProgress, ::MSGraph::GraphResponse)>,
        ::std::function<void(uint64, uint64)>,
        bool
    ) = 0;

    virtual ::std::string getFolderDisplayName() = 0;

    virtual ::Bedrock::Threading::Async<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DriveItemCollection, ::MSGraph::Models::GraphError>>>
        fetch(::std::string, ::EduCloud::DrivePaths) = 0;

    virtual ::Bedrock::Threading::Async<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DownloadUrlInfo, ::MSGraph::Models::GraphError>>>
    getDownloadUrlInfo(::EduCloud::CloudItemType const, ::std::string const&) = 0;

    virtual ::Bedrock::Threading::Async<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DriveItem, ::MSGraph::Models::GraphError>>>
    getCloudItemById(::EduCloud::CloudItemType const, ::std::string const&) = 0;

    virtual ::EduCloud::ConflictResolutionStatus
    determineConflictResolutionStatus(::std::string const&, ::std::string const&, bool, bool) = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::GraphError>>>
    deleteItemById(::std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EduCloud
