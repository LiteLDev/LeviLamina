#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/future.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
// clang-format on

class IServiceKeysInitialization {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServiceKeysInitialization() = default;

    virtual ::brstd::future<bool> init() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::IServiceKeysInitialization>
    create(::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> keys, bool isOnlineMode);
    // NOLINTEND
};
