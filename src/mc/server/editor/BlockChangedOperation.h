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
    // symbol:
    // ?DEFAULT_OPERATION_NAME@BlockChangedOperation@Transactions@Editor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_OPERATION_NAME;

    // NOLINTEND
};

}; // namespace Editor::Transactions
