#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class BlockSourceValidityManager {
public:
    // prevent constructor by default
    BlockSourceValidityManager& operator=(BlockSourceValidityManager const&);
    BlockSourceValidityManager(BlockSourceValidityManager const&);
    BlockSourceValidityManager();

public:
    // NOLINTBEGIN
    MCAPI BlockSourceValidityManager(
        gsl::not_null<class StackRefResult<class DimensionManager>> const&    dimensionManager,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager,
        std::unique_ptr<class IBlockSourceValidityProxy>                      blockSourceValidityProxy
    );

    MCAPI void addBlockSourceForValidityTracking(class IBlockSource* region);

    MCAPI void checkBlockSourceValidity();

    MCAPI void removeBlockSourceFromValidityTracking(class IBlockSource* region);

    MCAPI ~BlockSourceValidityManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        gsl::not_null<class StackRefResult<class DimensionManager>> const&    dimensionManager,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManager,
        std::unique_ptr<class IBlockSourceValidityProxy>                      blockSourceValidityProxy
    );

    MCAPI void dtor$();

    // NOLINTEND
};
