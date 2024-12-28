#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ILevelBlockDestroyerProxy;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk869b18;
    ::ll::UntypedStorage<8, 8>  mUnk2fc36c;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBlockDestroyer& operator=(LevelBlockDestroyer const&);
    LevelBlockDestroyer(LevelBlockDestroyer const&);
    LevelBlockDestroyer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelBlockDestroyer(
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> levelEventManager,
        ::std::unique_ptr<::ILevelBlockDestroyerProxy>     levelBlockDestroyerProxy
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> levelEventManager,
        ::std::unique_ptr<::ILevelBlockDestroyerProxy>     levelBlockDestroyerProxy
    );
    // NOLINTEND
};
