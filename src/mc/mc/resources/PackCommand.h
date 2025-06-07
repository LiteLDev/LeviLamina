#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IResourcePackRepository;
class TaskGroup;
namespace PackCommand { class IPackCommandPipeline; }
namespace PackCommand { class IResourceRepositories; }
// clang-format on

namespace PackCommand {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::PackCommand::IPackCommandPipeline> createPackCommandPipeline(
    ::std::unique_ptr<::TaskGroup>                          taskGroup,
    ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
);

MCNAPI ::std::unique_ptr<::PackCommand::IResourceRepositories>
createResourceRepositories(::brstd::move_only_function<::Bedrock::NonOwnerPointer<::IResourcePackRepository>()> repo);
// NOLINTEND

} // namespace PackCommand
