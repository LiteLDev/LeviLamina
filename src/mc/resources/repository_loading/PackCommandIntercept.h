#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/resources/pack_command/IPackCommandPipeline.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

namespace RepositoryLoading {

class PackCommandIntercept : public ::PackCommand::IPackCommandPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd8d66c;
    ::ll::UntypedStorage<8, 24> mUnk688368;
    ::ll::UntypedStorage<8, 24> mUnk216a5b;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandIntercept& operator=(PackCommandIntercept const&);
    PackCommandIntercept(PackCommandIntercept const&);
    PackCommandIntercept();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands) /*override*/;

    // vIndex: 2
    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&) /*override*/;

    // vIndex: 3
    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&& commands) /*override*/;

    // vIndex: 4
    virtual ::TaskGroup& getTaskGroup() /*override*/;

    // vIndex: 0
    virtual ~PackCommandIntercept() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> submitAll(::PackCommand::IPackCommandPipeline& pipeline);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackCommand::PackCommandHandle $submitMoveReplace(::PackCommand::MoveReplaceBatch&& commands);

    MCNAPI ::PackCommand::PackCommandHandle
    $submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&);

    MCNAPI ::PackCommand::PackCommandHandle $submitRemove(::PackCommand::RemoveBatch&& commands);

    MCNAPI ::TaskGroup& $getTaskGroup();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RepositoryLoading
