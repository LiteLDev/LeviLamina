#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { class IResourceRepositories; }
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

namespace PackCommand {

class PackCommandPipelineImpl : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke259f5;
    ::ll::UntypedStorage<8, 16> mUnk39534f;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandPipelineImpl& operator=(PackCommandPipelineImpl const&);
    PackCommandPipelineImpl(PackCommandPipelineImpl const&);
    PackCommandPipelineImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&&) /*override*/;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&) /*override*/;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&&) /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackCommandPipelineImpl(
        ::std::unique_ptr<::TaskGroup>                          taskGroup,
        ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::TaskGroup>                          taskGroup,
        ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PackCommand
