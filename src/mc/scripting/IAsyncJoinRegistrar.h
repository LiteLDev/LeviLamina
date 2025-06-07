#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AsyncVerdictPromise;
class ConnectionRequest;
class NetworkIdentifier;
class SubClientConnectionRequest;
// clang-format on

class IAsyncJoinRegistrar {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<uint64, ::std::function<void(uint64*)>> registerAsyncJoinCallback(
        ::brstd::move_only_function<void(
            ::NetworkIdentifier const&,
            ::std::variant<
                ::std::reference_wrapper<::ConnectionRequest const>,
                ::std::reference_wrapper<::SubClientConnectionRequest const>> const&,
            ::SubClientId,
            ::std::shared_ptr<::AsyncVerdictPromise>
        )>
    ) = 0;

    // vIndex: 1
    virtual bool isPaused() = 0;

    // vIndex: 2
    virtual ~IAsyncJoinRegistrar() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
