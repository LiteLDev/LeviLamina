#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class GameplayUserManager;
class IBlockSourceValidityProxy;
// clang-format on

class BlockSourceValidityManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2cb1b4;
    ::ll::UntypedStorage<8, 24> mUnk7d450b;
    ::ll::UntypedStorage<8, 8>  mUnkc89ad5;
    ::ll::UntypedStorage<8, 16> mUnk1b5dfe;
    ::ll::UntypedStorage<8, 80> mUnk924dd9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceValidityManager& operator=(BlockSourceValidityManager const&);
    BlockSourceValidityManager(BlockSourceValidityManager const&);
    BlockSourceValidityManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSourceValidityManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IBlockSourceValidityProxy>       blockSourceValidityProxy
    );

    MCAPI void checkBlockSourceValidity();

    MCAPI ~BlockSourceValidityManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IBlockSourceValidityProxy>       blockSourceValidityProxy
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
