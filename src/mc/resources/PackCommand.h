#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { class IPackCommandPipeline; }
namespace PackCommand { class IResourceRepositories; }
namespace PackCommand { struct RepositoriesOptions; }
// clang-format on

namespace PackCommand {
// functions
// NOLINTBEGIN
MCNAPI_S ::std::unique_ptr<::PackCommand::IPackCommandPipeline> createPackCommandPipeline(
    ::std::unique_ptr<::TaskGroup>                          taskGroup,
    ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
);

MCNAPI ::std::unique_ptr<::PackCommand::IResourceRepositories>
createResourceRepositories(::PackCommand::RepositoriesOptions options);
// NOLINTEND

} // namespace PackCommand
