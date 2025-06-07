#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { class IResourceRepositories; }
namespace PackCommand { class PackCommandPipelineSync; }
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
    ::ll::UntypedStorage<8, 8>  mUnk56a0ad;
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
    // vIndex: 1
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) /*override*/;

    // vIndex: 2
    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands) /*override*/;

    // vIndex: 3
    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) /*override*/;

    // vIndex: 4
    virtual ::PackCommand::PackCommandPipelineSync _getSync() /*override*/;

    // vIndex: 0
    virtual ~PackCommandPipelineImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackCommandPipelineImpl(
        ::std::unique_ptr<::TaskGroup>                          taskGroup,
        ::std::unique_ptr<::PackCommand::IResourceRepositories> repositories
    );

    MCNAPI ::PackCommand::PackCommandHandle enqueueCommands(
        ::std::variant<
            ::PackCommand::UpgradeLegacyDependenciesBatch,
            ::PackCommand::MoveReplaceBatch,
            ::PackCommand::RemoveBatch>&& commands
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
    MCNAPI ::PackCommand::PackCommandHandle $submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle
    $submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle $submitRemove(::PackCommand::RemoveBatch&& commands);

    MCNAPI ::PackCommand::PackCommandPipelineSync $_getSync();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PackCommand
