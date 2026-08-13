#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class RepositoryPacks;
class ResourcePack;
class TaskGroup;
namespace PackCommand { class IPackCommandPipeline; }
namespace RepositoryLoading { struct AllRefreshTaskData; }
namespace RepositoryLoading { struct LoadTaskData; }
namespace RepositoryLoading { struct PackModifications; }
// clang-format on

namespace RepositoryLoading {
// functions
// NOLINTBEGIN
MCNAPI ::Bedrock::Threading::Async<::RepositoryLoading::PackModifications>
loadPacks(::TaskGroup& taskGroup, ::RepositoryLoading::LoadTaskData& data);

MCNAPI ::Bedrock::Threading::Async<void>
refreshPacks(::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData> taskData);

MCNAPI ::Bedrock::Threading::Async<void> removePacksIf(
    ::brstd::function_ref<bool(::ResourcePack const&)> callback,
    ::RepositoryPacks&                                 packs,
    ::TaskGroup&                                       taskGroup,
    ::PackCommand::IPackCommandPipeline&               commands
);
// NOLINTEND

} // namespace RepositoryLoading
