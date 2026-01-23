#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class NetworkIdentifier;
struct PlayerAuthenticationInfo;
// clang-format on

class IAsyncJoinRegistrar {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::PlayerAuthenticationInfo const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )>
    ) = 0;

    virtual bool isPaused() = 0;

    virtual ~IAsyncJoinRegistrar() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
