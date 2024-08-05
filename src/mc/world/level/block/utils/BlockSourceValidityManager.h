#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class BlockSourceValidityManager {
public:
    // prevent constructor by default
    BlockSourceValidityManager& operator=(BlockSourceValidityManager const&);
    BlockSourceValidityManager(BlockSourceValidityManager const&);
    BlockSourceValidityManager();

public:
    // NOLINTBEGIN
    MCAPI
    BlockSourceValidityManager(gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class GameplayUserManager>> const&, std::unique_ptr<class IBlockSourceValidityProxy>);

    MCAPI void addBlockSourceForValidityTracking(class IBlockSource*);

    MCAPI void checkBlockSourceValidity();

    MCAPI void removeBlockSourceFromValidityTracking(class IBlockSource*);

    MCAPI ~BlockSourceValidityManager();

    // NOLINTEND
};
