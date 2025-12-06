#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ILevelBlockDestroyerProxy;
struct LevelEventManager;
// clang-format on

class LevelBlockDestroyer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const> mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelBlockDestroyerProxy>> const>
        mLevelBlockDestroyerProxy;
    // NOLINTEND
};
