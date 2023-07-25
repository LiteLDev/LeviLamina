#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

class BlockChangedOperation {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITOR_TRANSACTIONS_BLOCKCHANGEDOPERATION
public:
    BlockChangedOperation& operator=(BlockChangedOperation const&) = delete;
    BlockChangedOperation(BlockChangedOperation const&)            = delete;
    BlockChangedOperation()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?DEFAULT_OPERATION_NAME\@BlockChangedOperation\@Transactions\@Editor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_OPERATION_NAME;
};

}; // namespace Editor::Transactions
