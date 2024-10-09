#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class SaveTransactionManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    SaveTransactionManager& operator=(SaveTransactionManager const&);
    SaveTransactionManager(SaveTransactionManager const&);
    SaveTransactionManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaveTransactionManager() = default;

    MCAPI SaveTransactionManager(
        class WorkerPool&         workerPool,
        class Scheduler&          scheduler,
        std::function<void(bool)> showIconFunction
    );

    MCAPI void onBeginCompaction();

    MCAPI void onEndCompaction();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _hideGlobalSaveIcon();

    MCAPI void _showGlobalSaveIcon();

    // NOLINTEND
};
