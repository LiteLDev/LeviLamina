#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/ProjectExportStatus.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/export/ExportResult.h"
#include "mc/server/editor/serviceproviders/EditorPlayerExportProjectServiceProvider.h"
#include "mc/server/editor/serviceproviders/EditorServerExportProjectServiceProvider.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class WeakEntityRef;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace Editor { class GameOptions; }
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class EditorExportProjectManagerService : public ::Editor::Services::IEditorService,
                                          public ::Editor::Services::EditorPlayerExportProjectServiceProvider,
                                          public ::Editor::Services::EditorServerExportProjectServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7651cd;
    ::ll::UntypedStorage<8, 24> mUnkb15932;
    ::ll::UntypedStorage<1, 1>  mUnk1d50e5;
    ::ll::UntypedStorage<8, 16> mUnk5f63b9;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorExportProjectManagerService& operator=(EditorExportProjectManagerService const&);
    EditorExportProjectManagerService(EditorExportProjectManagerService const&);
    EditorExportProjectManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorExportProjectManagerService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual void beginExportProject(
        ::WeakEntityRef,
        ::Editor::GameOptions const&,
        ::Editor::WorldType const,
        ::std::function<void(::Editor::ExportResult const&, ::std::string)>
    ) /*override*/;

    virtual bool canExportProject() /*override*/;

    virtual ::Editor::ProjectExportStatus getExportStatus() /*override*/;

    virtual ::Bedrock::PubSub::Subscription addExportBeginTask(
        ::std::function<void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&)>
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription addExportCopyCompleteTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        addExportLevelDataMutationTask(::std::function<void(::FileArchiver::ExportType, ::LevelData&)>) /*override*/;

    virtual ::Bedrock::PubSub::Subscription addExportPreFileRemovalTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        addExportLevelDataFinalizeTask(::std::function<void(::FileArchiver::ExportType, ::LevelData&)>) /*override*/;

    virtual ::Bedrock::PubSub::Subscription addExportPrePackageTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
        addExportCleanupTask(::std::function<void(::FileArchiver::ExportType)>) /*override*/;

    virtual ::std::shared_ptr<::FileArchiver::InterventionPublishers> getInterventionPublisherTable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorExportProjectManagerService(
        ::Editor::ServiceProviderCollection&                   providers,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> fileManager,
        ::Editor::ProjectExportStatus                          exportStatus
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Editor::ServiceProviderCollection&                   providers,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> fileManager,
        ::Editor::ProjectExportStatus                          exportStatus
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
