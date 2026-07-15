#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
// clang-format on

class ServerConnectionAuthValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<int64()>>                                    mCurrentTimeFn;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>> mMinecraftServiceKeys;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowExpiredTokens;
    // NOLINTEND
};
