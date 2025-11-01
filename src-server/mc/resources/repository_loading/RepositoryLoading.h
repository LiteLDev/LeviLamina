#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/repository_loading/PackModifications.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class InvalidPacks;
class PackSource;
class RepositoryPacks;
class ResourcePack;
class TaskGroup;
struct PackSourceLoadResult;
namespace PackCommand { class IPackCommandPipeline; }
namespace RepositoryLoading { struct AllRefreshTaskData; }
namespace RepositoryLoading { struct LoadTaskData; }
namespace RepositoryLoading { struct PackModifications; }
// clang-format on

namespace RepositoryLoading {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Threading::Async<void> initialize(::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData> taskData);

MCNAPI ::Bedrock::Threading::Async<::PackSourceLoadResult> loadAndUpgradePacks(::PackSource& packSource, ::IPackManifestFactory& manifestFactory, ::IContentKeyProvider const& keyProvider, ::PackCommand::IPackCommandPipeline& commands);

MCNAPI ::Bedrock::Threading::Async<::RepositoryLoading::PackModifications> loadPacks(::TaskGroup& taskGroup, ::RepositoryLoading::LoadTaskData& data);

MCNAPI void processReportErrors(::std::vector<::RepositoryLoading::PackModifications::ReportError> const& errors, ::InvalidPacks& invalid);

MCNAPI ::Bedrock::Threading::Async<void> refreshPacks(::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData> taskData);

MCNAPI ::Bedrock::Threading::Async<void> reloadUserPacks(::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData> taskData, ::std::shared_ptr<::RepositoryPacks const> originalPacks);

MCNAPI ::Bedrock::Threading::Async<void> removePacksIf(::brstd::function_ref<bool(::ResourcePack const&)> callback, ::RepositoryPacks& packs, ::TaskGroup& taskGroup, ::PackCommand::IPackCommandPipeline& commands);
// NOLINTEND

}
