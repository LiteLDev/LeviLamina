#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

class BlockChangedOperation {

public:
    // prevent constructor by default
    BlockChangedOperation& operator=(BlockChangedOperation const&) = delete;
    BlockChangedOperation(BlockChangedOperation const&)            = delete;
    BlockChangedOperation()                                        = delete;

public:
    /**
     * @symbol
     * ?DEFAULT_OPERATION_NAME\@BlockChangedOperation\@Transactions\@Editor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_OPERATION_NAME; // NOLINT
};

}; // namespace Editor::Transactions
