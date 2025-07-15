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
#include "mc/common/edu_cloud_proxy/Operation.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Copyable.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace Core { class Path; }
namespace EduCloudProxy { struct CloudProject; }
namespace MSGraph::Models { struct DownloadUrlInfo; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct DriveItemCollection; }
namespace MSGraph::Models { struct GraphError; }
namespace MSGraph::Models { struct UploadSession; }
// clang-format on

namespace EduCloud {

struct IEduCloudSaveSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEduCloudSaveSystem() /*override*/ = default;

    // vIndex: 1
    virtual void update() = 0;

    // vIndex: 2
    virtual bool needsCloudChecks(::LevelSummary&, ::EduCloud::LaunchOptions) = 0;

    // vIndex: 3
    virtual bool readyToLaunch(::std::string&, ::EduCloud::LaunchOptions&) = 0;

    // vIndex: 4
    virtual void onLocalLaunch(::std::string const&) = 0;

    // vIndex: 5
    virtual bool getShowingConflictPopup() = 0;

    // vIndex: 6
    virtual void setShowingConflictPopup(bool) = 0;

    // vIndex: 7
    virtual void
    queueCloudWorldDownload(::std::string const&, ::std::string const&, ::EduCloud::LaunchOptions, bool const) = 0;

    // vIndex: 8
    virtual ::EduCloudUtils::Operation getCurrentOperation() = 0;

    // vIndex: 9
    virtual ::EduCloudUtils::UploadType getWorldUploadType() = 0;

    // vIndex: 10
    virtual void receivedMakeCodeRequest(
        ::std::string const,
        ::EduCloudProxy::Operation const,
        ::std::string const,
        ::std::vector<::std::string> const,
        ::EduCloudProxy::CloudProject
    ) = 0;

    // vIndex: 11
    virtual void initializeCloudProxy(::std::function<void(::std::string const&)>) = 0;

    // vIndex: 12
    virtual void syncEmbeddedWorldProjects(::std::vector<::Core::Path>) = 0;

    // vIndex: 13
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<
        ::Bedrock::Copyable<::Bedrock::Result<::std::string, ::MSGraph::Models::GraphError>>>>
    getUploadFolderUrl() = 0;

    // vIndex: 14
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Copyable<::Bedrock::Result<bool>>>>
    uploadWorld(
        ::std::string const&,
        ::std::string const&,
        ::std::function<void(::EduCloud::UploadWorldProgress, ::MSGraph::GraphResponse)>,
        ::std::function<void(uint64, uint64)>,
        bool
    ) = 0;

    // vIndex: 15
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Copyable<::Bedrock::Result<bool>>>>
    uploadMakeCodeProject(::std::string const, ::EduCloudProxy::CloudProject&) = 0;

    // vIndex: 16
    virtual ::std::string getFolderDisplayName() = 0;

    // vIndex: 17
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DriveItemCollection, ::MSGraph::Models::GraphError>>>>
        fetch(::EduCloud::CloudItemType, ::std::string, ::EduCloud::DrivePaths) = 0;

    // vIndex: 18
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DownloadUrlInfo, ::MSGraph::Models::GraphError>>>>
    getDownloadUrlInfo(::EduCloud::CloudItemType const, ::std::string const&) = 0;

    // vIndex: 19
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<
        ::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::DriveItem, ::MSGraph::Models::GraphError>>>>
    getCloudItemById(::EduCloud::CloudItemType const, ::std::string const&) = 0;

    // vIndex: 20
    virtual ::EduCloud::ConflictResolutionStatus
    determineConflictResolutionStatus(::std::string const&, ::std::string const&, bool, bool) = 0;

    // vIndex: 21
    virtual ::std::shared_ptr<
        ::Bedrock::Threading::IAsyncResult<::Bedrock::Copyable<::Bedrock::Result<::MSGraph::Models::GraphError>>>>
    deleteItemById(::std::string const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EduCloud
