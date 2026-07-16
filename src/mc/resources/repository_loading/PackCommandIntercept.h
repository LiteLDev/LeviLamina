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
    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&&) /*override*/;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&) /*override*/;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&&) /*override*/;

    virtual ::TaskGroup& getTaskGroup() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RepositoryLoading
