#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
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
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) /*override*/;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands) /*override*/;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;

    virtual ~PackCommandPipelineImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackCommand::PackCommandHandle enqueueCommands(
        ::std::variant<
            ::PackCommand::UpgradeLegacyDependenciesBatch,
            ::PackCommand::MoveReplaceBatch,
            ::PackCommand::RemoveBatch>&& commands
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackCommand::PackCommandHandle $submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle
    $submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle $submitRemove(::PackCommand::RemoveBatch&& commands);

    MCNAPI ::TaskGroup& $getTaskGroup();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PackCommand
