#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { struct MoveReplaceBatch; }
namespace PackCommand { struct RemoveBatch; }
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

namespace PackCommand {

struct CommandExecutor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3825d9;
    ::ll::UntypedStorage<8, 8>  mUnke088f7;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandExecutor& operator=(CommandExecutor const&);
    CommandExecutor(CommandExecutor const&);
    CommandExecutor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::PackCommand::MoveReplaceBatch& commands);

    MCNAPI void operator()(::PackCommand::RemoveBatch& commands);

    MCNAPI void operator()(::PackCommand::UpgradeLegacyDependenciesBatch& commands);
    // NOLINTEND
};

} // namespace PackCommand
