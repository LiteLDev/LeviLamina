#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct PackCommandHandle; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

namespace PackCommand {

class IPackCommandPipeline : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackCommandPipeline() /*override*/ = default;

    virtual ::PackCommand::PackCommandHandle submitMoveReplace(::PackCommand::MoveReplaceBatch&&) = 0;

    virtual ::PackCommand::PackCommandHandle
    submitUpgradeLegacyDependencies(::PackCommand::UpgradeLegacyDependenciesBatch&&) = 0;

    virtual ::PackCommand::PackCommandHandle submitRemove(::PackCommand::RemoveBatch&&) = 0;

    virtual ::TaskGroup& getTaskGroup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PackCommand
