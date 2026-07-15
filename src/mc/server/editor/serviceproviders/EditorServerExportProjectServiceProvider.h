#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
// clang-format on

namespace Editor::Services {

class EditorServerExportProjectServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerExportProjectServiceProvider() = default;

    virtual ::Bedrock::PubSub::Subscription addExportBeginTask(
        ::std::function<void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription addExportCopyCompleteTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
        addExportLevelDataMutationTask(::std::function<void(::FileArchiver::ExportType, ::LevelData&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription addExportPreFileRemovalTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
        addExportLevelDataFinalizeTask(::std::function<void(::FileArchiver::ExportType, ::LevelData&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription addExportPrePackageTask(
        ::std::function<
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&)>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription addExportCleanupTask(::std::function<void(::FileArchiver::ExportType)>) = 0;

    virtual ::std::shared_ptr<::FileArchiver::InterventionPublishers> getInterventionPublisherTable() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
