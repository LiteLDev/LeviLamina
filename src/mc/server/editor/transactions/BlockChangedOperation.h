#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

class BlockChangedOperation {
public:
    // prevent constructor by default
    BlockChangedOperation& operator=(BlockChangedOperation const&);
    BlockChangedOperation(BlockChangedOperation const&);
    BlockChangedOperation();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::string const& DEFAULT_OPERATION_NAME();

    // NOLINTEND
};

}; // namespace Editor::Transactions
